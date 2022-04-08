`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:07:36 11/17/2021 
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
    input [1:0] WDCtrl_ID,
    input [2:0] ALUCtrl_ID,
    input ALUBCtrl_ID,
    input DM_WE_ID,
    input DM_RE_ID,
    input GRFWE_ID,
	 input EXTCtrl_ID,
    input [1:0] JumpCtrl_ID,
	 input jal_ID,
    input [2:0] CMPAfor,
    input [2:0] CMPBfor,
    input [2:0] ALUAfor,
    input [2:0] ALUBfor,
    input [2:0] DM_WDfor,
    input [2:0] Rafor,
	 input [2:0] RD2for,
    input Stall,
    input [1:0] Tnew_ID,
    input [4:0] RA1_ID,
    input [4:0] RA2_ID,
    input [4:0] WA_ID,
    output [31:0] Instr_out,
    output equal,
	 output larger,
	 output smaller,
	 output jal_EX_out,
	 output jal_MEM_out,
    output [4:0] WA_EX_out,
    output [4:0] WA_MEM_out,
    output [4:0] WA_WB_out,
    output [4:0] RA1_EX_out,
    output [4:0] RA2_EX_out,
    output [4:0] RA2_MEM_out,
    output [1:0] Tnew_EX_out,
    output [1:0] Tnew_MEM_out,
    output [1:0] Tnew_WB_out
    );
    wire [31:0] Branch, jump, ra, Instr_IF, PC4_IF, PC_IF;

    wire [31:0] Instr_ID, PC4_ID, PC_ID, RD1_ID, RD2_ID, PC8_ID, EXTData_ID;

    wire [31:0] RD1_EX, RD2_EX, EXTData_EX, PC8_EX, PC_EX, ALUResult_EX, RD2_EX_out;
    wire [1:0] WDCtrl_EX, Tnew_EX;
	 wire [2:0] ALUCtrl_EX;
    wire GRFWE_EX, ALUBCtrl_EX, DM_WE_EX, DM_RE_EX, jal_EX;
    wire [4:0] RA1_EX, RA2_EX, WA_EX;

    wire [31:0] ALUResult_MEM, RD2_MEM, PC8_MEM, PC_MEM, ReadData_MEM;
    wire [1:0] WDCtrl_MEM, Tnew_MEM;
    wire GRFWE_MEM, DM_RE_MEM, DM_WE_MEM, jal_MEM;
    wire [4:0] RA1_MEM, RA2_MEM, WA_MEM;

    wire [31:0] ALUResult_WB, ReadData_WB, PC8_WB, WD_WB, PC_WB;
    wire [4:0] WA_WB;
    wire [1:0] WDCtrl_WB, Tnew_WB;
    wire GRFWE_WB;

    IF IF_uut(
        .clk(clk),
        .reset(reset),
        .en(~Stall),
        .Nadder(Branch),
        .splitter(jump),
        .RD1(ra),
        .JumpCtrl(JumpCtrl_ID),
        .Instr(Instr_IF),
		  .PC_out(PC_IF),
        .PC4(PC4_IF)
    );
    IF_IDReg IF_ID_uut(
        .clk(clk),
        .reset(reset),
        .en(~Stall),
        .Instr_IF(Instr_IF),
        .PC4_IF(PC4_IF),
        .PC_IF(PC_IF),
        .Instr_ID(Instr_ID),
        .PC4_ID(PC4_ID),
        .PC_ID(PC_ID)
    );
    ID ID_uut(
        .clk(clk),
        .reset(reset),
        .Instr_ID(Instr_ID),
        .PC4_ID(PC4_ID),
        .RA1_ID(RA1_ID),
        .RA2_ID(RA2_ID),
        .WA_WB(WA_WB),
        .WD_WB(WD_WB),
        .PC_ID(PC_ID),
		  .PC_WB(PC_WB),
		  .PC8_EX(PC8_EX),
		  .PC8_MEM(PC8_MEM),
		  .PC8_WB(PC8_WB),
        .ALUResult_MEM(ALUResult_MEM),
        .GRFWE_WB(GRFWE_WB),
        .EXTCtrl_ID(EXTCtrl_ID),
        .CMPAfor(CMPAfor),
        .CMPBfor(CMPBfor),
        .Rafor(Rafor),
        .RD1_ID(RD1_ID),
        .RD2_ID(RD2_ID),
        .PC8_ID(PC8_ID),
        .equal(equal),
		  .larger(larger),
		  .smaller(smaller),
        .EXTData_ID(EXTData_ID),
        .Branch(Branch),
        .jump(jump),
        .ra(ra)
    );
    ID_EXReg ID_EX_uut(
        .clk(clk),
        .reset(reset | Stall),
        .RD1_ID(RD1_ID),
        .RD2_ID(RD2_ID),
        .EXTData_ID(EXTData_ID),
        .PC8_ID(PC8_ID),
        .PC_ID(PC_ID),
        .WDCtrl_ID(WDCtrl_ID),
        .GRFWE_ID(GRFWE_ID),
        .ALUCtrl_ID(ALUCtrl_ID),
        .ALUBCtrl_ID(ALUBCtrl_ID),
        .DM_WE_ID(DM_WE_ID),
        .DM_RE_ID(DM_RE_ID),
		  .jal_ID(jal_ID),
        .RA1_ID(RA1_ID),
        .RA2_ID(RA2_ID),
        .WA_ID(WA_ID),
        .Tnew_ID(Tnew_ID),
        .RD1_EX(RD1_EX),
        .RD2_EX(RD2_EX),
        .EXTData_EX(EXTData_EX),
        .PC8_EX(PC8_EX),
        .PC_EX(PC_EX),
        .WDCtrl_EX(WDCtrl_EX),
        .GRFWE_EX(GRFWE_EX),
		  .jal_EX(jal_EX),
        .ALUCtrl_EX(ALUCtrl_EX),
        .ALUBCtrl_EX(ALUBCtrl_EX),
        .DM_WE_EX(DM_WE_EX),
        .DM_RE_EX(DM_RE_EX),
        .RA1_EX(RA1_EX),
        .RA2_EX(RA2_EX),
        .WA_EX(WA_EX),
        .Tnew_EX(Tnew_EX)
    );
    EX EX_uut(
        .RD1_EX(RD1_EX),
        .RD2_EX(RD2_EX),
        .EXTData_EX(EXTData_EX),
        .PC_EX(PC_EX),
		  .RD2_MEM(RD2_MEM),
        .PC8_MEM(PC8_MEM),
        .PC8_WB(PC8_WB),
        .ALUResult_MEM(ALUResult_MEM),
        .WD_WB(WD_WB),
        .ALUCtrl(ALUCtrl_EX),
        .ALUBCtrl(ALUBCtrl_EX),
        .ALUAfor(ALUAfor),
        .ALUBfor(ALUBfor),
		  .RD2for(RD2for),
        .ALUResult_EX(ALUResult_EX),
		  .RD2_EX_out(RD2_EX_out)
    );
    EX_MEMReg EX_MEM_uut(
        .clk(clk),
        .reset(reset),
        .ALUResult_EX(ALUResult_EX),
        .RD2_EX(RD2_EX_out),
        .PC8_EX(PC8_EX),
        .PC_EX(PC_EX),
        .WDCtrl_EX(WDCtrl_EX),
        .GRFWE_EX(GRFWE_EX),
        .DM_RE_EX(DM_RE_EX),
        .DM_WE_EX(DM_WE_EX),
		  .jal_EX(jal_EX),
        .RA1_EX(RA1_EX),
        .RA2_EX(RA2_EX),
        .WA_EX(WA_EX),
        .Tnew_EX(Tnew_EX),
        .ALUResult_MEM(ALUResult_MEM),
        .RD2_MEM(RD2_MEM),
        .PC8_MEM(PC8_MEM),
        .PC_MEM(PC_MEM),
        .WDCtrl_MEM(WDCtrl_MEM),
        .GRFWE_MEM(GRFWE_MEM),
        .DM_RE_MEM(DM_RE_MEM),
        .DM_WE_MEM(DM_WE_MEM),
        .RA1_MEM(RA1_MEM),
        .RA2_MEM(RA2_MEM),
        .WA_MEM(WA_MEM),
		  .jal_MEM(jal_MEM),
        .Tnew_MEM(Tnew_MEM)
    );
    MEM MEM_uut(
        .clk(clk),
        .reset(reset),
        .ALUResult_MEM(ALUResult_MEM),
        .RD2_MEM(RD2_MEM),
        .PC_MEM(PC_MEM),
        .WD_WB(WD_WB),
        .DM_RE(DM_RE_MEM),
        .DM_WE(DM_WE_MEM),
        .DM_WDfor(DM_WDfor),
        .ReadData_MEM(ReadData_MEM)
    );
    MEM_WBReg MEM_WB_uut(
        .clk(clk),
        .reset(reset),
        .ALUResult_MEM(ALUResult_MEM),
        .ReadData_MEM(ReadData_MEM),
        .PC8_MEM(PC8_MEM),
		  .PC_MEM(PC_MEM),
        .WDCtrl_MEM(WDCtrl_MEM),
        .GRFWE_MEM(GRFWE_MEM),
        .WA_MEM(WA_MEM),
        .Tnew_MEM(Tnew_MEM),
        .ALUResult_WB(ALUResult_WB),
        .ReadData_WB(ReadData_WB),
        .PC8_WB(PC8_WB),
		  .PC_WB(PC_WB),
        .WDCtrl_WB(WDCtrl_WB),
        .GRFWE_WB(GRFWE_WB),
        .WA_WB(WA_WB),
        .Tnew_WB(Tnew_WB)
    );
    WB WB_uut(
        .ReadData_WB(ReadData_WB),
        .ALUResult_WB(ALUResult_WB),
        .WDCtrl(WDCtrl_WB),
        .PC8_WB(PC8_WB),
        .WD_WB(WD_WB)
    );
    assign Instr_out = Instr_ID;
    assign equal_out = equal;
    assign WA_EX_out = WA_EX;
    assign WA_MEM_out = WA_MEM;
    assign WA_WB_out = WA_WB;
    assign RA1_EX_out = RA1_EX;
    assign RA2_EX_out = RA2_EX;
    assign RA2_MEM_out = RA2_MEM;
    assign Tnew_EX_out = Tnew_EX;
    assign Tnew_MEM_out = Tnew_MEM;
    assign Tnew_WB_out = Tnew_WB;
	 assign jal_EX_out = jal_EX;
	 assign jal_MEM_out = jal_MEM;
endmodule
