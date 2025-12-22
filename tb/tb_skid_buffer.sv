`timescale 1ns/1ps
`include "params.svh"
import bronco_params::*;

module tb_skid_buffer;

  localparam int N = 200;

  logic clk;
  logic rst_n;

  // DUT ports
  logic                  in_vld;
  logic                  in_rdy;
  logic [DATA_WIDTH-1:0] in_data;

  logic                  out_vld;
  logic                  out_rdy;
  logic [DATA_WIDTH-1:0] out_data;

  logic [DATA_WIDTH-1:0] stim [0:N-1];

  int in_idx;
  int out_idx;
  int cycles;

  // Clock
  initial clk = 0;
  always #5 clk = ~clk;

  skid_buffer #(.DATA_WIDTH(DATA_WIDTH)) dut (
    .clk, .rst_n,
    .in_vld, .in_rdy, .in_data,
    .out_vld, .out_rdy, .out_data
  );

  // Compliant upstream (combinationally driven from registered in_idx)
  always_comb begin
    in_vld  = (in_idx < N);
    in_data = stim[in_idx];
  end

  // Make out_rdy stable BEFORE posedge; avoid "using rst_n as a clocked reset" in TB
  initial out_rdy = 1'b0;
  always @(negedge clk) begin
    out_rdy <= rst_n && ($urandom_range(0, 3) != 0); // ~75% ready, forced low in reset
  end

  initial begin
    // init stimulus: 0..199 (mod 256)
    for (int i = 0; i < N; i++) begin
      stim[i] = i[DATA_WIDTH-1:0];
    end

    rst_n = 0;
    #30;
    rst_n = 1;
  end

  // The entire “driver + scoreboard” is clocked -> no races
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      in_idx  <= 0;
      out_idx <= 0;
      cycles  <= 0;
    end else begin
      cycles <= cycles + 1;

      // Check downstream receives in order, no drops
      if (out_vld && out_rdy) begin
        if (out_data !== stim[out_idx]) begin
          $display("FAIL at t=%0t: expected %0d got %0d (out_idx=%0d)",
                   $time, stim[out_idx], out_data, out_idx);
          $fatal;
        end
        out_idx <= out_idx + 1;
      end

      // Upstream advances only on handshake
      if (in_vld && in_rdy) begin
        in_idx <= in_idx + 1;
      end

      // Finish / timeout
      if (out_idx == N) begin
        $display("SKID_BUFFER PASS: %0d beats, random backpressure, no loss/reorder", N);
        $finish;
      end

      if (cycles > 5000) begin
        $display("FAIL: timeout (out_idx=%0d, in_idx=%0d, cycles=%0d)", out_idx, in_idx, cycles);
        $fatal;
      end
    end
  end

endmodule
