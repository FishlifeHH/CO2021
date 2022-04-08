`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:44:32 11/19/2021 
// Design Name: 
// Module Name:    IF 
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
module IF(
    input [31:0] Nadder,
    input [31:0] splitter,
    input [31:0] RD1,
    input [31:0] EPC,
    input clk,
    input reset,
    input en,
    input IntReq,
    input [2:0] JumpCtrl,
    output [31:0] PC4,
	 output [31:0] PC_out
    );
    wire [31:0] nPC, PC_wire, PC4_wire;
    PC PC_uut (
        .clk(clk),
        .reset(reset),
        .en(en),
        .nPC(nPC),
        .PC(PC_wire)
    );
    adder adder_uut(
        .PC(PC_wire),
        .PC4(PC4_wire)
    );
    nPCmux nPCmux_uut(
        .JumpCtrl(JumpCtrl),
        .adder(PC4_wire),
        .Nadder(Nadder),
        .splitter(splitter),
        .RD1(RD1),
        .EPC(EPC),
		.nPC(nPC),
        .IntReq(IntReq)
    );
	 assign PC4 = PC4_wire;
	 assign PC_out = PC_wire;
endmodule