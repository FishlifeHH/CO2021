`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:03:59 11/20/2021 
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
    input reset,
    output [31:0] i_inst_addr,
    input [31:0] i_inst_rdata,

    output [31:0] m_data_addr,
    input [31:0] m_data_rdata,
    output [31:0] m_data_wdata,
    output [3:0] m_data_byteen,
    output [31:0] m_inst_addr,

    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr
    );
    wire [31:0] Instr;
    wire [4:0] RA1_ID, RA2_ID, WA_ID, WA_EX, WA_MEM, WA_WB, RA1_EX, RA2_EX, RA2_MEM;
	 wire [4:0] ALUCtrl_ID; 
    wire [2:0] CMPAfor, CMPBfor, ALUAfor, ALUBfor, DM_WDfor, Rafor, RD2for, DMEXTCtrl_ID, MDCCtrl_ID;
    wire [1:0] DM_WE_ID, WDCtrl_ID, JumpCtrl_ID, MDM_RE_ID, MDM_WE_ID, Tnew_ID, Tnew_EX, Tnew_MEM, Tnew_WB;
    wire ALUBCtrl_ID, GRFWE_ID, EXTCtrl_ID, start_ID, stall, equal, smaller, larger, busy, jal_EX, jal_MEM, muldiv_R_MEM, Rtype, Itype, branch, jal, jalr, load, save;
	datapath datapath_uut(
        .clk(clk),
        .reset(reset),
        .WDCtrl_ID(WDCtrl_ID),
        .ALUCtrl_ID(ALUCtrl_ID),
        .ALUBCtrl_ID(ALUBCtrl_ID),
        .DM_WE_ID(DM_WE_ID),
        .GRFWE_ID(GRFWE_ID),
        .EXTCtrl_ID(EXTCtrl_ID),
        .JumpCtrl_ID(JumpCtrl_ID),
        .MDCCtrl_ID(MDCCtrl_ID),
        .start_ID(start_ID),
        .MDM_RE_ID(MDM_RE_ID),
        .MDM_WE_ID(MDM_WE_ID),
        .muldiv_R_ID(muldiv_R),
        .jal_ID(jal | jalr),
        .CMPAfor(CMPAfor),
        .CMPBfor(CMPBfor),
        .ALUAfor(ALUAfor),
        .ALUBfor(ALUBfor),
        .DM_WDfor(DM_WDfor),
        .Rafor(Rafor),
		  .RD2for(RD2for),
        .stall(stall),
        .Tnew_ID(Tnew_ID),
        .RA1_ID(RA1_ID),
        .RA2_ID(RA2_ID),
        .WA_ID(WA_ID),
		  .DMEXTCtrl_ID(DMEXTCtrl_ID),
        .Instr_out(Instr),
        .equal(equal),
		.smaller(smaller),
		.larger(larger),
        .busy(busy),
        .jal_EX_out(jal_EX),
        .jal_MEM_out(jal_MEM),
		  .muldiv_R_MEM_out(muldiv_R_MEM),
        .WA_EX_out(WA_EX),
        .WA_MEM_out(WA_MEM),
        .WA_WB_out(WA_WB),
        .RA1_EX_out(RA1_EX),
        .RA2_EX_out(RA2_EX),
        .RA2_MEM_out(RA2_MEM),
        .Tnew_EX_out(Tnew_EX),
        .Tnew_MEM_out(Tnew_MEM),
        .Tnew_WB_out(Tnew_WB),
		  .i_inst_rdata(i_inst_rdata),
		  .i_inst_addr(i_inst_addr),
        .m_data_rdata(m_data_rdata),
        .m_data_wdata(m_data_wdata),
        .m_data_byteen(m_data_byteen),
		  .m_data_addr(m_data_addr),
        .m_inst_addr(m_inst_addr),
        .w_grf_we(w_grf_we),
        .w_grf_addr(w_grf_addr),
        .w_grf_wdata(w_grf_wdata),
        .w_inst_addr(w_inst_addr)
    );
    controller controller_uut(
        .Instr(Instr),
        .equal(equal),
		  .smaller(smaller),
		  .larger(larger),
        .WDCtrl_ID(WDCtrl_ID),
        .ALUCtrl_ID(ALUCtrl_ID),
        .ALUBCtrl_ID(ALUBCtrl_ID),
        .DM_WE_ID(DM_WE_ID),
        .GRFWE_ID(GRFWE_ID),
        .EXTCtrl_ID(EXTCtrl_ID),
        .JumpCtrl_ID(JumpCtrl_ID),
		  .DMEXTCtrl_ID(DMEXTCtrl_ID),
          .MDCCtrl_ID(MDCCtrl_ID),
        .start_ID(start_ID),
        .MDM_RE_ID(MDM_RE_ID),
        .MDM_WE_ID(MDM_WE_ID),
        .Rtype(Rtype),
        .Itype(Itype),
        .branch(branch),
        .jal_out(jal),
        .jalr_out(jalr),
        .load(load),
        .save(save),
        .muldiv_C(muldiv_C),
        .muldiv_R(muldiv_R),
        .muldiv_W(muldiv_W)
    );
    hazard_solver hazardsolver_uut(
        .Instr(Instr),
        .busy(busy),
        .WA_EX(WA_EX),
        .WA_MEM(WA_MEM),
        .WA_WB(WA_WB),
        .RA1_EX(RA1_EX),
        .RA2_EX(RA2_EX),
        .RA2_MEM(RA2_MEM),
        .GRFWE_ID(GRFWE_ID),
        .jal_EX(jal_EX),
        .jal_MEM(jal_MEM),
        .muldiv_R_MEM(muldiv_R_MEM),
        .Rtype(Rtype),
        .Itype(Itype),
        .branch(branch),
        .jal(jal),
        .jalr(jalr),
        .load(load),
        .save(save),
        .muldiv_C(muldiv_C),
        .muldiv_R(muldiv_R),
        .muldiv_W(muldiv_W),
        .Tnew_EX(Tnew_EX),
        .Tnew_MEM(Tnew_MEM),
        .Tnew_WB(Tnew_WB),
        .CMPAfor(CMPAfor),
        .CMPBfor(CMPBfor),
        .ALUAfor(ALUAfor),
        .ALUBfor(ALUBfor),
        .DM_WDfor(DM_WDfor),
        .Rafor(Rafor),
		  .RD2for(RD2for),
        .stall(stall),
        .Tnew_ID(Tnew_ID),
        .RA1_ID_out(RA1_ID),
        .RA2_ID_out(RA2_ID),
        .WA_ID_out(WA_ID)
    );
endmodule
//conditional load_save:if forward possibly will happen,stall,else pipe
//conditional jump: can completely be known in ID
//calculate: be care of $signed
//all: RTL and MARS is the standard
/*change MARS:
	mars/mips/hardware/Memory.java: set 358 411:
	int newValue = this.get(address >> 2 << 2, 4, false);
	SystemIO.printString(String.format("@%08x: *%08x <= %08x\n", RegisterFile.getProgramCounter() - 4, address >> 2 << 2, newValue));
	
	mars/mips/hardware/RegisterFile.java: 
	import mars.util.SystemIO; //放第8行后面
	SystemIO.printString(String.format("@%08x: $%2d <= %08x\n",programCounter.getValue() - 4, i, val));	//放第103行后面
	public static Register programCounter= new Register("pc", 32, Memory.textBaseAddress);  //第70行把programCounter改成public的
	CreateMarsJar.bat
	*/
//I cannot do anything but trust!
//Trust is one of the most beautiful human qualities.