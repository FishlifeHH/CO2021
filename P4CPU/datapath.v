`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:24:13 11/11/2021 
// Design Name: 
// Module Name:    datapath 
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
module datapath(
	input clk,
	input reset,
	input [1:0] WACtrl,
    input [1:0] WDCtrl,
    input [1:0] ALUCtrl,
    input ALUBCtrl,
    input DM_WE,
    input DM_RE,
    input GRFWE,
    input EXTCtrl,
    input [1:0] JumpCtrl,
    output ALUzero,
    output [5:0] opcode,
    output [5:0] funct 
    );
	 wire [31:0] nPC, PC, PC4,Nadder,splitter;
    wire [31:0] Instr,WD,ALUB,RD1,RD2,ALUResult,ReadData,EXTData;
    wire [4:0] WA;
	PC uut_PC(
		.clk(clk),
		.reset(reset),
		.nPC(nPC),
		.PC(PC)
		);
    IM uut_IM(
		.PC(PC),
		.Instr(Instr)
		);
    GRF uut_GRF(
		.clk(clk),
		.reset(reset),
		.RA1(Instr[25:21]),
		.RA2(Instr[20:16]),
		.WA(WA),
		.WD(WD),
		.RD1(RD1),
		.RD2(RD2),
		.PC(PC),
		.WE(GRFWE)
		);
    WAmux uut_WAmux(
		.WACtrl(WACtrl),
		.Instr20_16(Instr[20:16]),
		.Instr15_11(Instr[15:11]),
		.WA(WA)
		);
    WDmux uut_WDmux(
		.WDCtrl(WDCtrl),
		.ALUResult(ALUResult),
		.ReadData(ReadData),
		.PC4(PC4),
		.WD(WD)
		);
    ALU uut_ALU(
		.SrcA(RD1),
		.SrcB(ALUB),
		.ALUCtrl(ALUCtrl),
		.ALUResult(ALUResult),
		.ALUzero(ALUzero)
		);
    ALUBmux uut_ALUBmux(
		.ALUBCtrl(ALUBCtrl),
		.RD2(RD2),
		.EXTData(EXTData),
		.ALUB(ALUB)
		);
    DM uut_DM(
		.Add(ALUResult),
		.WD(RD2),.PC(PC),
		.WE(DM_WE),
		.RE(DM_RE),
		.clk(clk),
		.reset(reset),
		.ReadData(ReadData)
		);
    EXT uut_EXT(
		.Data(Instr[15:0]),
		.EXTCtrl(EXTCtrl),
		.EXTData(EXTData)
		);
    //Shifter uut_Shifter(.Data(EXTData),.ShiftData(ShiftData));
    nPCmux uut_nPCmux(
		.JumpCtrl(JumpCtrl),
		.adder(PC4),
		.Nadder(Nadder),
		.splitter(splitter),
		.RD1(RD1),
		.nPC(nPC)
		);
    adder uut_Adder(
		.PC(PC),
		.PC4(PC4)
		);
    Nadder uut_Nadder(
		.PC4(PC4),
		.offset(EXTData),
		.Nadder(Nadder)
		);
    splitter uut_splitter(
		.PC31_28(PC[31:28]),
		.Instr25_0(Instr[25:0]),
		.splitter(splitter)
		);
    assign opcode = Instr[31:26];
    assign funct = Instr[5:0];
endmodule
