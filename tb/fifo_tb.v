`timescale 1ns/1ps

module fifo_tb;

parameter DATA_WIDTH = 8;
parameter DEPTH = 16;
parameter ADDR_WIDTH = 4;

reg clk;
reg rst;
reg wr_en;
reg rd_en;
reg [DATA_WIDTH-1:0] wr_data;

wire [DATA_WIDTH-1:0] rd_data;
wire full;
wire empty;

fifo_top #(
    .DATA_WIDTH(DATA_WIDTH),
    .DEPTH(DEPTH),
    .ADDR_WIDTH(ADDR_WIDTH)
) DUT (
    .clk(clk),
    .rst(rst),
    .wr_en(wr_en),
    .rd_en(rd_en),
    .wr_data(wr_data),
    .rd_data(rd_data),
    .full(full),
    .empty(empty)
);

//------------------------------
// Clock Generation
//------------------------------
initial
begin
    clk = 0;
    forever #5 clk = ~clk;
end

//------------------------------
// Reset Generation
//------------------------------
initial
begin
    rst = 1;
    wr_en = 0;
    rd_en = 0;
    wr_data = 0;

    #20;
    rst = 0;
end

//------------------------------
// Write Task
//------------------------------
task write_fifo;
    input [DATA_WIDTH-1:0] data;
begin
    @(posedge clk);

    if (!full)
    begin
        wr_en = 1;
        wr_data = data;
    end

    @(posedge clk);

    wr_en = 0;
    wr_data = 0;
end
endtask

//------------------------------
// Read Task
//------------------------------
task read_fifo;
begin
    @(posedge clk);

    if (!empty)
        rd_en = 1;

    @(posedge clk);

    rd_en = 0;
end
endtask

//------------------------------
// Verification Variables
//------------------------------
integer pass_count;
integer fail_count;
integer i;

reg [DATA_WIDTH-1:0] expected_data;

//------------------------------
// Initialize Verification Variables
//------------------------------
initial
begin
    pass_count = 0;
    fail_count = 0;
    expected_data = 0;
end

//------------------------------
// Main Test Sequence
//------------------------------
initial
begin

    $dumpfile("waveforms/fifo_tb.vcd");
    $dumpvars(0, fifo_tb);

    @(negedge rst);

    $display("====================================");
    $display(" Starting FIFO Directed Test Cases ");
    $display("====================================");

//----------------------------------------------------------
// DT01 : Reset Verification
//----------------------------------------------------------
rst = 1'b1;
wr_en = 1'b0;
rd_en = 1'b0;
wr_data = 8'h00;
#20;
rst = 1'b0;
#20;

//----------------------------------------------------------
// DT02 : Single Write
//----------------------------------------------------------
write_fifo(8'h11);

//----------------------------------------------------------
// DT03 : Single Read
//----------------------------------------------------------
read_fifo();

//----------------------------------------------------------
// DT04 : Multiple Sequential Writes
//----------------------------------------------------------
write_fifo(8'h21);
write_fifo(8'h22);
write_fifo(8'h23);

//----------------------------------------------------------
// DT05 : Multiple Sequential Reads
//----------------------------------------------------------
read_fifo();
read_fifo();
read_fifo();

//----------------------------------------------------------
// DT06 : Alternating Write and Read
//----------------------------------------------------------
write_fifo(8'h31);
read_fifo();

write_fifo(8'h32);
read_fifo();

write_fifo(8'h33);
read_fifo();

//----------------------------------------------------------
// DT07 : Continuous Writes
//----------------------------------------------------------
write_fifo(8'h41);
write_fifo(8'h42);
write_fifo(8'h43);
write_fifo(8'h44);
write_fifo(8'h45);
write_fifo(8'h46);

//----------------------------------------------------------
// DT08 : Continuous Reads
//----------------------------------------------------------
read_fifo();
read_fifo();
read_fifo();
read_fifo();
read_fifo();
read_fifo();

//----------------------------------------------------------
// DT09 : FIFO Full Condition
//----------------------------------------------------------
repeat (DEPTH)
    write_fifo($random);

#20;

//----------------------------------------------------------
// DT10 : Write When FIFO Full (Overflow Check)
//----------------------------------------------------------
write_fifo(8'hAA);

#20;

//----------------------------------------------------------
// DT11 : FIFO Empty Condition
//----------------------------------------------------------
repeat (DEPTH)
    read_fifo();

#20;

//----------------------------------------------------------
// DT12 : Read When FIFO Empty (Underflow Check)
//----------------------------------------------------------
read_fifo();

#20;

//----------------------------------------------------------
// DT13 : Pointer Wrap-around & Mixed Operations
//----------------------------------------------------------
repeat(DEPTH+2)
    write_fifo($random);

repeat(DEPTH/2)
    read_fifo();

repeat(DEPTH/2)
    write_fifo($random);

repeat(DEPTH+2)
    read_fifo();

// Simultaneous Read & Write
@(posedge clk);
wr_en   = 1;
rd_en   = 1;
wr_data = 8'hAA;

@(posedge clk);
wr_en = 0;
rd_en = 0;   

#50;

    $display("========================================");
    $display(" Directed Test Cases Completed ");
    $display("========================================");

    #20;

    $display("====================================");
    $display(" Simulation Completed ");
    $display("====================================");

    $finish;
end

//==========================================================
// CORNER TEST CASES
//==========================================================

$display("========================================");
$display(" Starting FIFO Corner Test Cases ");
$display("========================================");

//----------------------------------------------------------
// CT01 : Reset During Active Operation
//----------------------------------------------------------
$display("CT01 : Reset During Active Operation");

write_fifo(8'h11);
write_fifo(8'h22);

rst = 1;

#20;

rst = 0;

#20;


//----------------------------------------------------------
// CT02 : Fill -> Empty -> Fill Again
//----------------------------------------------------------
$display("CT02 : Fill -> Empty -> Fill Again");

repeat(DEPTH)
    write_fifo($random);

repeat(DEPTH)
    read_fifo();

repeat(DEPTH)
    write_fifo($random);

#20;


//----------------------------------------------------------
// CT03 : Continuous Simultaneous Read & Write
//----------------------------------------------------------
$display("CT03 : Continuous Simultaneous Read & Write");

repeat(8)
begin
    @(posedge clk);
    wr_en   = 1;
    rd_en   = 1;
    wr_data = $random;
end

@(posedge clk);

wr_en = 0;
rd_en = 0;

#20;


//----------------------------------------------------------
// CT04 : Full -> Not Full -> Full Transition
//----------------------------------------------------------
$display("CT04 : Full -> Not Full -> Full");

repeat(DEPTH)
    write_fifo($random);

read_fifo();

write_fifo($random);

#20;


//----------------------------------------------------------
// CT05 : Empty -> Not Empty -> Empty Transition
//----------------------------------------------------------
$display("CT05 : Empty -> Not Empty -> Empty");

write_fifo(8'h77);

read_fifo();

#20;


//----------------------------------------------------------
// CT06 : Long Stress Operation
//----------------------------------------------------------
$display("CT06 : Long Stress Operation");

repeat(50)
begin
    if($random % 2)
        write_fifo($random);
    else
        read_fifo();
end

#20;

$display("========================================");
$display(" Corner Test Cases Completed ");
$display("========================================");

//----------------------------------------------------------
// RANDOMIZED STRESS TEST (100 Random Transactions)
//----------------------------------------------------------
$display("========================================");
$display(" Starting Randomized Stress Test ");
$display("========================================");

repeat(100)
begin
    case($random % 4)

        // Random Write
        0:
        begin
            write_fifo($random);
        end

        // Random Read
        1:
        begin
            read_fifo();
        end

        // Simultaneous Read & Write
        2:
        begin
            @(posedge clk);

            if(!full)
            begin
                wr_en   = 1;
                wr_data = $random;
            end

            if(!empty)
                rd_en = 1;

            @(posedge clk);

            wr_en = 0;
            rd_en = 0;
            wr_data = 0;
        end

        // Idle Cycle
        default:
        begin
            @(posedge clk);

            wr_en   = 0;
            rd_en   = 0;
            wr_data = 0;
        end

    endcase
end

#50;

$display("========================================");
$display(" 100 Random Transactions Completed ");
$display("========================================");

//------------------------------
// Monitor
//------------------------------
initial
begin
    $monitor("Time=%0t | wr_en=%b rd_en=%b wr_data=%h rd_data=%h full=%b empty=%b",
              $time, wr_en, rd_en, wr_data, rd_data, full, empty);
end

endmodule