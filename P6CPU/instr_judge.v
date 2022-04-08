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
    input [31:0] Instr,
    output lb,
    output lbu,
    output lh, 
    output lhu,
    output lw,
    output sb,
    output sh,
    output sw,
	output add,
    output addu,
	output sub,
    output subu,
    output sll,
    output srl,
    output sra,
    output sllv,
    output srlv,
    output srav,
	 output and_instr,
	 output or_instr,
	 output xor_instr,
	 output nor_instr,
	output addi,
    output addiu,
    output andi,
    output ori,
    output xori,
    output lui,
    output slt,
    output slti,
    output sltiu,
    output sltu,
    output beq,
	output bne,
    output blez,
    output bgtz,
    output bltz,
    output bgez,
    output j,
    output jal,
    output jalr,
    output jr,
    output mult,
    output multu,
    output div,
    output divu,
    output mfhi,
    output mflo,
    output mthi,
    output mtlo,
	 output madd
	 //output ;
	 //output ;
    );
	 wire [5:0] opcode, funct;
	 assign opcode = Instr[31:26];
	 assign funct = Instr[5:0];
    assign lb = opcode == 6'b100000;
    assign lbu = opcode == 6'b100100;
    assign lh = opcode == 6'b100001;
    assign lhu = opcode == 6'b100101;
    assign lw = opcode == 6'b100011;
    assign sb = opcode == 6'b101000;
    assign sh = opcode == 6'b101001;
    assign sw = opcode == 6'b101011;
	assign add = opcode == 6'b000000 && funct == 6'b100000;
    assign addu = opcode == 6'b000000 && funct == 6'b100001;
    assign sub = opcode == 6'b000000 && funct == 6'b100010;
    assign subu = opcode == 6'b000000 && funct == 6'b100011;
    assign sll = opcode == 6'b000000 && funct == 6'b000000;
    assign srl = opcode == 6'b000000 &&  funct == 6'b000010;
    assign sra = opcode == 6'b000000 && funct == 6'b000011;
    assign sllv = opcode == 6'b000000 && funct == 6'b000100;
    assign srlv = opcode == 6'b000000 && funct == 6'b000110;
    assign srav = opcode == 6'b000000 && funct == 6'b000111;
	assign and_instr = opcode == 6'b000000 && funct == 6'b100100;
	assign or_instr = opcode == 6'b000000 && funct == 6'b100101;
	assign xor_instr = opcode == 6'b000000 && funct == 6'b100110;
	assign nor_instr = opcode == 6'b000000 && funct == 6'b100111;
    assign addi = opcode == 6'b001000;
    assign addiu = opcode == 6'b001001;
    assign andi = opcode == 6'b001100;
    assign ori = opcode == 6'b001101;
    assign xori = opcode == 6'b001110;
    assign lui = opcode == 6'b001111;
    assign slt = opcode == 6'b000000 && funct == 6'b101010;
    assign slti = opcode == 6'b001010;
    assign sltiu = opcode == 6'b001011;
    assign sltu = opcode == 6'b000000 && funct == 6'b101011;
    assign beq = opcode == 6'b000100;
	assign bne = opcode == 6'b000101;
    assign blez = opcode == 6'b000110;
    assign bgtz = opcode == 6'b000111;
    assign bltz = opcode == 6'b000001 && Instr[20:16] == 5'b00000;
    assign bgez = opcode == 6'b000001 && Instr[20:16] == 5'b00001;
    assign j = opcode == 6'b000010;
    assign jal = opcode == 6'b000011;
    assign jalr = opcode == 6'b000000 && funct == 6'b001001;
    assign jr = opcode == 6'b000000 && funct == 6'b001000;
    assign mult = opcode == 6'b000000 && funct == 6'b011000;
    assign multu = opcode == 6'b000000 && funct == 6'b011001;
    assign div = opcode == 6'b000000 && funct == 6'b011010;
    assign divu = opcode == 6'b000000 && funct == 6'b011011;
    assign mfhi = opcode == 6'b000000 && funct == 6'b010000;
    assign mflo = opcode == 6'b000000 && funct == 6'b010010;
    assign mthi = opcode == 6'b000000 && funct == 6'b010001;
    assign mtlo = opcode == 6'b000000 && funct == 6'b010011;
	 assign madd = opcode == 6'b011100 && funct == 6'b000000;
	 //assign = opcode == 6'b && funct == 6'b;
	 //assign = opcode == 6'b && funct == 6'b;
endmodule