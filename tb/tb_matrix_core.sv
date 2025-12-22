`timescale 1ns/1ps
`include "params.svh"
import bronco_params::*;

module tb_matrix_core;

  logic clk;
  logic rst_n;

  // Sink
  logic                  snk_vld;
  logic                  snk_rdy;
  logic [DATA_WIDTH-1:0] snk_data;

  // Source
  logic                  src_vld;
  logic                  src_rdy;
  logic [ACC_WIDTH-1:0]  src_data;

  logic is_computing;

  // Declare these at MODULE scope (Verilator-friendly)
  logic [ACC_WIDTH-1:0] y [0:3];
  logic [ACC_WIDTH-1:0] hold;

  matrix_core dut (
    .clk(clk),
    .rst_n(rst_n),
    .snk_vld(snk_vld),
    .snk_rdy(snk_rdy),
    .snk_data(snk_data),
    .src_vld(src_vld),
    .src_rdy(src_rdy),
    .src_data(src_data),
    .is_computing(is_computing)
  );

  // clock
  initial clk = 0;
  always #5 clk = ~clk;

  task automatic send_byte(input data_t b);
    begin
      snk_data = b;
      snk_vld  = 1'b1;
      while (!(snk_vld && snk_rdy)) @(posedge clk);
      @(posedge clk);
      snk_vld = 1'b0;
    end
  endtask

  task automatic recv_word(output acc_t w);
    begin
      while (!src_vld) @(posedge clk);
      while (!(src_vld && src_rdy)) @(posedge clk);
      w = src_data;
      @(posedge clk);
    end
  endtask

  initial begin
    // init
    snk_vld  = 0;
    snk_data = '0;
    src_rdy  = 1;
    rst_n    = 0;

    repeat (3) @(posedge clk);
    rst_n = 1;
    repeat (2) @(posedge clk);

    // Feed 16 weights: 1..16
    for (int i = 0; i < 16; i++) begin
      send_byte(data_t'(i+1));
    end

    // Feed 4 x: 1,2,3,4
    send_byte(data_t'(1));
    send_byte(data_t'(2));
    send_byte(data_t'(3));
    send_byte(data_t'(4));

    // Backpressure check: once src_vld is high, src_data must remain stable while src_rdy=0
    while (!src_vld) @(posedge clk);
    hold = src_data;

    src_rdy = 0;
    repeat (3) begin
      @(posedge clk);
      if (src_vld && src_data !== hold) begin
        $fatal(1, "Backpressure violated: src_data changed while src_vld=1 and src_rdy=0");
      end
    end
    src_rdy = 1;

    // Collect 4 outputs
    recv_word(y[0]);
    recv_word(y[1]);
    recv_word(y[2]);
    recv_word(y[3]);

    // Expected: W = 1..16, X = [1,2,3,4]
    // y0=30, y1=70, y2=110, y3=150
    if (y[0] !== acc_t'(30))  $fatal(1, "y0 mismatch: got %0d", y[0]);
    if (y[1] !== acc_t'(70))  $fatal(1, "y1 mismatch: got %0d", y[1]);
    if (y[2] !== acc_t'(110)) $fatal(1, "y2 mismatch: got %0d", y[2]);
    if (y[3] !== acc_t'(150)) $fatal(1, "y3 mismatch: got %0d", y[3]);

    $display("MATRIX_CORE UNIT TEST PASS: %0d %0d %0d %0d", y[0], y[1], y[2], y[3]);
    $finish;
  end

endmodule
