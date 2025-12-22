`include "params.svh"
import bronco_params::*;

// ================================================================
// Streaming contract (valid/ready):
// 1) Transfer occurs ONLY on (valid && ready) at the rising clock edge.
// 2) valid MUST NOT depend combinationally on ready.
// 3) Once valid=1, valid and data MUST remain stable until a handshake completes.
// ================================================================

module fetch_engine #(
    parameter int DATA_WIDTH = bronco_params::DATA_WIDTH,
    parameter int ADDR_WIDTH = bronco_params::ADDR_WIDTH,
    parameter int MAT_DIM    = bronco_params::MAT_DIM,
    parameter int MAX_INFLIGHT = 1 // assuming a 1-deep skid buffer
) (

    input logic clk,
    input logic rst_n,

    // host control
    input logic start, // command pulse. "execute this op_code now"
    input logic [1:0] op_code, // 2'b00: set W base register to cfg_data. 2'b01: set X base register to cfg_data. 2'b10: RUN (start operation)
    input logic [ADDR_WIDTH-1:0] cfg_data, // holds the base address for W and X

    // memory request channel (between RAM and fetch engine) (RAM accepts memory address request from fetch engine)
    output logic m_req_vld,
    input logic m_req_rdy,
    output logic [ADDR_WIDTH-1:0] m_req_addr,

    // memory response channel (between RAM and fetch engine) (RAM sends data back to fetch engine)
    input logic m_rsp_vld,
    input logic [DATA_WIDTH-1:0] m_rsp_data,

    // stream output to core (between fetch engine and matrix core)
    output logic src_vld,
    input logic src_rdy,
    output logic [DATA_WIDTH-1:0] src_data,

    // status (this is buys, i.e. busy = 1, when the fetch engine is processing a RUN)
    output logic busy
);

    // derived sizes (how many reads must be issued to RAM, and how many beats must be outputted to matrix core)
    localparam int W_DEPTH = MAT_DIM * MAT_DIM;
    localparam int X_DEPTH = MAT_DIM;
    localparam int TOTAL_BEATS = W_DEPTH + X_DEPTH;

    // CSR's (programmer-visible)
    // these hold the programmed base addresses from the host
    logic [ADDR_WIDTH-1:0] reg_w_base;
    logic [ADDR_WIDTH-1:0] reg_x_base;

    // response handler: 1-deep skid buffer
    // input: m_rsp_*
    // output: src_*
    // tells whether the skid buffer is ready to accept beats from fetch engine
    logic skid_in_rdy;

    // fetch engine sends data to skid buffer, not matrix core directly
    skid_buffer #(
        .DATA_WIDTH(DATA_WIDTH)
    ) u_rsp_skid (
        .clk (clk),
        .rst_n (rst_n),
        .in_vld (m_rsp_vld),
        .in_rdy (skid_in_rdy),
        .in_data (m_rsp_data),
        .out_vld (src_vld),
        .out_rdy (src_rdy),
        .out_data (src_data)
    );

    // if RAM rever returns data when skid can't accept, that is overflow
    // with MAX_INFLIGHT = 1, this should never happen
    // if RAM ever asserts that it is ready to send data, but the skid buffer says "I can't take it", then we have a design bug: we allowed too many requests inflight or did not stall properly
    // however, since MAX_INFLIGHT is 1, and our request logic stalls when skid is full, this should never happen
`ifndef SYNTHESIS
    always_ff @(posedge clk) begin
        if (rst_n && m_rsp_vld && !skid_in_rdy) begin
            $fatal(1, "FETCH_ENGINE overflow: m_rsp_vld when skid cannot accept (skid_in_rdy=0)");
        end
    end
