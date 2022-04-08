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
    input [5:0] opcode,
    input [5:0] funct,
    input ALUzero,
    output [1:0] WACtrl,
    output [1:0] WDCtrl,
    output [1:0] ALUCtrl,
    output ALUBCtrl,
    output DM_WE,
    output DM_RE,
    output GRFWE,
	 output EXTCtrl,
    output [1:0] JumpCtrl
    );
	 wire addu, subu, ori, lw, sw, beq, lui, jal, jr;
	 instr_judge uut_instr_judge(
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
		.jr(jr)
		);
	 signal_generator uut_signal_generator(
		.ALUzero(ALUzero),
		.addu(addu),
		.subu(subu),
		.ori(ori),
		.lw(lw),
		.sw(sw),
		.beq(beq),
		.lui(lui),
		.jal(jal),
		.jr(jr),
		.WACtrl(WACtrl),
		.WDCtrl(WDCtrl),
		.ALUCtrl(ALUCtrl),
		.ALUBCtrl(ALUBCtrl),
		.DM_WE(DM_WE),
		.DM_RE(DM_RE),
		.GRFWE(GRFWE),
		.EXTCtrl(EXTCtrl),
		.JumpCtrl(JumpCtrl)
		);
endmodule
