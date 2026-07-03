module read_pointer #(
    parameter ADDR_WIDTH = 4,
    parameter DEPTH = 16
)(
    input                       clk,
    input                       rst,
    input                       rd_en,
    input                       empty,

    output reg [ADDR_WIDTH-1:0] rd_ptr
);

localparam [ADDR_WIDTH-1:0] LAST_ADDR = {ADDR_WIDTH{1'b1}};

always @(posedge clk or posedge rst)
begin
    if (rst)
        rd_ptr <= 0;
    else if (rd_en && !empty)
    begin
        if (rd_ptr == LAST_ADDR)
            rd_ptr <= 0;
        else
            rd_ptr <= rd_ptr + 1;
    end
end

endmodule