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
	 input [4:0] ALUCtrl,
	 input [4:0] shamt, 
    output reg [31:0] ALUResult
    );
    localparam add = 5'b00000, sub = 5'b00001, OR = 5'b00010, shift16 = 5'b00011, shiftL = 5'b00100, shiftR = 5'b00101, shiftLV = 5'b00110, shiftRV = 5'b00111, shiftRA = 5'b01000, shiftRAV = 5'b01001, AND = 5'b01010, XOR = 5'b01011, NOR = 5'b01100, set = 5'b01101, setU = 5'b01110;
	always @* begin
		case(ALUCtrl)
        add: ALUResult = SrcA + SrcB;
        sub: ALUResult = SrcA - SrcB;
        OR: ALUResult = SrcA | SrcB;
        shift16: ALUResult = SrcB << 16;
        shiftL: ALUResult = SrcB << shamt;
        shiftR: ALUResult = SrcB >> shamt;
        shiftLV: ALUResult = SrcB << SrcA[4:0];
        shiftRV: ALUResult = SrcB >> SrcA[4:0];
        shiftRA: ALUResult = $signed(SrcB) >>> shamt;
        shiftRAV: ALUResult = $signed(SrcB) >>> SrcA[4:0];
		  AND: ALUResult = SrcA & SrcB;
		  XOR: ALUResult = SrcA ^ SrcB;
		  NOR: ALUResult = ~(SrcA | SrcB);
		  set: ALUResult = ($signed(SrcA) < $signed(SrcB))? 32'b1:32'b0;
		  setU: ALUResult = (SrcA < SrcB)? 32'b1:32'b0;
		  default: ALUResult = 32'hffffffff;
      endcase
   end
endmodule