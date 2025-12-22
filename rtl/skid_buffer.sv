`include "params.svh"
import bronco_params::*;

// ================================================================
// Streaming contract (valid/ready):
// 1) Transfer occurs ONLY on (valid && ready) at the rising clock edge.
// 2) valid MUST NOT depend combinationally on ready.
// 3) Once valid=1, valid and data MUST remain stable until a handshake completes.
// ================================================================

module skid_buffer #(
  parameter int DATA_WIDTH = bronco_params::DATA_WIDTH
) (
  input logic clk,
  input logic rst_n,

  // upstream input (from fetch engine to buffer)
  input logic in_vld,
  output logic in_rdy,
  input logic [DATA_WIDTH-1:0] in_data,

  // downstream output (from buffer to matrix core)
  output logic out_vld,
  input  logic out_rdy,
  output logic [DATA_WIDTH-1:0] out_data
);

  logic skid_full; // used to represent if we have one buffered beat stored
  logic [DATA_WIDTH-1:0] skid_data; // the stored beat

  // if skid_full == 1, output is driven from the buffer (out_vld = 1, out_data = skid_data)
  // if skid_full == 0, output directly mirrors input (out_vld = in_vld, out_data = in_data)
  assign out_vld = skid_full ? skid_full : in_vld;
  assign out_data = skid_full ? skid_data : in_data;

  // if the buffer is empty (!skid_full) => we can accept a beat => in_rdy = 1
  // if the buffer is full => we can accept a beat only if downstream (matrix core) is ready right now (out_rdy = 1)
  // ifg the buffer is full AND the downstream is not ready, we must stall upstream (in_rdy = 0) because we only have 1 beat slot
  assign in_rdy = (!skid_full) || out_rdy;

  // runs on each rising edge of clk (0 -> 1), OR immediately when reset asserts (1 -> 0)
  always_ff @(posedge clk or negedge rst_n) begin

    // one reset, clear the buffer (set skid_full to [0] and set skid_data to empty bit object of 0's)
    if (!rst_n) begin
      skid_full <= 1'b0;
      skid_data <= '0;
    end else begin

      // when skid buffer is currently empty
      if (!skid_full) begin
        // if fetch engine is ready to provide data, but matrix core is not ready to receive data, we set fill out skid_data with the information
        if (in_vld && !out_rdy) begin
          skid_full <= 1'b1;
          skid_data <= in_data;
        end

      // when the skid buffer is full
      end else begin
      
        // when the matrix core is ready to receive data
        if (out_rdy) begin
          // if fetch engine is ready to send data
          if (in_vld) begin
            skid_full <= 1'b1;      // stays full
            skid_data <= in_data;   // if skid buffer is full, matrix core is ready, and fetch engine is ready, we set our current skid data to the new data from fetch engine
          end else begin
            skid_full <= 1'b0;      // if skid buffer is full, matrix core is ready, but fetch engine is not ready, we keep our existing skid data
          end
        end
      end
    end
  end

endmodule
