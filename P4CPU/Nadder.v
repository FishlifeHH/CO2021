`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:16:07 11/11/2021 
// Design Name: 
// Module Name:    Nadder 
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
module Nadder(
    input [31:0] PC4,
    input [31:0] offset,
    output [31:0] Nadder
    );
	assign Nadder = PC4 + (offset << 2);

endmodule
