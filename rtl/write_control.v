`timescale 1ns/1ps
module write_control(
    input  wr_en,
    input  full,

    output write_enable
);

assign write_enable = wr_en && !full;

endmodule