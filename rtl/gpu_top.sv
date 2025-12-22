`include "params.svh"
import bronco_params::*;

module gpu_top #(
    parameter int DATA_WIDTH = bronco_params::DATA_WIDTH,
    parameter int ACC_WIDTH  = bronco_params::ACC_WIDTH,
    parameter int ADDR_WIDTH = bronco_params::ADDR_WIDTH
) (
    input logic clk,
    input logic rst_n,

    // host control
    input logic start,
    input logic [1:0] op_code,
    input logic [ADDR_WIDTH-1:0] cfg_data,

    // memory interface
    output logic m_req_vld,
    input logic m_req_rdy,
    output logic [ADDR_WIDTH-1:0] m_req_addr,
    input logic m_rsp_vld,
    input logic [DATA_WIDTH-1:0] m_rsp_data,

    // top-level status/results
    output logic busy,
    output logic result_vld,
    input logic result_rdy,
    output logic [ACC_WIDTH-1:0] result_data
);

    // fetch engine -> matrix core stream wiring
    logic fe_src_vld;
    logic fe_src_rdy;
    logic [DATA_WIDTH-1:0] fe_src_data;

    // internal status
    logic fe_busy;
    logic core_is_computing;

    // fetch engine
    fetch_engine u_fetch (
        .clk (clk),
        .rst_n (rst_n),

        .start (start),
        .op_code (op_code),
        .cfg_data (cfg_data),

        .m_req_vld (m_req_vld),
        .m_req_rdy (m_req_rdy),
        .m_req_addr (m_req_addr),

        .m_rsp_vld (m_rsp_vld),
        .m_rsp_data (m_rsp_data),

        // core-source stream (goes into matrix core sink)
        .src_vld (fe_src_vld),
        .src_rdy (fe_src_rdy),
        .src_data (fe_src_data),

        .busy (fe_busy)
    );

    // matrix core
    matrix_core u_core (
        .clk (clk),
        .rst_n (rst_n),

        // sink (input stream from fetch engine)
        .snk_vld (fe_src_vld),
        .snk_rdy (fe_src_rdy),
        .snk_data (fe_src_data),

        // source (output stream = top-level result)
        .src_vld (result_vld),
        .src_rdy (result_rdy),
        .src_data (result_data),

        // status for top-level busy mapping
        .is_computing (core_is_computing)
    );

    // top-level busy: asserted if either block is actively doing work
    // fetch is mid_RUN issuing/handling traffic OR core is loaing/computing/flushing
    assign busy = fe_busy || core_is_computing;

endmodule
