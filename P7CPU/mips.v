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
    input interrupt,
    output [31:0] macroscopic_pc, 
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
    wire [31:0] Instr, add_MEM, rawData_MEM, timer0_RD, timer1_RD, DM_WD_MEM, PC_MEM, Dev_WD, Dev_add_fixed;
    wire [4:0] RA1_ID, RA2_ID, WA_ID, WA_EX, WA_MEM, WA_WB, RA1_EX, RA2_EX, RA2_MEM, c0_WA_ID, c0_WA_EX, c0_WA_MEM, c0_RA_ID;
	 wire [4:0] ALUCtrl_ID; 
    wire [3:0] byteen_MEM;
    wire [2:0] CMPAfor, CMPBfor, ALUAfor, ALUBfor, DM_WDfor, Rafor, RD2for, DMEXTCtrl_ID, MDCCtrl_ID, WDCtrl_ID, JumpCtrl_ID;
    wire [1:0] DM_WE_ID, MDM_RE_ID, MDM_WE_ID, Tnew_ID, Tnew_EX, Tnew_MEM, Tnew_WB;
    wire ALUBCtrl_ID, GRFWE_ID, c0_WE_ID, EXTCtrl_ID, start_ID, stall, equal, smaller, larger, busy, jal_EX, jal_MEM, muldiv_R_MEM, Rtype, Itype, branch, jal, jalr, load, save, mfc0, mtc0, eret, br_j_ID, overflow_ID, RI_ID, IRQ0, IRQ1, IRQ_timer0, IRQ_timer1, WE_timer0, WE_timer1, eret_MEM, eret_EX, IntReq, temp_Int, DevReq;
	 wire mtc0_EX, mtc0_MEM;
	datapath datapath_uut(
        .clk(clk),
        .reset(reset),
        .WDCtrl_ID(WDCtrl_ID),
        .ALUCtrl_ID(ALUCtrl_ID),
        .ALUBCtrl_ID(ALUBCtrl_ID),
        .DM_WE_ID(DM_WE_ID),
        .GRFWE_ID(GRFWE_ID),
        .c0_WE_ID(c0_WE_ID),
        .EXTCtrl_ID(EXTCtrl_ID),
        .JumpCtrl_ID(JumpCtrl_ID),
        .MDCCtrl_ID(MDCCtrl_ID),
        .start_ID(start_ID),
        .MDM_RE_ID(MDM_RE_ID),
        .MDM_WE_ID(MDM_WE_ID),
        .muldiv_R_ID(muldiv_R),
        .jal_ID(jal | jalr),
        .br_j_ID(br_j_ID),
        .eret_ID(eret),
		  .mtc0_ID(mtc0),
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
          .overflow_ID(overflow_ID),
          .RI_ID(RI_ID),
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
		.Instr_IF(i_inst_rdata),  //.i_inst_rdata(i_inst_rdata),
		.PC_IF_out(i_inst_addr),  //.i_inst_addr(i_inst_addr),
        .rawData_MEM(rawData_MEM),//.m_data_rdata(m_data_rdata),
        .DM_WD_MEM(DM_WD_MEM),//.m_data_wdata(m_data_wdata),
        .byteen_MEM(byteen_MEM),//.m_data_byteen(m_data_byteen),
		.add_MEM(add_MEM),  //.m_data_addr(m_data_addr),
        .PC_MEM_out(PC_MEM),//.m_inst_addr(m_inst_addr),
        .w_grf_we(w_grf_we),
        .w_grf_addr(w_grf_addr),
        .w_grf_wdata(w_grf_wdata),
        .w_inst_addr(w_inst_addr),
        .IRQ_timer0(IRQ_timer0),
        .IRQ_timer1(IRQ_timer1),
        .interrupt(interrupt),
        .DevReq(DevReq),
		  //.temp_Int(temp_Int),
		  .IntReq_out(IntReq),
		  //.eret_MEM_out(eret_MEM),
		  //.eret_EX_out(eret_EX),
		  .mtc0_EX_out(mtc0_EX),
		  .mtc0_MEM_out(mtc0_MEM),
		  .c0_WA_ID(c0_WA_ID),
		  .c0_RA_ID(c0_RA_ID),
		  .c0_WA_EX_out(c0_WA_EX),
		  .c0_WA_MEM_out(c0_WA_MEM)
    );
    controller controller_uut(
        .Instr(Instr),
        .equal(equal),
		  .smaller(smaller),
		  .larger(larger),
        //.eret_EX(eret_EX),
        //.eret_MEM(eret_MEM),
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
        .c0_WE_ID(c0_WE_ID),
        .Rtype(Rtype),
        .Itype(Itype),
        .branch(branch),
        .jal_out(jal),
        .jalr_out(jalr),
        .br_j_ID(br_j_ID),
        .load(load),
        .save(save),
        .muldiv_C(muldiv_C),
        .muldiv_R(muldiv_R),
        .muldiv_W(muldiv_W),
        .mfc0_out(mfc0),
        .mtc0_out(mtc0),
        .eret_out(eret),
        .overflow(overflow_ID),
        .RI(RI_ID)
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
        .mfc0(mfc0),
        .mtc0(mtc0),
        .eret(eret),
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
        .WA_ID_out(WA_ID),
		//.eret_MEM(eret_MEM),
		.mtc0_EX(mtc0_EX),
		.mtc0_MEM(mtc0_MEM),
		.c0_WA_ID(c0_WA_ID),
		.c0_RA_ID(c0_RA_ID),
		.c0_WA_EX(c0_WA_EX),
		.c0_WA_MEM(c0_WA_MEM)
    );
    bridge bridge_uut(
        .Dev_add(add_MEM),
        .IRQ_timer0(IRQ0),
        .IRQ_timer1(IRQ1),
        .byteen(byteen_MEM),
        .DM_RD(m_data_rdata),
        .timer0_RD(timer0_RD),
        .timer1_RD(timer1_RD),
        .Dev_WD(DM_WD_MEM),
        .DM_byteen(m_data_byteen),
        .IRQ_timer0_out(IRQ_timer0),
        .IRQ_timer1_out(IRQ_timer1),
        .Dev_RD(rawData_MEM),
        .Dev_add_fixed(Dev_add_fixed),
        .Dev_WD_out(Dev_WD),
        .WE_timer0(WE_timer0),
        .WE_timer1(WE_timer1),
        //.interrupt(interrupt),
        .DevReq(DevReq),
		  .IntReq(IntReq)
		  //.temp_Int(temp_Int),
        //.eret_MEM(eret_MEM)
    );
    TC timer0_uut(
        .clk(clk),
        .reset(reset),
        .Addr(Dev_add_fixed[31:2]),
        .WE(WE_timer0),
        .Din(Dev_WD),
        .Dout(timer0_RD),
        .IRQ(IRQ0)
    );
    TC timer1_uut(
        .clk(clk),
        .reset(reset),
        .Addr(Dev_add_fixed[31:2]),
        .WE(WE_timer1),
        .Din(Dev_WD),
        .Dout(timer1_RD),
        .IRQ(IRQ1)
    );
    assign m_inst_addr = PC_MEM;
    assign macroscopic_pc = PC_MEM;
    assign m_data_wdata = Dev_WD;
    assign m_data_addr = Dev_add_fixed;
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
	import mars.util.SystemIO; //�ŵ�8�к���
	SystemIO.printString(String.format("@%08x: $%2d <= %08x\n",programCounter.getValue() - 4, i, val));	//�ŵ�103�к���
	public static Register programCounter= new Register("pc", 32, Memory.textBaseAddress);  //��70�а�programCounter�ĳ�public��
	CreateMarsJar.bat
	*/
//I cannot do anything but trust!
//Trust is one of the most beautiful human qualities.