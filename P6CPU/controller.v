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
    input equal,
	 input smaller, 
	 input larger,
    output [1:0] WDCtrl_ID,
    output [4:0] ALUCtrl_ID,
    output ALUBCtrl_ID,
    output [1:0] DM_WE_ID,
    output GRFWE_ID,
	 output EXTCtrl_ID,
    output [1:0] JumpCtrl_ID,
	 output [2:0] DMEXTCtrl_ID,
     output [2:0] MDCCtrl_ID,
    output [1:0] MDM_RE_ID,
    output [1:0] MDM_WE_ID,
    output start_ID,
	 output Rtype,
	 output Itype,
	 output branch,
	 output jal_out,
     output jalr_out,
	 output load,
	 output save,
     output muldiv_C,
     output muldiv_R,
     output muldiv_W
    );
	 wire lb, lbu, lh, lhu, lw, sb, sh, sw;
     wire add, addu, sub, subu, sll, srl, sllv, srlv, sra, srav, and_instr, or_instr, xor_instr, nor_instr;
     wire addi, addiu, andi, ori, xori, lui, slt, slti, sltiu, sltu;
     wire beq, bne, blez, bgtz, bltz, bgez;
     wire j, jal, jalr, jr;
	wire mult, multu, div, divu, mfhi, mflo, mthi, mtlo, madd;
	 instr_judge instr_judge_uut(
		.Instr(Instr),
		.lb(lb),
		.lbu(lbu),
		.lh(lh),
		.lhu(lhu),
		.lw(lw),
		.sb(sb),
		.sh(sh),
		.sw(sw),
		.add(add),
		.addu(addu),
		.sub(sub),
		.subu(subu),
		.sll(sll),
		.srl(srl),
		.sllv(sllv),
		.srlv(srlv),
		.sra(sra),
		.srav(srav),
		.and_instr(and_instr),
		.or_instr(or_instr),
		.xor_instr(xor_instr),
		.nor_instr(nor_instr),
		.addi(addi),
		.addiu(addiu),
        .andi(andi),
		.ori(ori),
        .xori(xori),
		.lui(lui),
        .slt(slt),
        .slti(slti),
        .sltiu(sltiu),
        .sltu(sltu),
		.beq(beq),
		.bne(bne),
        .blez(blez),
        .bgtz(bgtz),
        .bltz(bltz),
        .bgez(bgez),
		.j(j),
		.jal(jal),
        .jalr(jalr),
		.jr(jr),
        .mult(mult),
        .multu(multu),
        .div(div),
        .divu(divu),
        .mfhi(mfhi),
        .mflo(mflo),
        .mthi(mthi),
        .mtlo(mtlo),
		  .madd(madd)
		  //.()
		  //.()
		);
	 signal_generator signal_generator_uut(
	   .lb(lb),
		.lbu(lbu),
		.lh(lh),
		.lhu(lhu),
		.lw(lw),
		.sb(sb),
		.sh(sh),
		.sw(sw),
		.add_instr(add),
		.addu(addu),
		.sub_instr(sub),
		.subu(subu),
		.sll(sll),
		.srl(srl),
		.sllv(sllv),
		.srlv(srlv),
		.sra(sra),
		.srav(srav),
		.and_instr(and_instr),
		.or_instr(or_instr),
		.xor_instr(xor_instr),
		.nor_instr(nor_instr),
		.addi(addi),
		.addiu(addiu),
        .andi(andi),
		.ori(ori),
        .xori(xori),
		.lui(lui),
        .slt(slt),
        .slti(slti),
        .sltiu(sltiu),
        .sltu(sltu),
		.beq(beq),
		.bne(bne),
        .blez(blez),
        .bgtz(bgtz),
        .bltz(bltz),
        .bgez(bgez),
		.j(j),
		.jal(jal),
        .jalr(jalr),
		.jr(jr),
        .mult(mult),
        .multu(multu),
        .div(div),
        .divu(divu),
        .mfhi(mfhi),
        .mflo(mflo),
        .mthi(mthi),
        .mtlo(mtlo),
		  .madd(madd),
		  //.()
		  //.()
		.equal(equal),
		.larger(larger),
		.smaller(smaller),
		.WDCtrl(WDCtrl_ID),
		.ALUCtrl(ALUCtrl_ID),
		.ALUBCtrl(ALUBCtrl_ID),
		.DM_WE(DM_WE_ID),
		.GRFWE(GRFWE_ID),
		.EXTCtrl(EXTCtrl_ID),
		.JumpCtrl(JumpCtrl_ID),
		.DMEXTCtrl(DMEXTCtrl_ID),
        .MDCCtrl(MDCCtrl_ID),
        .MDM_RE(MDM_RE_ID),
        .MDM_WE(MDM_WE_ID),
        .start(start_ID)
		);
		assign Rtype = addu | add | subu | sub | sll | srl | sllv | srlv | sra | srav | and_instr | or_instr | xor_instr | nor_instr | slt | sltu;
		assign Itype = addi | addiu | andi | ori | xori | lui | slti | sltiu;
		assign load = lb | lbu | lh | lhu | lw;
		assign save = sb | sh | sw;
		assign branch = beq | bne;
		assign jal_out = jal;
      assign jalr_out = jalr;
      assign muldiv_C = mult | multu | div | divu | madd;
      assign muldiv_R = mfhi | mflo;
      assign muldiv_W = mthi | mtlo;
endmodule