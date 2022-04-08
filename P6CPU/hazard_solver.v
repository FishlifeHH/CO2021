`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:07:52 11/17/2021 
// Design Name: 
// Module Name:    hazard_solver 
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
module hazard_solver(
    input [31:0] Instr,
    input [4:0] WA_EX,
    input [4:0] WA_MEM,
    input [4:0] WA_WB,
    input [4:0] RA1_EX,
    input [4:0] RA2_EX,
    input [4:0] RA2_MEM,
	input GRFWE_ID,
	input jal_EX,
	input jal_MEM,
    input muldiv_R_MEM,
    input Rtype,
    input Itype,
    input branch,
    input jal,
    input jalr,
    input load,
    input save,
    input muldiv_C,
    input muldiv_R,
    input muldiv_W,
    input busy,
    input [1:0] Tnew_EX,
    input [1:0] Tnew_MEM,
    input [1:0] Tnew_WB,
    output [2:0] CMPAfor,
    output [2:0] CMPBfor,
    output [2:0] ALUAfor,
    output [2:0] ALUBfor,
    output [2:0] DM_WDfor,
    output [2:0] Rafor,
	 output [2:0] RD2for,
    output stall,
    output [1:0] Tnew_ID,
    output [4:0] RA1_ID_out,
    output [4:0] RA2_ID_out,
    output [4:0] WA_ID_out
    );
    wire [1:0] Tuse_RA1, Tuse_RA2;
    wire [4:0] RA1_ID_wire, RA2_ID_wire;
    AT_decoder ATdecoder_uut(
        .Instr(Instr),
        .Rtype(Rtype),
        .Itype(Itype),
        .branch(branch),
        .jal(jal),
        .jalr(jalr),
        .load(load),
        .save(save),
        .muldiv_C(muldiv_C),
        .muldiv_R(muldiv_R),
        .muldiv_W(muldiv_W),
		.GRFWE_ID(GRFWE_ID),
        .RA1_ID(RA1_ID_wire),
        .RA2_ID(RA2_ID_wire),
		.WA_ID(WA_ID_out),
        .Tuse_RA1(Tuse_RA1),
        .Tuse_RA2(Tuse_RA2),
        .Tnew(Tnew_ID)
    );
    forward_signal_generator forward_signal_generator_uut(
        .RA1_ID(RA1_ID_wire),
        .RA2_ID(RA2_ID_wire),
        .RA1_EX(RA1_EX),
        .RA2_EX(RA2_EX),
        .RA2_MEM(RA2_MEM),
        .Tnew_MEM(Tnew_MEM),
        .Tnew_WB(Tnew_WB),
		  .WA_EX(WA_EX),
        .WA_MEM(WA_MEM),
        .WA_WB(WA_WB),
		  .jal_EX(jal_EX),
		  .jal_MEM(jal_MEM),
          .muldiv_R_MEM(muldiv_R_MEM),
        .CMPAfor(CMPAfor),
        .CMPBfor(CMPBfor),
        .ALUAfor(ALUAfor),
        .ALUBfor(ALUBfor),
        .DM_WDfor(DM_WDfor),
        .Rafor(Rafor),
		  .RD2for(RD2for)
    );
    stall_flush_signal_generator stall_flush_signal_generator_uut(
        .RA1_ID(RA1_ID_wire),
        .RA2_ID(RA2_ID_wire),
        .Tuse_RA1(Tuse_RA1),
        .Tuse_RA2(Tuse_RA2),
        .Tnew_MEM(Tnew_MEM),
        .Tnew_WB(Tnew_WB),
        .Tnew_EX(Tnew_EX),
        .WA_MEM(WA_MEM),
        .WA_WB(WA_WB),
        .WA_EX(WA_EX),
        .muldiv_C(muldiv_C),
        .muldiv_R(muldiv_R),
        .muldiv_W(muldiv_W),
        .busy(busy),
        .stall(stall)
    );
	 assign RA1_ID_out = RA1_ID_wire;
	 assign RA2_ID_out = RA2_ID_wire;
endmodule