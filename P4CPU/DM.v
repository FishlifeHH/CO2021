`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:48:50 11/11/2021 
// Design Name: 
// Module Name:    DM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module DM(
    input [31:0] Add,
    input [31:0] WD,
	 input [31:0] PC,
    input WE,
    input RE,
    input clk,
	input reset,
    output [31:0] ReadData
    );
    reg [31:0] ram[32'hbff:32'h0];
    integer i;
    always @(posedge clk) begin
        if(reset) begin
            for(i = 0;i < 1024; i = i + 1)
            ram[i] <= 0;
        end
        else if(WE) begin
				$display("@%h: *%h <= %h", PC, Add, WD);
				ram[{2'b0,Add[31:2]}] <= WD;
		  end
        else ;
    end
    assign ReadData = RE? ram[{2'b0,Add[31:2]}]:ReadData;
endmodule
