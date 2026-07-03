`timescale 1ns/1ps
module read_control(
    input  rd_en,
    input  empty,

    output read_enable
);

assign read_enable = rd_en && !empty;

endmodule