`endif


    // request FSM (finite-state machine) (address generator)
    typedef enum logic [1:0] { S_IDLE, S_REQ_W, S_REQ_X, S_WAIT_DRAIN } state_t;
    state_t state_q, state_d; // state_q: current state. stade_d: next state
    // S_IDLE: waiting for RUN
    // S_REQ_W: issue W reads
    // S_REQ_X: issue X reads
    // S_WAIT_DRAIN: stop issuing requests to RAM; wait until all outputs have actually been consumed by matrix core

    // these track which elements of W and X are being requests to RAM
    int unsigned w_idx_q, w_idx_d;
    int unsigned x_idx_q, x_idx_d;

    // inflight_q: how many memory requests are outstanding (sent but not yet accepted into skid buffer)
    // consumed_q: how many beats the matrix core has actually consumed (handshake on src channel)
    int unsigned inflight_q, inflight_d;
    int unsigned consumed_q, consumed_d; // used so we know when the whole data fetching/sending job is done

    // handshakes
    logic req_fire;
    logic rsp_accept;
    logic src_fire;

    assign req_fire = m_req_vld && m_req_rdy; // a read request was accepted by memory
    assign src_fire = src_vld && src_rdy; // the matrix core accepted a beat
    assign rsp_accept = m_rsp_vld && skid_in_rdy; // a response beat was accepted into the skid buffer (either stored or passed through)

    // busy flag: this reflects if we are "processing a RUN command"
    assign busy = (state_q != S_IDLE);

    // stall condition: using skid_in_rdy, if it is 0, skid_reg is full and core is not taking data
    // if skid buffer is full and not ready, we stall requests to memory, as to not overflow
    // if we already have too manny outstanding requests, we stall requests to memory, as to not overflow
    logic stall_req;
    assign stall_req = (!skid_in_rdy) || (inflight_q >= MAX_INFLIGHT);

    // request outputs
    always_comb begin
        m_req_vld = 1'b0;
        m_req_addr = '0;

        // if we are not stalled, and we are in a request phase:
            // assert that we are ready to send request to RAM
            // drive the requested address in memory based on which phase and index
        // this block is the "address generator"
        if (!stall_req) begin
            case (state_q)
                S_REQ_W: begin
                    m_req_vld = 1'b1;
                    m_req_addr = reg_w_base + w_idx_q[ADDR_WIDTH-1:0];
                end

                S_REQ_X: begin
                    m_req_vld = 1'b1;
                    m_req_addr = reg_x_base + x_idx_q[ADDR_WIDTH-1:0];
                end

                default: begin
                    // no request by default
                end
            endcase
        end
    end

    // next-state logic
    always_comb begin
        // by default, the next state values equal the current state values for everything
        state_d = state_q;
        w_idx_d = w_idx_q;
        x_idx_d = x_idx_q;
        inflight_d = inflight_q + (req_fire ? 1 : 0) - (rsp_accept ? 1 : 0); // inflight_d gets updated by +1 if request fired, and -1 if response accepted
        consumed_d = consumed_q;

        // track what the matrix core actually accepted
        // if the core accepted a beat this cycle, increment consumed
        if (src_fire) begin
            consumed_d = consumed_q + 1;
        end

        case (state_q)
            // when we get a RUN command, we reset indices and counters, and we go to W request phase
            S_IDLE: begin
                // wait for RUN command pulse
                if (start && op_code == 2'b10) begin
                    // start RUN: reset counters + begin W phase
                    w_idx_d = 0;
                    x_idx_d = 0;
                    inflight_d = 0;
                    consumed_d = 0;
                    state_d = S_REQ_W;
                end
            end

            // issue 16 W reads
            // only when a request is actually accepted by memory
                // if we just issued the last W request (index 15), switch to X request phase
                // otherwise, increment W index
            // we issue W requests as fast as RAM allows, and we keep track of our place
            S_REQ_W: begin
                if (req_fire) begin
                    // we switch to sending X requests when all requests have been sent to RAM
                    if (w_idx_q == (W_DEPTH - 1)) begin
                        state_d = S_REQ_X;
                        x_idx_d = 0;
                    end else begin
                        w_idx_d = w_idx_q + 1;
                    end
                end
            end

            // issue 4 X reads
            // incremenet per accepted request
            // after last X request, stop issuing and go wait for everything to be consumed
            S_REQ_X: begin
                if (req_fire) begin
                    // we switch draining and sending data to matrix core when all requests have been sent to RAM
                    if (x_idx_q == (X_DEPTH - 1)) begin
                        state_d = S_WAIT_DRAIN;
                    end else begin
                        x_idx_d = x_idx_q + 1;
                    end
                end
            end

            // we want to return to idle state on the cycle that the final beat is consumed
            // when the final beat is consumed, src_fire = 1
            // right before the final beat is consumed, consumed_q = TOTAL_BEATS - 1
            // so we check:
                // are we about to consume the last beat? if so, consumed_q == TOTAL_BEATS -1 AND src_fire == 1
            // then we go idle, ready for the next RUN command
            S_WAIT_DRAIN: begin
                // wait until all beats have been accepted by the matrix core
                // wait for all requested data to be acknowledged
                if (consumed_q == (TOTAL_BEATS - 1) && src_fire) begin
                    state_d = S_IDLE;
                end
            end

            default: begin
                state_d = S_IDLE;
            end
        endcase
    end

    // sequential state
    always_ff @(posedge clk or negedge rst_n) begin
        // if the circuit is being reset, reset all counters and states
        if (!rst_n) begin
            state_q <= S_IDLE;
            w_idx_q <= 0;
            x_idx_q <= 0;
            inflight_q <= 0;
            consumed_q <= 0;

            reg_w_base <= '0;
            reg_x_base <= '0;

        // if no reset is occuring, we set the current state to our next state at the end of the clock tick
        end else begin
            state_q <= state_d;
            w_idx_q <= w_idx_d;
            x_idx_q <= x_idx_d;
            inflight_q <= inflight_d;
            consumed_q <= consumed_d;

            // CSR / opcode handling (command pulse + decoder)
            if (start) begin
                unique case (op_code)
                    2'b00: begin
                        reg_w_base <= cfg_data; // SET_W_BASE
                    end

                    2'b01: begin
                        reg_x_base <= cfg_data; // SET_X_BASE
                    end

                    default: begin
                        // RUN handled in FSM code block, 2'b11 = no operation
                    end
                endcase
            end
        end
    end



endmodule
