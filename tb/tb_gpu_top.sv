`timescale 1ns/1ps
`include "params.svh"
import bronco_params::*;

module tb_gpu_top;

  localparam int W_DEPTH = MAT_DIM * MAT_DIM;

  logic clk, rst_n;

  // host
  logic start;
  logic [1:0] op_code;
  logic [ADDR_WIDTH-1:0] cfg_data;

  // memory interface
  logic m_req_vld, m_req_rdy;
  logic [ADDR_WIDTH-1:0] m_req_addr;
  logic m_rsp_vld;
  logic [DATA_WIDTH-1:0] m_rsp_data;

  // results
  logic busy;
  logic result_vld, result_rdy;
  logic [ACC_WIDTH-1:0] result_data;

  // DUT
  gpu_top dut (
    .clk(clk),
    .rst_n(rst_n),

    .start(start),
    .op_code(op_code),
    .cfg_data(cfg_data),

    .m_req_vld(m_req_vld),
    .m_req_rdy(m_req_rdy),
    .m_req_addr(m_req_addr),
    .m_rsp_vld(m_rsp_vld),
    .m_rsp_data(m_rsp_data),

    .busy(busy),
    .result_vld(result_vld),
    .result_rdy(result_rdy),
    .result_data(result_data)
  );

  // ----------------------------
  // Clock
  // ----------------------------
  initial clk = 1'b0;
  always #5 clk = ~clk;

  // ----------------------------
  // Toy byte-addressed memory
  // ----------------------------
  byte mem [0:(1<<ADDR_WIDTH)-1];

  // Single-outstanding RAM responder with random latency + random req backpressure
  logic pending;
  logic [ADDR_WIDTH-1:0] pend_addr;
  int unsigned countdown;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      m_req_rdy  <= 1'b0;
      m_rsp_vld  <= 1'b0;
      m_rsp_data <= '0;
      pending    <= 1'b0;
      pend_addr  <= '0;
      countdown  <= 0;
    end else begin
      // Only accept a new request if we don't already have one pending
      m_req_rdy <= (!pending) && ($urandom_range(0,3) != 0); // ~75% ready when idle

      // default no response
      m_rsp_vld <= 1'b0;

      // accept request
      if (m_req_vld && m_req_rdy) begin
        pending   <= 1'b1;
        pend_addr <= m_req_addr;
        countdown <= $urandom_range(1,4); // random latency (1..4 cycles)
      end

      // count down and fire response
      if (pending) begin
        if (countdown == 0) begin
          m_rsp_vld  <= 1'b1;
          m_rsp_data <= mem[pend_addr];
          pending    <= 1'b0;
        end else begin
          countdown <= countdown - 1;
        end
      end
    end
  end

  // Random backpressure on result sink
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) result_rdy <= 1'b0;
    else        result_rdy <= ($urandom_range(0,3) != 0); // ~75% ready
  end

  // ----------------------------
  // Host helper: pulse a command for 1 cycle
  // ----------------------------
  task automatic pulse_cmd(input logic [1:0] opc, input logic [ADDR_WIDTH-1:0] data);
    begin
      @(negedge clk);
      start    = 1'b1;
      op_code  = opc;
      cfg_data = data;

      @(negedge clk);
      start    = 1'b0;
      op_code  = '0;
      cfg_data = '0;
    end
  endtask

  // ----------------------------
  // Compute expected y = W * X (row-major W)
  // matches your matrix_core behavior: sum then truncate to ACC_WIDTH
  // ----------------------------
  function automatic logic [ACC_WIDTH-1:0] expected_row(
    input byte W [0:W_DEPTH-1],
    input byte X [0:MAT_DIM-1],
    input int unsigned row
  );
    int unsigned sum;
    begin
      sum = 0;
      for (int c = 0; c < MAT_DIM; c++) begin
        sum += (int'(W[row*MAT_DIM + c]) & 8'hFF) * (int'(X[c]) & 8'hFF);
      end
      expected_row = sum[ACC_WIDTH-1:0];
    end
  endfunction

  task automatic print_vec4(input string label, input byte X [0:MAT_DIM-1]);
    $display("%s = [%0d %0d %0d %0d]", label, X[0], X[1], X[2], X[3]);
  endtask

  task automatic print_mat4(input string label, input byte W [0:W_DEPTH-1]);
    $display("%s =", label);
    for (int r = 0; r < MAT_DIM; r++) begin
      $display("  [%0d %0d %0d %0d]",
        W[r*MAT_DIM + 0], W[r*MAT_DIM + 1], W[r*MAT_DIM + 2], W[r*MAT_DIM + 3]
      );
    end
  endtask

  task automatic print_out4(input string label, input logic [ACC_WIDTH-1:0] Y [0:MAT_DIM-1]);
    $display("%s =", label);
    $display("  dec: [%0d %0d %0d %0d]", Y[0], Y[1], Y[2], Y[3]);
    $display("  hex: [0x%0h 0x%0h 0x%0h 0x%0h]", Y[0], Y[1], Y[2], Y[3]);
  endtask


  // ----------------------------
  // Run one full test:
  //  - write W and X into mem at bases
  //  - program bases
  //  - RUN
  //  - collect MAT_DIM results
  //  - compare
  // ----------------------------
  task automatic do_test(
    input string name,
    input logic [ADDR_WIDTH-1:0] W_BASE,
    input logic [ADDR_WIDTH-1:0] X_BASE,
    input byte W [0:W_DEPTH-1],
    input byte X [0:MAT_DIM-1]
  );
    logic [ACC_WIDTH-1:0] got [0:MAT_DIM-1];
    int out_count;
    int unsigned watchdog;
    logic [ACC_WIDTH-1:0] expY [0:MAT_DIM-1];

    begin
      // write W and X into toy memory
      for (int i = 0; i < W_DEPTH; i++) mem[W_BASE + i] = W[i];
      for (int i = 0; i < MAT_DIM; i++) mem[X_BASE + i] = X[i];

      // program CSRs
      pulse_cmd(2'b00, W_BASE); // SET_W_BASE
      pulse_cmd(2'b01, X_BASE); // SET_X_BASE

      // run
      out_count = 0;
      pulse_cmd(2'b10, '0);     // RUN

      $display("\n==============================");
      $display("%s", name);
      $display("W_BASE=0x%0h X_BASE=0x%0h", W_BASE, X_BASE);
      print_mat4("W", W);
      print_vec4("X", X);

      watchdog = 0;

      // collect results (MAT_DIM beats)
      while (out_count < MAT_DIM) begin
        @(posedge clk);
        watchdog++;

        if (watchdog > 5000) begin
          $fatal(1, "%s TIMEOUT: never received %0d results (got %0d)", name, MAT_DIM, out_count);
        end

        if (result_vld && result_rdy) begin
          got[out_count] = result_data;
          out_count++;
        end
      end


      print_out4("Y_got", got);

      for (int r = 0; r < MAT_DIM; r++) begin
        expY[r] = expected_row(W, X, r);
      end
      print_out4("Y_exp", expY);


      // check
      for (int r = 0; r < MAT_DIM; r++) begin
        logic [ACC_WIDTH-1:0] exp;
        exp = expected_row(W, X, r);
        if (got[r] !== exp) begin
          $fatal(1, "%s FAIL row %0d: got=0x%0h exp=0x%0h", name, r, got[r], exp);
        end
      end

      $display("%s PASS (W_BASE=0x%0h X_BASE=0x%0h)", name, W_BASE, X_BASE);
    end
  endtask

  // ----------------------------
  // Define A,B,C,D,E,F
  // A,C,E are matrices (W), B,D,F are vectors (X)
  // ----------------------------
  byte A [0:W_DEPTH-1];
  byte B [0:MAT_DIM-1];
  byte C [0:W_DEPTH-1];
  byte D [0:MAT_DIM-1];
  byte E [0:W_DEPTH-1];
  byte F [0:MAT_DIM-1];

  initial begin
    // init all mem to known pattern
    for (int i = 0; i < (1<<ADDR_WIDTH); i++) mem[i] = 8'h00;

    // ----------------------------
    // Build test data
    // ----------------------------

    // A = identity matrix, B = [1,2,3,4]
    // expected output = B
    for (int r = 0; r < MAT_DIM; r++) begin
      for (int c = 0; c < MAT_DIM; c++) begin
        A[r*MAT_DIM + c] = (r == c) ? 8'd1 : 8'd0;
      end
    end
    B[0]=8'd1; B[1]=8'd2; B[2]=8'd3; B[3]=8'd4;

    // C = all ones, D = [5,6,7,8]
    // expected output each row = 5+6+7+8 = 26
    for (int i = 0; i < W_DEPTH; i++) C[i] = 8'd1;
    D[0]=8'd5; D[1]=8'd6; D[2]=8'd7; D[3]=8'd8;

    // E = 1..16 row-major, F = [1,0,1,0]
    // expected output row r = E[r,0]*1 + E[r,2]*1
    for (int i = 0; i < W_DEPTH; i++) E[i] = byte'(i+1);
    F[0]=8'd1; F[1]=8'd0; F[2]=8'd1; F[3]=8'd0;

    // ----------------------------
    // Reset
    // ----------------------------
    start = 0; op_code = 0; cfg_data = 0;
    rst_n = 0;
    repeat (5) @(negedge clk);
    rst_n = 1;

    // ----------------------------
    // Run three sequential tests
    // ----------------------------
    do_test("TEST1 A*B", 8'h10, 8'h80, A, B);
    do_test("TEST2 C*D", 8'h30, 8'hA0, C, D);
    do_test("TEST3 E*F", 8'h50, 8'hC0, E, F);

    $display("GPU_TOP ALL TESTS PASS");
    $finish;
  end

endmodule
