`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:04:11 11/19/2021 
// Design Name: 
// Module Name:    ID 
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
module ID(
    input clk,
    input reset,
    input [31:0] Instr_ID,
    input [31:0] PC4_ID,
    input [4:0] RA1_ID,
    input [4:0] RA2_ID,
    input [4:0] WA_WB,
    input [31:0] WD_WB,
    input [31:0] PC_WB,
	 input [31:0] PC8_EX,
	 input [31:0] PC8_MEM,
	 input [31:0] PC8_WB,
    input [31:0] ALUResult_MEM,
	 input [31:0] MDM_RD_MEM,
    input GRFWE_WB,
    input EXTCtrl_ID,
    input [2:0] CMPAfor,
    input [2:0] CMPBfor,
    input [2:0] Rafor,
    output [31:0] RD1_ID,
    output [31:0] RD2_ID,
    output [31:0] PC8_ID,
    output equal,larger,smaller,
    output [31:0] EXTData_ID,
    output [31:0] Branch,
    output [31:0] jump,
    output [31:0] ra
    );
    wire [31:0] CMPA, CMPB, RD2_ID_wire;
    GRF GRF_uut(
        .clk(clk),
        .reset(reset),
        .RA1(RA1_ID),
        .RA2(RA2_ID),
        .WA(WA_WB),
        .WD(WD_WB),
        .WE(GRFWE_WB),
        .PC(PC_WB),
        .RD1(RD1_ID),
        .RD2(RD2_ID_wire)
    );
    EXT EXT_uut(
        .Data(Instr_ID[15:0]),
        .EXTCtrl(EXTCtrl_ID),
        .EXTData(EXTData_ID)
    );
    CMPAformux CMPA_uut(
        .CMPAfor(CMPAfor),
        .RD1(RD1_ID),
        .ALUResult_MEM(ALUResult_MEM),
		  .MDM_RD_MEM(MDM_RD_MEM),
        .WD_WB(WD_WB),
		  .PC8_EX(PC8_EX),
		  .PC8_MEM(PC8_MEM),
		  .PC8_WB(PC8_WB),
        .CMPA(CMPA)
    );
    CMPBformux CMPB_uut(
        .CMPBfor(CMPBfor),
        .RD2(RD2_ID_wire),
        .ALUResult_MEM(ALUResult_MEM),
		  .MDM_RD_MEM(MDM_RD_MEM),
        .WD_WB(WD_WB),
		  .PC8_EX(PC8_EX),
		  .PC8_MEM(PC8_MEM),
		  .PC8_WB(PC8_WB),
        .CMPB(CMPB)
    );
    Raformux Ra_uut(
        .Rafor(Rafor),
        .RD1(RD1_ID),
        .ALUResult_MEM(ALUResult_MEM),
		  .MDM_RD_MEM(MDM_RD_MEM),
        .WD_WB(WD_WB),
		  .PC8_EX(PC8_EX),
		  .PC8_MEM(PC8_MEM),
		  .PC8_WB(PC8_WB),
		  .ra(ra)
    );
    Nadder Nadder_uut(
        .PC4(PC4_ID),
        .offset(EXTData_ID),
        .Nadder(Branch)
    );
    splitter splitter_uut(
        .PC31_28(PC4_ID[31:28]),
        .Instr25_0(Instr_ID[25:0]),
        .splitter(jump)
    );
    comparator CMP_uut(
        .SrcA(CMPA),
        .SrcB(CMPB),
        .equal(equal),
        .larger(larger),
        .smaller(smaller)
    );
	 adder adder4_uut(
        .PC(PC4_ID),
        .PC4(PC8_ID)
    );
	 assign RD2_ID = RD2_ID_wire;
endmodule