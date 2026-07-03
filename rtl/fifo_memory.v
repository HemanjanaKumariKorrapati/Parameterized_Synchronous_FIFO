module fifo_memory #(
    parameter DATA_WIDTH = 8,
    parameter DEPTH = 16,
    parameter ADDR_WIDTH = 4
)(
    input                           clk,
    input                           wr_en,
    input                           rd_en,

    input  [DATA_WIDTH-1:0]         wr_data,

    input  [ADDR_WIDTH-1:0]         wr_ptr,
    input  [ADDR_WIDTH-1:0]         rd_ptr,

    output reg [DATA_WIDTH-1:0]     rd_data
);

reg [DATA_WIDTH-1:0] mem [0:DEPTH-1];

always @(posedge clk)
begin
    if (wr_en)
        mem[wr_ptr] <= wr_data;
end

always @(posedge clk)
begin
    if (rd_en)
        rd_data <= mem[rd_ptr];
end

endmodule