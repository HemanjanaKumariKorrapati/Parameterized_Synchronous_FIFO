`timescale 1ns/1ps
module full_logic #(
    parameter DEPTH = 16,
    parameter ADDR_WIDTH = 4
)(
    input  [ADDR_WIDTH:0] count,

    output full
);

assign full = (count == DEPTH);

endmodule