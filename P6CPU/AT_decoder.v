`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:31:12 11/18/2021 
// Design Name: 
// Module Name:    AT_decoder 
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
module AT_decoder(
    input [31:0] Instr,
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
	input GRFWE_ID,
    output [4:0] RA1_ID,
    output [4:0] RA2_ID,
    output [4:0] WA_ID,
    output [1:0] Tuse_RA1,
    output [1:0] Tuse_RA2,
    output [1:0] Tnew
    );
    assign RA1_ID = Instr[25:21];
    assign RA2_ID = (Rtype | branch | save | muldiv_C)? Instr[20:16]:5'd0;
    assign WA_ID = (GRFWE_ID == 0)? 5'd0:(Rtype | jalr | muldiv_R)? Instr[15:11]:(jal)? 5'd31:Instr[20:16];
    assign Tuse_RA1 = (Rtype | load | save | Itype | muldiv_C | muldiv_W)? 2'd1:2'd0;//default: 2'd3
    assign Tuse_RA2 = (Rtype | muldiv_C)? 2'd1:(save)? 2'd2:2'd0;//default: 2'd3
    assign Tnew = (Rtype | Itype | muldiv_R)? 2'd1:(load)? 2'd2:2'd0;
endmodule