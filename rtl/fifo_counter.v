`timescale 1ns/1ps
module fifo_counter #(
    parameter DEPTH = 16,
    parameter ADDR_WIDTH = 4
)(
    input                   clk,
    input                   rst,
    input                   wr_en,
    input                   rd_en,
    input                   full,
    input                   empty,

    output reg [ADDR_WIDTH:0] count
);

always @(posedge clk or posedge rst)
begin
    if (rst)
        count <= 0;

    else
    begin
        case ({wr_en && !full, rd_en && !empty})

            2'b10:
                count <= count + 1;

            2'b01:
                count <= count - 1;

            2'b11:
                count <= count;

            default:
                count <= count;

        endcase
    end
end

endmodule