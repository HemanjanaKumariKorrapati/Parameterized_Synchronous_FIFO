module fifo_top #(
    parameter DATA_WIDTH = 8,
    parameter DEPTH = 16,
    parameter ADDR_WIDTH = 4
)(
    input                       clk,
    input                       rst,
    input                       wr_en,
    input                       rd_en,
    input  [DATA_WIDTH-1:0]     wr_data,

    output [DATA_WIDTH-1:0]     rd_data,
    output                      full,
    output                      empty
);

wire [ADDR_WIDTH-1:0] wr_ptr;
wire [ADDR_WIDTH-1:0] rd_ptr;

wire [ADDR_WIDTH:0] count;

wire write_enable;
wire read_enable;

fifo_memory #(
    .DATA_WIDTH(DATA_WIDTH),
    .DEPTH(DEPTH),
    .ADDR_WIDTH(ADDR_WIDTH)
) u_fifo_memory (
    .clk(clk),
    .wr_en(write_enable),
    .rd_en(read_enable),
    .wr_data(wr_data),
    .wr_ptr(wr_ptr),
    .rd_ptr(rd_ptr),
    .rd_data(rd_data)
);

write_pointer #(
    .ADDR_WIDTH(ADDR_WIDTH),
    .DEPTH(DEPTH)
) u_write_pointer (
    .clk(clk),
    .rst(rst),
    .wr_en(write_enable),
    .full(full),
    .wr_ptr(wr_ptr)
);

read_pointer #(
    .ADDR_WIDTH(ADDR_WIDTH),
    .DEPTH(DEPTH)
) u_read_pointer (
    .clk(clk),
    .rst(rst),
    .rd_en(read_enable),
    .empty(empty),
    .rd_ptr(rd_ptr)
);

fifo_counter #(
    .DEPTH(DEPTH),
    .ADDR_WIDTH(ADDR_WIDTH)
) u_fifo_counter (
    .clk(clk),
    .rst(rst),
    .wr_en(wr_en),
    .rd_en(rd_en),
    .full(full),
    .empty(empty),
    .count(count)
);

write_control u_write_control (
    .wr_en(wr_en),
    .full(full),
    .write_enable(write_enable)
);

read_control u_read_control (
    .rd_en(rd_en),
    .empty(empty),
    .read_enable(read_enable)
);

full_logic #(
    .DEPTH(DEPTH),
    .ADDR_WIDTH(ADDR_WIDTH)
) u_full_logic (
    .count(count),
    .full(full)
);

empty_logic #(
    .ADDR_WIDTH(ADDR_WIDTH)
) u_empty_logic (
    .count(count),
    .empty(empty)
);

endmodule