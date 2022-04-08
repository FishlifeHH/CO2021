`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:36:10 11/11/2021 
// Design Name: 
// Module Name:    instr_judge 
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
module instr_judge(
    input [5:0] opcode,
    input [5:0] funct,
    output addu,
    output subu,
    output ori,
    output lw,
    output sw,
    output beq,
    output lui,
    output jal,
    output jr
    );
    assign addu = opcode == 6'b000000 && funct == 6'b100001;
    assign subu = opcode == 6'b000000 && funct == 6'b100011;
    assign ori = opcode == 6'b001101;
    assign lw = opcode == 6'b100011;
    assign sw = opcode == 6'b101011;
    assign beq = opcode == 6'b000100;
    assign lui = opcode == 6'b001111;
    assign jal = opcode == 6'b000011;
    assign jr = opcode == 6'b000000 && funct == 6'b001000;
endmodule
