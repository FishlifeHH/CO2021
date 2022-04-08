`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:35:18 11/19/2021 
// Design Name: 
// Module Name:    EX 
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
module EX(
    input [31:0] RD1_EX,
    input [31:0] RD2_EX,
    input [31:0] EXTData_EX,
    input [31:0] PC_EX,
	 input [31:0] RD2_MEM,
    input [31:0] PC8_MEM,
	 input [31:0] PC8_WB,
	 input [31:0] ALUResult_MEM,
	 input [31:0] WD_WB,
    input ALUBCtrl,
    input [2:0] ALUCtrl,
    input [2:0] ALUAfor,
    input [2:0] ALUBfor,
	 input [2:0] RD2for,
    output [31:0] ALUResult_EX,
	 output [31:0] RD2_EX_out
    );
    wire [31:0] SrcA, SrcB, RD2;
    ALU ALU_uut(
        .SrcA(SrcA),
        .SrcB(SrcB),
        .ALUCtrl(ALUCtrl),
        .ALUResult(ALUResult_EX)
    );
    ALUAformux ALUAfor_uut(
        .ALUAfor(ALUAfor),
        .RD1_EX(RD1_EX),
        .ALUResult_MEM(ALUResult_MEM),
        .WD_WB(WD_WB),
		  .PC8_MEM(PC8_MEM),
        .ALUA(SrcA)
    );
    ALUBformux ALUBfor_uut(
        .ALUBfor(ALUBfor),
        .RD2_EX(RD2_EX),
        .ALUResult_MEM(ALUResult_MEM),
        .WD_WB(WD_WB),
		  .PC8_MEM(PC8_MEM),
        .ALUB(RD2)
    );
    ALUBmux ALUB_uut(
        .ALUBCtrl(ALUBCtrl),
        .RD2(RD2),
        .EXTData(EXTData_EX),
        .ALUB(SrcB)
    );
	 RD2formux RD2_uut(
		.RD2for(RD2for),
        .RD2_EX(RD2_EX),
        .RD2_MEM(RD2_MEM),
        .WD_WB(WD_WB),
        .PC8_MEM(PC8_MEM),
        .RD2(RD2_EX_out)
    );
endmodule
