`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:51:22 11/11/2021 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input clk,
    input reset,
	 input en,
	 input [31:0] nPC,
    output reg [31:0] PC
    );
    always @(posedge clk) begin
        if(reset)
        PC <= 32'h3000;
        else if(en)
        PC <= nPC;
		  else
		  PC <= PC;
    end
endmodule