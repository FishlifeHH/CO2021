`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:34:45 11/11/2021 
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
    wire [1:0] WACtrl,WDCtrl,ALUCtrl,JumpCtrl;
    wire ALUBCtrl,DM_WE,DM_RE,GRFWE,EXTCtrl, ALUzero;
    wire [5:0] opcode, funct;
	 wire [1:0] test;
	 datapath uut_datapath(
		.clk(clk),
		.reset(reset),
		.WACtrl(WACtrl),
		.WDCtrl(WDCtrl),
		.ALUCtrl(ALUCtrl),
		.ALUBCtrl(ALUBCtrl),
		.DM_WE(DM_WE),
		.DM_RE(DM_RE),
		.GRFWE(GRFWE),
		.EXTCtrl(EXTCtrl),
		.JumpCtrl(JumpCtrl),
		.ALUzero(ALUzero),
		.opcode(opcode),
		.funct(funct)
		);
		
    controller uut_controller(
		.opcode(opcode),
		.funct(funct),
		.ALUzero(ALUzero),
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
