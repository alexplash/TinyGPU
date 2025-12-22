
`ifndef BRONCO_TINYGPU_PARAMS_SVH
`define BRONCO_TINYGPU_PARAMS_SVH

package bronco_params;
    
    parameter int DATA_WIDTH = 8; // width of input integer data
    parameter int ACC_WIDTH = 16; // width of the internal accumulator and result output
    parameter int ADDR_WIDTH = 8; // width of the system memory address bus
    parameter int MAT_DIM = 4; // dimension of the square matrix (n * n) and input vector (n)

    parameter int W_DEPTH = MAT_DIM * MAT_DIM; // deoth of weight memory
    parameter int X_DEPTH = MAT_DIM; // depth of the input vector memory

    typedef logic [DATA_WIDTH-1:0] data_t;
    typedef logic [ACC_WIDTH-1:0] acc_t;
    typedef logic [ADDR_WIDTH-1:0] addr_t;

    localparam logic [1:0] OP_SET_W_BASE = 2'b00;
    localparam logic [1:0] OP_SET_X_BASE = 2'b01;
    localparam logic [1:0] OP_RUN = 2'b10;
    localparam logic [1:0] OP_RSVD = 2'b11;
endpackage

`endif
