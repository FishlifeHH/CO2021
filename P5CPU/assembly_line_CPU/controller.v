`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:33:00 11/11/2021 
// Design Name: 
// Module Name:    controller 
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
module controller(
    input [31:0] Instr,
    input equal, larger, smaller,
    output [1:0] WDCtrl_ID,
    output [2:0] ALUCtrl_ID,
    output ALUBCtrl_ID,
    output DM_WE_ID,
    output DM_RE_ID,
    output GRFWE_ID,
	 output EXTCtrl_ID,
    output [1:0] JumpCtrl_ID,
	 output Rtype,
	 output Itype,
	 output beq_out,
	 output jal_out,
	 output load,
	 output save
    );
	 wire [5:0] opcode, funct;
	 wire addu, subu, ori, lw, sw, beq, lui, jal, jr, j;
	 instr_judge instr_judge_uut(
		.opcode(opcode),
		.funct(funct),
		.addu(addu),
		.subu(subu),
		.ori(ori),
		.lw(lw),
		.sw(sw),
		.beq(beq),
		.lui(lui),
		.jal(jal),
		.jr(jr),
		.j(j)
		);
	 signal_generator signal_generator_uut(
		.equal(equal),
		.larger(larger),
		.smaller(smaller),
		.addu(addu),
		.subu(subu),
		.ori(ori),
		.lw(lw),
		.sw(sw),
		.beq(beq),
		.lui(lui),
		.jal(jal),
		.jr(jr),
		.j(j),
		.WDCtrl(WDCtrl_ID),
		.ALUCtrl(ALUCtrl_ID),
		.ALUBCtrl(ALUBCtrl_ID),
		.DM_WE(DM_WE_ID),
		.DM_RE(DM_RE_ID),
		.GRFWE(GRFWE_ID),
		.EXTCtrl(EXTCtrl_ID),
		.JumpCtrl(JumpCtrl_ID)
		);
		assign opcode = Instr[31:26];
		assign funct = Instr[5:0];
		assign Rtype = addu | subu;
		assign Itype = ori | lui;
		assign load = lw;
		assign save = sw;
		assign beq_out = beq;
		assign jal_out = jal;
endmodule
