module write_pointer #(
    parameter ADDR_WIDTH = 4,
    parameter DEPTH = 16
)(
    input                       clk,
    input                       rst,
    input                       wr_en,
    input                       full,

    output reg [ADDR_WIDTH-1:0] wr_ptr
);

localparam [ADDR_WIDTH-1:0] LAST_ADDR = {ADDR_WIDTH{1'b1}};

always @(posedge clk or posedge rst)
begin
    if (rst)
        wr_ptr <= 0;
    else if (wr_en && !full)
    begin
        if (wr_ptr == LAST_ADDR)
            wr_ptr <= 0;
        else
            wr_ptr <= wr_ptr + 1;
    end
end

endmodule