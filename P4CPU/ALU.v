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
	 input [1:0] ALUCtrl,
    output reg [31:0] ALUResult,
	 output ALUzero
    );
	always @* begin
		case(ALUCtrl)
        2'b00: ALUResult = SrcA + SrcB;
        2'b01: ALUResult = SrcA - SrcB;
        2'b10: ALUResult = SrcA | SrcB;
        2'b11: ALUResult = SrcB << 16;
      endcase
   end
	assign ALUzero = ALUCtrl == 01 && ALUResult == 0;
endmodule