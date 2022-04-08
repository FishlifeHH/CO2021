`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:07:36 11/17/2021 
// Design Name: 
// Module Name:    datapath 
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
module datapath(
    input clk,
    input reset,
    input [2:0] WDCtrl_ID,
    input [4:0] ALUCtrl_ID,
    input ALUBCtrl_ID,
    input [1:0] DM_WE_ID,
    input GRFWE_ID,
    input c0_WE_ID,
	 input EXTCtrl_ID,
    input [2:0] JumpCtrl_ID,
    input [2:0] MDCCtrl_ID,
    input start_ID,
    input [1:0] MDM_RE_ID,
    input [1:0] MDM_WE_ID,
	 input jal_ID,
     input br_j_ID,
     input eret_ID,
     input muldiv_R_ID,
    input [2:0] CMPAfor,
    input [2:0] CMPBfor,
    input [2:0] ALUAfor,
    input [2:0] ALUBfor,
    input [2:0] DM_WDfor,
    input [2:0] Rafor,
	 input [2:0] RD2for,
    input stall,
    input [1:0] Tnew_ID,
    input [4:0] RA1_ID,
    input [4:0] RA2_ID,
    input [4:0] WA_ID,
	 input [2:0] DMEXTCtrl_ID,
     input overflow_ID,
     input RI_ID,
     input IRQ_timer0,
     input IRQ_timer1,
     input interrupt,
	  input mtc0_ID,
	  input [4:0] c0_WA_ID,
	  input [4:0] c0_RA_ID,
    input [31:0] Instr_IF,//input [31:0] i_inst_rdata,
    input [31:0] rawData_MEM,//input [31:0] m_data_rdata,
    output [31:0] PC_IF_out,//output [31:0] i_inst_addr,
    output [31:0] add_MEM,//output [31:0] m_data_addr,
    output [31:0] DM_WD_MEM,//output [31:0] m_data_wdata,
    output [3:0] byteen_MEM,//output [3:0] m_data_byteen,
    output [31:0] PC_MEM_out,//output [31:0] m_inst_addr,
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr,
    output [31:0] Instr_out,
    output equal,
	 output smaller,
	 output larger,
	 output jal_EX_out,
	 output jal_MEM_out,
     output muldiv_R_MEM_out,
    output [4:0] WA_EX_out,
    output [4:0] WA_MEM_out,
    output [4:0] WA_WB_out,
    output [4:0] RA1_EX_out,
    output [4:0] RA2_EX_out,
    output [4:0] RA2_MEM_out,
    output [1:0] Tnew_EX_out,
    output [1:0] Tnew_MEM_out,
    output [1:0] Tnew_WB_out,
	 //output temp_Int,
    output DevReq,
	 output IntReq_out,
    output busy,
	 //output eret_MEM_out,
    //output eret_EX_out,
	 output mtc0_EX_out,
	 output mtc0_MEM_out,
	 output [4:0] c0_WA_EX_out,
	 output [4:0] c0_WA_MEM_out
    );
    wire [31:0] Branch, jump, ra, PC4_IF, PC_IF;

    wire [31:0] Instr_ID, PC4_ID, PC_ID, RD1_ID, RD2_ID, PC8_ID, EXTData_ID;
    wire PC_err_ID;

    wire [31:0] RD1_EX, RD2_EX, EXTData_EX, PC8_EX, PC_EX, ALUResult_EX, RD2_EX_out, MDM_RD_EX;
    wire [1:0] Tnew_EX, DM_WE_EX, MDM_RE_EX, MDM_WE_EX;
    wire GRFWE_EX, c0_WE_EX, ALUBCtrl_EX, jal_EX, start_EX, muldiv_R_EX, eret_EX, br_j_EX, overflow_EX, RI_EX, overflow_EX_real, PC_err_EX, mtc0_EX;
    wire [4:0] RA1_EX, RA2_EX, WA_EX, shamt_EX, ALUCtrl_EX, c0_WA_EX, c0_RA_EX;
	 wire [2:0] DMEXTCtrl_EX, MDCCtrl_EX, WDCtrl_EX;

    wire [31:0] ALUResult_MEM, RD2_MEM, PC8_MEM, PC_MEM, ReadData_MEM, MDM_RD_MEM, c0_RD_MEM;
    wire [31:0] EPC;
    wire [1:0] Tnew_MEM,DM_WE_MEM;
    wire GRFWE_MEM, c0_WE_MEM, jal_MEM, muldiv_R_MEM, br_j_MEM, IntReq, overflow_MEM, RI_MEM, PC_err_MEM, mtc0_MEM;
    wire [4:0] RA1_MEM, RA2_MEM, WA_MEM,c0_WA_MEM, c0_RA_MEM;
	 wire [2:0] WDCtrl_MEM, DMEXTCtrl_MEM;

    wire [31:0] ALUResult_WB, ReadData_WB, PC8_WB, WD_WB, PC_WB, MDM_RD_WB, c0_RD_WB;
    wire [4:0] WA_WB;
    wire [1:0] Tnew_WB;
	 wire [2:0] WDCtrl_WB;
    wire GRFWE_WB, br_j_WB;

    IF IF_uut(
        .clk(clk),
        .reset(reset),
        .en(~stall | IntReq),
        .Nadder(Branch),
        .splitter(jump),
        .RD1(ra),
        .JumpCtrl(JumpCtrl_ID),
        .IntReq(IntReq),
		.PC_out(PC_IF),
        .PC4(PC4_IF),
        .EPC(EPC)
    );
    IF_IDReg IF_ID_uut(
        .clk(clk),
        .reset(reset | IntReq),
		  .IntReq(IntReq),
        //.eret_MEM(eret_MEM),
        .EPC(EPC),
        .en(~stall),
        .Instr_IF(Instr_IF),//.Instr_IF(i_inst_rdata),
        .PC4_IF(PC4_IF),
        .PC_IF(PC_IF),
        .Instr_ID(Instr_ID),
        .PC4_ID(PC4_ID),
        .PC_ID(PC_ID),
		  //.ereting(eret_EX | eret_MEM),
		  .eret_ID(eret_ID)
    );
    ID ID_uut(
        .clk(clk),
        .reset(reset),
        .Instr_ID(Instr_ID),
        .PC_ID(PC_ID),
        .PC4_ID(PC4_ID),
        .RA1_ID(RA1_ID),
        .RA2_ID(RA2_ID),
        .WA_WB(WA_WB),
        .WD_WB(WD_WB),
		  .PC_WB(PC_WB),
		  .PC8_EX(PC8_EX),
		  .PC8_MEM(PC8_MEM),
		  .PC8_WB(PC8_WB),
        .ALUResult_MEM(ALUResult_MEM),
		  .MDM_RD_MEM(MDM_RD_MEM),
        .GRFWE_WB(GRFWE_WB),
        .EXTCtrl_ID(EXTCtrl_ID),
        .CMPAfor(CMPAfor),
        .CMPBfor(CMPBfor),
        .Rafor(Rafor),
        .RD1_ID(RD1_ID),
        .RD2_ID(RD2_ID),
        .PC8_ID(PC8_ID),
        .equal(equal),
		  .larger(larger),
		  .smaller(smaller),
        .EXTData_ID(EXTData_ID),
        .Branch(Branch),
        .jump(jump),
        .ra(ra),
        .PC_err(PC_err_ID)
    );
    ID_EXReg ID_EX_uut(
        .clk(clk),
        .reset(reset | stall | IntReq),
        .flush(stall),
        //.eret_MEM(eret_MEM),
        //.EPC(EPC),
        .IntReq(IntReq),
        .RD1_ID(RD1_ID),
        .RD2_ID(RD2_ID),
		  .shamt_ID(Instr_ID[10:6]),
        .EXTData_ID(EXTData_ID),
        .PC8_ID(PC8_ID),
        .PC_ID(PC_ID),
        .PC_err_ID(PC_err_ID),
        .WDCtrl_ID(WDCtrl_ID),
        .GRFWE_ID(GRFWE_ID),
        .c0_WE_ID(c0_WE_ID),
        .ALUCtrl_ID(ALUCtrl_ID),
        .ALUBCtrl_ID(ALUBCtrl_ID),
        .MDCCtrl_ID(MDCCtrl_ID),
        .start_ID(start_ID),
        .MDM_RE_ID(MDM_RE_ID),
        .MDM_WE_ID(MDM_WE_ID),
        .DM_WE_ID(DM_WE_ID),
		  .jal_ID(jal_ID),
          .eret_ID(eret_ID),
          .br_j_ID(br_j_ID),
          .muldiv_R_ID(muldiv_R_ID),
        .RA1_ID(RA1_ID),
        .RA2_ID(RA2_ID),
        .WA_ID(WA_ID),
        .Tnew_ID(Tnew_ID),
		  .DMEXTCtrl_ID(DMEXTCtrl_ID),
          .overflow_ID(overflow_ID),
          .RI_ID(RI_ID),
			 .mtc0_ID(mtc0_ID),
			 .c0_WA_ID(c0_WA_ID),
			 .c0_RA_ID(c0_RA_ID),
        .RD1_EX(RD1_EX),
        .RD2_EX(RD2_EX),
		  .shamt_EX(shamt_EX),
        .EXTData_EX(EXTData_EX),
        .PC8_EX(PC8_EX),
        .PC_EX(PC_EX),
        .PC_err_EX(PC_err_EX),
        .WDCtrl_EX(WDCtrl_EX),
        .GRFWE_EX(GRFWE_EX),
        .c0_WE_EX(c0_WE_EX),
		  .jal_EX(jal_EX),
          .eret_EX(eret_EX),
          .br_j_EX(br_j_EX),
          .muldiv_R_EX(muldiv_R_EX),
        .ALUCtrl_EX(ALUCtrl_EX),
        .ALUBCtrl_EX(ALUBCtrl_EX),
        .DM_WE_EX(DM_WE_EX),
        .MDCCtrl_EX(MDCCtrl_EX),
        .start_EX(start_EX),
        .MDM_RE_EX(MDM_RE_EX),
        .MDM_WE_EX(MDM_WE_EX),
        .RA1_EX(RA1_EX),
        .RA2_EX(RA2_EX),
        .WA_EX(WA_EX),
		  .DMEXTCtrl_EX(DMEXTCtrl_EX),
          .overflow_EX(overflow_EX),
          .RI_EX(RI_EX),
        .Tnew_EX(Tnew_EX),
		  .mtc0_EX(mtc0_EX),
		  .c0_WA_EX(c0_WA_EX),
		  .c0_RA_EX(c0_RA_EX)
		  //.eret_EX_in(eret_EX)
    );
    EX EX_uut(
        .RD1_EX(RD1_EX),
        .RD2_EX(RD2_EX),
		.shamt_EX(shamt_EX),
        .EXTData_EX(EXTData_EX),
        .PC_EX(PC_EX),
		.RD2_MEM(RD2_MEM),
        .PC8_MEM(PC8_MEM),
        .PC8_WB(PC8_WB),
        .ALUResult_MEM(ALUResult_MEM),
		  .MDM_RD_MEM(MDM_RD_MEM),
        .WD_WB(WD_WB),
        .ALUCtrl(ALUCtrl_EX),
        .ALUBCtrl(ALUBCtrl_EX),
        .ALUAfor(ALUAfor),
        .ALUBfor(ALUBfor),
		.RD2for(RD2for),
        .MDCCtrl(MDCCtrl_EX),
        .start(start_EX),
        .MDM_RE(MDM_RE_EX),
		  .MDM_WE(MDM_WE_EX),
          .overflow_EX(overflow_EX),
        .clk(clk),
        .reset(reset),
        .ALUResult_EX(ALUResult_EX),
		.RD2_EX_out(RD2_EX_out),
        .MDM_RD(MDM_RD_EX),
        .busy(busy),
        .overflow_EX_real(overflow_EX_real),
		  .IntReq(IntReq)
    );
    EX_MEMReg EX_MEM_uut(
        .clk(clk),
        .reset(reset | IntReq),
        .IntReq(IntReq),
        //.eret_MEM_in(eret_MEM),
        //.EPC(EPC),
        .ALUResult_EX(ALUResult_EX),
        .MDM_RD_EX(MDM_RD_EX),
        .RD2_EX(RD2_EX_out),
        .PC8_EX(PC8_EX),
        .PC_EX(PC_EX),
        .PC_err_EX(PC_err_EX),
        .WDCtrl_EX(WDCtrl_EX),
        .GRFWE_EX(GRFWE_EX),
        .c0_WE_EX(c0_WE_EX),
        .DM_WE_EX(DM_WE_EX),
		  .jal_EX(jal_EX),
         .eret_EX(eret_EX),
          .br_j_EX(br_j_EX),
          .muldiv_R_EX(muldiv_R_EX),
        .RA1_EX(RA1_EX),
        .RA2_EX(RA2_EX),
        .WA_EX(WA_EX),
		  .DMEXTCtrl_EX(DMEXTCtrl_EX),
          .overflow_EX(overflow_EX_real),
          .RI_EX(RI_EX),
        .Tnew_EX(Tnew_EX),
		  .mtc0_EX(mtc0_EX),
		  .c0_WA_EX(c0_WA_EX),
		  .c0_RA_EX(c0_RA_EX),
        .ALUResult_MEM(ALUResult_MEM),
        .MDM_RD_MEM(MDM_RD_MEM),
        .RD2_MEM(RD2_MEM),
        .PC8_MEM(PC8_MEM),
        .PC_MEM(PC_MEM),
        .PC_err_MEM(PC_err_MEM),
        .WDCtrl_MEM(WDCtrl_MEM),
        .GRFWE_MEM(GRFWE_MEM),
        .c0_WE_MEM(c0_WE_MEM),
        .DM_WE_MEM(DM_WE_MEM),
        .RA1_MEM(RA1_MEM),
        .RA2_MEM(RA2_MEM),
        .WA_MEM(WA_MEM),
		  .DMEXTCtrl_MEM(DMEXTCtrl_MEM),
		  .jal_MEM(jal_MEM),
         .eret_MEM(eret_MEM),
          .br_j_MEM(br_j_MEM),
          .muldiv_R_MEM(muldiv_R_MEM),
          .overflow_MEM(overflow_MEM),
          .RI_MEM(RI_MEM),
        .Tnew_MEM(Tnew_MEM),
		  .mtc0_MEM(mtc0_MEM),
		  .c0_WA_MEM(c0_WA_MEM),
		  .c0_RA_MEM(c0_RA_MEM)
		  //.stall(stall)
    );
    MEM MEM_uut(
        .RD2_MEM(RD2_MEM),
        .ALUResult_MEM(ALUResult_MEM),
        .WD_WB(WD_WB),
        .DM_WDfor(DM_WDfor),
        .DM_WD(DM_WD_MEM),
		.DMEXTCtrl_MEM(DMEXTCtrl_MEM),
		.ad(ALUResult_MEM[1:0]),
		.DM_WE(DM_WE_MEM),
		.rawData(rawData_MEM),//.rawData(m_data_rdata),
		.ReadData(ReadData_MEM),
		.byteen(byteen_MEM),//.byteen(m_data_byteen),
        //.RA2_MEM(RA2_MEM),
        //.WA_MEM(WA_MEM),
        .PC_MEM(PC_MEM),
        .PC_err_MEM(PC_err_MEM),
        .c0_WE_MEM(c0_WE_MEM),
        .br_j_WB(br_j_WB),
        .eret_MEM(eret_MEM),
        .overflow_MEM(overflow_MEM),
        .RI_MEM(RI_MEM),
        .clk(clk),
        .reset(reset),
        .IntReq(IntReq),
        .EPC(EPC),
        .c0_RD(c0_RD_MEM),
        .IRQ_timer0(IRQ_timer0),
        .IRQ_timer1(IRQ_timer1),
        .interrupt(interrupt),
		  //.temp_Int(temp_Int),
        .DevReq(DevReq),
		  .c0_WA_MEM(c0_WA_MEM),
		  .c0_RA_MEM(c0_RA_MEM)
    );
    MEM_WBReg MEM_WB_uut(
        .clk(clk),
        .reset(reset | IntReq),
        .IntReq(IntReq),
        //.eret_MEM(eret_MEM),
        //.EPC(EPC),
        .ALUResult_MEM(ALUResult_MEM),
        .MDM_RD_MEM(MDM_RD_MEM),
        .ReadData_MEM(ReadData_MEM),
        .c0_RD_MEM(c0_RD_MEM),
        .PC8_MEM(PC8_MEM),
		  .PC_MEM(PC_MEM),
        .WDCtrl_MEM(WDCtrl_MEM),
        .GRFWE_MEM(GRFWE_MEM),
        .WA_MEM(WA_MEM),
        .Tnew_MEM(Tnew_MEM),
        .br_j_MEM(br_j_MEM),
        .ALUResult_WB(ALUResult_WB),
        .MDM_RD_WB(MDM_RD_WB),
        .ReadData_WB(ReadData_WB),
        .c0_RD_WB(c0_RD_WB),
        .PC8_WB(PC8_WB),
		  .PC_WB(PC_WB),
        .WDCtrl_WB(WDCtrl_WB),
        .GRFWE_WB(GRFWE_WB),
        .WA_WB(WA_WB),
        .Tnew_WB(Tnew_WB),
        .br_j_WB(br_j_WB)
		  //.stall(stall)
    );
    WB WB_uut(
        .ReadData_WB(ReadData_WB),
        .ALUResult_WB(ALUResult_WB),
		  .MDM_RD_WB(MDM_RD_WB),
          .c0_RD_WB(c0_RD_WB),
        .WDCtrl(WDCtrl_WB),
        .PC8_WB(PC8_WB),
        .WD_WB(WD_WB)
    );
    assign Instr_out = Instr_ID;
    assign WA_EX_out = WA_EX;
    assign WA_MEM_out = WA_MEM;
    assign WA_WB_out = WA_WB;
    assign RA1_EX_out = RA1_EX;
    assign RA2_EX_out = RA2_EX;
    assign RA2_MEM_out = RA2_MEM;
    assign Tnew_EX_out = Tnew_EX;
    assign Tnew_MEM_out = Tnew_MEM;
    assign Tnew_WB_out = Tnew_WB;
	 assign jal_EX_out = jal_EX;
	 assign jal_MEM_out = jal_MEM;
    assign muldiv_R_MEM_out = muldiv_R_MEM;
    assign PC_IF_out = (eret_ID)? EPC:PC_IF;//assign i_inst_addr = PC_IF;
    assign add_MEM = ALUResult_MEM;//assign m_data_addr = ALUResult_MEM;
	assign PC_MEM_out = PC_MEM; //assign m_inst_addr = PC_MEM;
    assign w_grf_addr = WA_WB;
    assign w_grf_wdata = WD_WB;
    assign w_grf_we = GRFWE_WB;
	 assign w_inst_addr = PC_WB;
	 //assign eret_MEM_out = eret_MEM;
	//assign eret_EX_out = eret_EX;
	assign mtc0_EX_out = mtc0_EX;
	assign mtc0_MEM_out = mtc0_MEM;
	assign IntReq_out = IntReq;
	assign c0_WA_EX_out = c0_WA_EX;
	assign c0_WA_MEM_out = c0_WA_MEM;
endmodule