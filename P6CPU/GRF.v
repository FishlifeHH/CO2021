`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:46:26 11/11/2021 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
	 input clk, 
	 input reset, 
    input [4:0] RA1,
    input [4:0] RA2,
    input [4:0] WA,
    input [31:0] WD,
    input WE,
	 input [31:0] PC,
    output [31:0] RD1,
    output [31:0] RD2
    );
    reg [31:0] Register[31:0];
    integer i;
    always @(posedge clk) begin
        if(reset)
        for(i = 0;i < 32;i = i + 1)
            Register[i] <= 32'd0;
        else if(WE) begin
				if(WA) begin
					Register[WA] <= WD;
				end
				else ;
		  end
        else
        Register[0] <= 32'd0;
    end
    assign RD1 = (WA == RA1 && WA != 0 && WE)? WD:Register[RA1];
    assign RD2 = (WA == RA2 && WA != 0 && WE)? WD:Register[RA2];
endmodule
