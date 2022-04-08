`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:03:59 11/20/2021 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
    wire [31:0] Instr;
    wire [4:0] RA1_ID, RA2_ID, WA_ID, WA_EX, WA_MEM, WA_WB, RA1_EX, RA2_EX, RA2_MEM;
    wire [2:0] CMPAfor, CMPBfor, ALUAfor, ALUBfor, DM_WDfor, Rafor, RD2for, ALUCtrl_ID;
    wire [1:0] WDCtrl_ID, JumpCtrl_ID, Tnew_ID, Tnew_EX, Tnew_MEM, Tnew_WB;
    wire ALUBCtrl_ID,DM_WE_ID, DM_RE_ID, GRFWE_ID, EXTCtrl_ID, Stall, equal, larger, smaller, jal_EX, jal_MEM, Rtype, Itype, beq, jal, load, save;
	datapath datapath_uut(
        .clk(clk),
        .reset(reset),
        .WDCtrl_ID(WDCtrl_ID),
        .ALUCtrl_ID(ALUCtrl_ID),
        .ALUBCtrl_ID(ALUBCtrl_ID),
        .DM_WE_ID(DM_WE_ID),
        .DM_RE_ID(DM_RE_ID),
        .GRFWE_ID(GRFWE_ID),
        .EXTCtrl_ID(EXTCtrl_ID),
        .JumpCtrl_ID(JumpCtrl_ID),
        .jal_ID(jal),
        .CMPAfor(CMPAfor),
        .CMPBfor(CMPBfor),
        .ALUAfor(ALUAfor),
        .ALUBfor(ALUBfor),
        .DM_WDfor(DM_WDfor),
        .Rafor(Rafor),
		  .RD2for(RD2for),
        .Stall(Stall),
        .Tnew_ID(Tnew_ID),
        .RA1_ID(RA1_ID),
        .RA2_ID(RA2_ID),
        .WA_ID(WA_ID),
        .Instr_out(Instr),
        .equal(equal),
		  .larger(larger),
		  .smaller(smaller),
        .jal_EX_out(jal_EX),
        .jal_MEM_out(jal_MEM),
        .WA_EX_out(WA_EX),
        .WA_MEM_out(WA_MEM),
        .WA_WB_out(WA_WB),
        .RA1_EX_out(RA1_EX),
        .RA2_EX_out(RA2_EX),
        .RA2_MEM_out(RA2_MEM),
        .Tnew_EX_out(Tnew_EX),
        .Tnew_MEM_out(Tnew_MEM),
        .Tnew_WB_out(Tnew_WB)
    );
    controller controller_uut(
        .Instr(Instr),
        .equal(equal),
		  .larger(larger),
		  .smaller(smaller),
        .WDCtrl_ID(WDCtrl_ID),
        .ALUCtrl_ID(ALUCtrl_ID),
        .ALUBCtrl_ID(ALUBCtrl_ID),
        .DM_WE_ID(DM_WE_ID),
        .DM_RE_ID(DM_RE_ID),
        .GRFWE_ID(GRFWE_ID),
        .EXTCtrl_ID(EXTCtrl_ID),
        .JumpCtrl_ID(JumpCtrl_ID),
        .Rtype(Rtype),
        .Itype(Itype),
        .beq_out(beq),
        .jal_out(jal),
        .load(load),
        .save(save)
    );
    hazard_solver hazardsolver_uut(
        .Instr(Instr),
        .WA_EX(WA_EX),
        .WA_MEM(WA_MEM),
        .WA_WB(WA_WB),
        .RA1_EX(RA1_EX),
        .RA2_EX(RA2_EX),
        .RA2_MEM(RA2_MEM),
        .GRFWE_ID(GRFWE_ID),
        .jal_EX(jal_EX),
        .jal_MEM(jal_MEM),
        .Rtype(Rtype),
        .Itype(Itype),
        .beq(beq),
        .jal(jal),
        .load(load),
        .save(save),
        .Tnew_EX(Tnew_EX),
        .Tnew_MEM(Tnew_MEM),
        .Tnew_WB(Tnew_WB),
        .CMPAfor(CMPAfor),
        .CMPBfor(CMPBfor),
        .ALUAfor(ALUAfor),
        .ALUBfor(ALUBfor),
        .DM_WDfor(DM_WDfor),
        .Rafor(Rafor),
		  .RD2for(RD2for),
        .Stall(Stall),
        .Tnew_ID(Tnew_ID),
        .RA1_ID_out(RA1_ID),
        .RA2_ID_out(RA2_ID),
        .WA_ID_out(WA_ID)
    );
endmodule