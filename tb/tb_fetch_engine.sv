
`timescale 1ns/1ps
`include "params.svh"
import bronco_params::*;


module tb_fetch_engine;

  localparam int W_DEPTH     = MAT_DIM * MAT_DIM;
  localparam int X_DEPTH     = MAT_DIM;
  localparam int TOTAL_BEATS = W_DEPTH + X_DEPTH;

  logic clk, rst_n;

  // host
  logic start;
  logic [1:0] op_code;
  logic [ADDR_WIDTH-1:0] cfg_data;

  // mem
  logic m_req_vld, m_req_rdy;
  logic [ADDR_WIDTH-1:0] m_req_addr;
  logic m_rsp_vld;
  logic [DATA_WIDTH-1:0] m_rsp_data;

  // to core (sink)
  logic src_vld, src_rdy;
  logic [DATA_WIDTH-1:0] src_data;

  logic busy;

  // DUT
  fetch_engine dut (
    .clk(clk), .rst_n(rst_n),
    .start(start), .op_code(op_code), .cfg_data(cfg_data),
    .m_req_vld(m_req_vld), .m_req_rdy(m_req_rdy), .m_req_addr(m_req_addr),
    .m_rsp_vld(m_rsp_vld), .m_rsp_data(m_rsp_data),
    .src_vld(src_vld), .src_rdy(src_rdy), .src_data(src_data),
    .busy(busy)
  );

  // clock
  initial clk = 0;
  always #5 clk = ~clk;

  // toy memory contents
  byte mem [0:(1<<ADDR_WIDTH)-1];

  // single-outstanding toy RAM responder with random latency
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
      // random request ready (backpressure from RAM)
      m_req_rdy <= ($urandom_range(0,3) != 0); // 75% ready

      // default no response
      m_rsp_vld <= 1'b0;

      // accept request
      if (m_req_vld && m_req_rdy) begin
        pending   <= 1'b1;
        pend_addr <= m_req_addr;
        countdown <= $urandom_range(1,4); // random latency
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

  // random sink backpressure
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) src_rdy <= 1'b0;
    else        src_rdy <= ($urandom_range(0,3) != 0); // 75% ready
  end

  // collect outputs
  int out_count;
  byte got [0:TOTAL_BEATS-1];

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      out_count <= 0;
    end else if (src_vld && src_rdy) begin
      got[out_count] <= src_data;
      out_count <= out_count + 1;
    end
  end

  // host helper
  task pulse_cmd(input logic [1:0] opc, input logic [ADDR_WIDTH-1:0] data);
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

  initial begin
    // init mem
    for (int i=0; i<(1<<ADDR_WIDTH); i++) mem[i] = byte'(i);

    // reset
    start = 0; op_code = 0; cfg_data = 0;
    rst_n = 0;
    repeat (5) @(negedge clk);
    rst_n = 1;

    // program bases
    pulse_cmd(2'b00, 8'h10); // W_BASE = 0x10
    pulse_cmd(2'b01, 8'h80); // X_BASE = 0x80

    // run
    pulse_cmd(2'b10, '0);

    // wait for all beats
    wait(out_count == TOTAL_BEATS);

    // check order: W then X
    for (int i=0; i<W_DEPTH; i++) begin
      if (got[i] !== mem[8'h10 + i]) $fatal(1, "Mismatch W[%0d]", i);
    end
    for (int i=0; i<X_DEPTH; i++) begin
      if (got[W_DEPTH+i] !== mem[8'h80 + i]) $fatal(1, "Mismatch X[%0d]", i);
    end

    $display("FETCH_ENGINE PASS: %0d beats, random RAM rdy + random sink backpressure", TOTAL_BEATS);
    $finish;
  end
endmodule
