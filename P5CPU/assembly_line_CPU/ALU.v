`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:47:10 11/11/2021 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] SrcA,
    input [31:0] SrcB,
	 input [2:0] ALUCtrl,
    output reg [31:0] ALUResult
    );
	always @* begin
		case(ALUCtrl)
        3'b000: ALUResult = SrcA + SrcB;
        3'b001: ALUResult = SrcA - SrcB;
        3'b010: ALUResult = SrcA | SrcB;
        3'b011: ALUResult = SrcB << 16;
      endcase
   end
endmodule