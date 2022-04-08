`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:04:16 11/25/2021 
// Design Name: 
// Module Name:    MEM 
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
module MEM(
	 input [1:0] ad,
    input [31:0] ALUResult_MEM,
    input [31:0] RD2_MEM,
    input [31:0] WD_WB,
    input [2:0] DM_WDfor,
	 input [2:0] DMEXTCtrl_MEM,
	 input [31:0] rawData,
	 input [1:0] DM_WE,
     //input [4:0] RA2_MEM,
     //input [4:0] WA_MEM,
     input [31:0] PC_MEM,
     input c0_WE_MEM,
     input br_j_WB,
     input eret_MEM,
     input PC_err_MEM,
     input overflow_MEM,
     input RI_MEM,
     input clk,
    input reset,
    input IRQ_timer0,
    input IRQ_timer1,
    input interrupt,
	 input [4:0] c0_WA_MEM,
	 input [4:0] c0_RA_MEM,
    output [31:0] DM_WD,
	 output [31:0] ReadData,
     output [3:0] byteen,
     output IntReq,
     output [31:0] EPC,
     output [31:0] c0_RD,
	  //output temp_Int,
     //output [6:2] ExcCode
     output DevReq
    );
	 wire [31:0] DM_WD_forward;
	 wire [3:0] byteen_wire;
    wire [6:2] ExcCode;
    wire [5:0] HWInt;
    //wire handling;
    DM_WDformux DM_WDfor_uut(
        .DM_WDfor(DM_WDfor),
        .RD2_MEM(RD2_MEM),
        .WD_WB(WD_WB),
        .DM_WD(DM_WD_forward)
    );
	 DMEXT DMEXT_uut(
		  .ad(ad),
	     .Data(rawData),
		  .Op(DMEXTCtrl_MEM),
		  .EXTData(ReadData)
	 );
	 byteen_generator byteen_uut(
        .DM_WE(DM_WE),
        .ad(ad),
        .byteen(byteen_wire)
     );
	 DMfdata2mdata mdata_uut(
        .DMfordata(DM_WD_forward),
        .byteen(byteen_wire),
        .DM_WD(DM_WD)
     );
     CP0 CP0_uut(
        .RA(c0_RA_MEM),
        .WA(c0_WA_MEM),
        .WD(DM_WD_forward),
        .PC(PC_MEM),
        .ExcCode_in(ExcCode),
        .HWInt(HWInt),
        .WE(c0_WE_MEM & ~IntReq),
        .br_j(br_j_WB),
        .EXLClr(eret_MEM),
        .clk(clk),
        .reset(reset),
        .IntReq(IntReq),
        .EPC_out(EPC),
        .RD(c0_RD),
        .DevReq_out(DevReq),
		  .interrupt(interrupt)
		  //.temp_Int(temp_Int)
        //.handling(handling)
     );
     ExcCode_generator ExcCode_uut(
        .overflow(overflow_MEM),
        .RI(RI_MEM),
        .PC_err(PC_err_MEM),
        .byteen(byteen_wire),
        .DMEXTCtrl(DMEXTCtrl_MEM),
        .dev_add(ALUResult_MEM),
        .ExcCode(ExcCode)
        //.handling(handling)
     );
	 assign byteen = byteen_wire;
    assign HWInt = {3'b0, interrupt, IRQ_timer1, IRQ_timer0};
endmodule