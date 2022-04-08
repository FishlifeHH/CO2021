`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:26 11/11/2021 
// Design Name: 
// Module Name:    splitter 
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
module splitter(
    input [31:28] PC31_28,
    input [25:0] Instr25_0,
    output [31:0] splitter
    );
	assign splitter = {PC31_28, Instr25_0, 2'b00};
endmodule
