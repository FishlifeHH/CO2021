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
    input beq,
    input jal,
    input load,
    input save,
	 input GRFWE_ID,
    output [4:0] RA1_ID,
    output [4:0] RA2_ID,
    output [4:0] WA_ID,
    output [1:0] Tuse_RA1,
    output [1:0] Tuse_RA2,
    output [1:0] Tnew
    );
    assign RA1_ID = Instr[25:21];
    assign RA2_ID = (Rtype | beq | save)? Instr[20:16]:5'd0;
    assign WA_ID = (GRFWE_ID == 0)? 5'd0:(Rtype)? Instr[15:11]:(jal)? 5'd31:Instr[20:16];
    assign Tuse_RA1 = (Rtype | load | save | Itype)? 5'd1:5'd0;
    assign Tuse_RA2 = (Rtype)? 1:(save)? 5'd2:5'd0;
    assign Tnew = (Rtype | Itype)? 5'd1:(load)? 5'd2:5'd0;
endmodule
