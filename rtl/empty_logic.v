`timescale 1ns/1ps
module empty_logic #(
    parameter ADDR_WIDTH = 4
)(
    input  [ADDR_WIDTH:0] count,

    output empty
);

assign empty = (count == 0);

endmodule