`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:09:23 11/17/2021 
// Design Name: 
// Module Name:    stall_flush_signal_generator 
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
module stall_flush_signal_generator(
    input [4:0] RA1_ID,
    input [4:0] RA2_ID,
    input [1:0] Tuse_RA1,
    input [1:0] Tuse_RA2,
    input [1:0] Tnew_MEM,
    input [1:0] Tnew_WB,
    input [1:0] Tnew_EX,
    input [4:0] WA_MEM,
    input [4:0] WA_WB,
    input [4:0] WA_EX,
	 input [4:0] c0_WA_EX,
	 input [4:0] c0_WA_MEM,
    input busy,
    input muldiv_C,
    input muldiv_R,
    input muldiv_W,
	 input eret_MEM,
	 input eret,
	 input mtc0_EX,
	 input mtc0_MEM,
    output stall
    );
    wire stallRA1, stallRA2, stallRA1E, stallRA1M, stallRA1W, stallRA2E, stallRA2M, stallRA2W, stallMDM, stalleret;
    assign stallRA1E = RA1_ID == WA_EX && WA_EX != 0 && Tuse_RA1 < Tnew_EX;
    assign stallRA1M = RA1_ID == WA_MEM && WA_MEM != 0 && Tuse_RA1 < Tnew_MEM;
    assign stallRA1W = RA1_ID == WA_WB && WA_WB != 0 && Tuse_RA1 < Tnew_WB;
    assign stallRA1 = stallRA1E | stallRA1M | stallRA1W;
    assign stallRA2E = RA2_ID == WA_EX && WA_EX != 0 && Tuse_RA2 < Tnew_EX;
    assign stallRA2M = RA2_ID == WA_MEM && WA_MEM != 0 && Tuse_RA2 < Tnew_MEM;
    assign stallRA2W = RA2_ID == WA_WB && WA_WB != 0 && Tuse_RA2 < Tnew_WB;
    assign stallRA2 = stallRA2E | stallRA2M | stallRA2W;
    assign stallMDM = (muldiv_C | muldiv_R | muldiv_W) && busy;
	 assign stalleret = eret & ((mtc0_EX & c0_WA_EX == 5'd14) | (mtc0_MEM & c0_WA_MEM == 5'd14));
    assign stall = stallRA1 | stallRA2 | stallMDM | stalleret;
endmodule