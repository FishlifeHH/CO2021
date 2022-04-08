`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:51:23 11/11/2021 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
    input [15:0] Data,
    input EXTCtrl,
	 output [31:0] EXTData
    );
	assign EXTData = (EXTCtrl)? {{16{Data[15]}},Data}:{{16{1'b0}}, Data};
endmodule