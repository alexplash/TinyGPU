`include "params.svh"
import bronco_params::*;

// ================================================================
// Streaming contract (valid/ready):
// 1) Transfer occurs ONLY on (valid && ready) at the rising clock edge.
// 2) valid MUST NOT depend combinationally on ready.
// 3) Once valid=1, valid and data MUST remain stable until a handshake completes.
// ================================================================


module matrix_core #(
    parameter int DATA_WIDTH = bronco_params::DATA_WIDTH, // 8
    parameter int ACC_WIDTH  = bronco_params::ACC_WIDTH,  // 16
    parameter int MAT_DIM    = bronco_params::MAT_DIM,    // 4
    parameter int W_DEPTH    = bronco_params::W_DEPTH,    // 16
    parameter int X_DEPTH    = bronco_params::X_DEPTH     // 4
) (
    input logic clk,
    input logic rst_n,

    // sink (input stream of bytes data from fetch engine)
    input logic snk_vld,
    output logic snk_rdy,
    input logic [DATA_WIDTH-1:0] snk_data,

    // source (output stream of bytes data out from the matrix core)
    output logic src_vld,
    input logic src_rdy,
    output logic [ACC_WIDTH-1:0] src_data,

    output logic is_computing // this is a status value for top-level busy mapping
);

    // creates a type called state_t
    // state_t is a set of named values stored in 2 bits (logic [1:0])
    // so state_t can only be one of S_LOAD_W, S_LOAD_X, S_COMPUTE, S_FLUSH
    // basically, "the set of allowed modes the core can be in"
    typedef enum logic [1:0] {
        S_LOAD_W  = 2'b00,
        S_LOAD_X  = 2'b01,
        S_FLUSH   = 2'b11
    } state_t;

    // state is the current state of the core
    // state_n is the next state we will have for the core
    state_t state, state_n;

    // storage
    logic [DATA_WIDTH-1:0] w_mem [0:W_DEPTH-1];
    logic [ACC_WIDTH-1:0]  acc_mem [0:MAT_DIM-1];

    // counters
    logic [$clog2(W_DEPTH)-1:0] w_cnt;
    logic [$clog2(X_DEPTH)-1:0] x_cnt;
    logic [$clog2(MAT_DIM)-1:0] out_cnt;

    // Handshake helpers
    logic snk_fire;
    logic src_fire;

    assign snk_fire = snk_vld && snk_rdy;
    assign src_fire = src_vld && src_rdy;

    // Combinational defaults (no latches)
    always_comb begin
        state_n      = state; // by default, stay in the same state unless the case statement changes it
        snk_rdy      = 1'b0; // bit object [0]; by default do not accept incoming bytes
        src_vld      = 1'b0; // bit object [0]; by default do not claim to have available output
        src_data     = acc_mem[out_cnt]; // if we are outputting, the thing we output is whatever result index we're currently on
        is_computing = 1'b0; // bit object [0]; by default, core is not computing or busy

        // depending on what state we are in, set outputs and decide when to transision
        unique case (state)
            S_LOAD_W: begin
                snk_rdy      = 1'b1; // we are ready to accept bytes from the sink (fetch engine)
                is_computing = 1'b1; // we are currently computing

                // if src and snk are ready, and we have just accepted the last/16th weight byte, we switch to the load X state
                if (snk_fire && (w_cnt == W_DEPTH-1)) begin
                    state_n = S_LOAD_X;
                end
            end

            S_LOAD_X: begin
                snk_rdy      = 1'b1;
                is_computing = 1'b1;

                // if src and snk are ready, and we have just accepted the final x byte, we switch to the compute state
                if (snk_fire && (x_cnt == X_DEPTH-1)) begin
                    state_n = S_FLUSH;
                end
            end

            S_FLUSH: begin
                snk_rdy = 1'b0;
                src_vld      = 1'b1; // now that we have computed the data, we signal that we have ready output data
                is_computing = 1'b1;

                // if src and sink are ready, and we have just streamed our final output byte, we switch back to the original load Wstate
                if (src_fire && (out_cnt == MAT_DIM-1)) begin
                    state_n = S_LOAD_W;
                end
            end

            default: begin
                state_n = S_LOAD_W;
            end
        endcase
    end

    // always_ff is the code that actually stores values and updates counters/states on the clock edge
    // key idea:
        // always_comb decides what should happen next
        // always_ff commits it on the clock
    // @(posedge clk or negedge rst_n) is the "trigger condition" for this always_ff block
        // i.e., when this block is allowed to run
        // @(...) means: “run this block whenever one of these events happens.”
        // posedge clk means: the rising edge of the clock (clk goes 0 → 1).
        // negedge rst_n means: the falling edge of reset (rst_n goes 1 → 0).
        // "Update the sequential state on every rising clock edge, or immediately when reset is asserted (rst_n drops to 0)."
    integer r, c;
    always_ff @(posedge clk or negedge rst_n) begin

        // when the reset is active, put the matrix core back into its initial state
        if (!rst_n) begin
            state   <= S_LOAD_W;
            w_cnt   <= '0;
            x_cnt   <= '0;
            out_cnt <= '0;

            // clear memories
            for (r = 0; r < W_DEPTH; r++) w_mem[r] <= '0;
            for (r = 0; r < MAT_DIM; r++) acc_mem[r] <= '0;
        end else begin
            state <= state_n;

            // if snk and src are ready, and our state is load W
            if (state == S_LOAD_W && snk_fire) begin
                w_mem[w_cnt] <= snk_data; // store new data in the correct index in memory
                if (w_cnt == W_DEPTH-1) begin
                    w_cnt <= '0;
                    x_cnt <= '0;
                    out_cnt <= '0;

                    // Clear accumulators ONCE per operation (right before X streaming starts)
                    for (r = 0; r < MAT_DIM; r++) begin
                        acc_mem[r] <= '0;
                    end
                end else begin
                    w_cnt <= w_cnt + 1'b1; // increment the counter for the next index in memory; this accepts the next time data is send from src
                end
            end

            // if snk and src are ready, and our state is load x
            if (state == S_LOAD_X && snk_fire) begin

                for (r = 0; r < MAT_DIM; r++) begin
                    logic [31:0] prod;
                    logic [31:0] sum;
                    prod = ({24'd0, w_mem[r*MAT_DIM + x_cnt]} * {24'd0, snk_data});
                    sum  = {16'd0, acc_mem[r]} + prod;   // widen accumulator for add
                    acc_mem[r] <= sum[ACC_WIDTH-1:0];
                end

                if (x_cnt == X_DEPTH-1) begin
                    x_cnt   <= '0;
                    out_cnt <= '0;
                end else begin
                    x_cnt <= x_cnt + 1'b1; // increment the counter for the next index in memory; this accepts the next time data is send from src
                end
            end

            // if the state is flush, and we are ready to output data, and the received is ready to receive data, we start streaming data
            if (state == S_FLUSH && src_fire) begin
                if (out_cnt == MAT_DIM-1) begin
                    out_cnt <= '0;
                end else begin
                    out_cnt <= out_cnt + 1'b1; // increment output data index counter by 1
                end
            end

            // When we finish flush; reset counters
            if (state == S_FLUSH && src_fire && (out_cnt == MAT_DIM-1)) begin
                w_cnt <= '0;
                x_cnt <= '0;
            end
        end
    end

endmodule