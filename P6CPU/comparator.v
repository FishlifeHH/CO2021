`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:09:32 11/16/2021 
// Design Name: 
// Module Name:    comparator 
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
module comparator(
    input [31:0] SrcA,
    input [31:0] SrcB,
    output larger,
    output equal,
    output smaller
    );
	assign larger = $signed(SrcA) > $signed(SrcB);
	assign equal = SrcA == SrcB;
	assign smaller = $signed(SrcA) < $signed(SrcB);
endmodule
