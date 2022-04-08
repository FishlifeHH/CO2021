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
	 input [1:0] Ad,
    input [31:0] RD2_MEM,
    input [31:0] WD_WB,
    input [2:0] DM_WDfor,
	 input [2:0] DMEXTCtrl_MEM,
	 input [31:0] rawData,
	 input [1:0] DM_WE,
    output [31:0] DM_WD,
	 output [31:0] ReadData,
     output [3:0] byteen
    );
	 wire [31:0] DM_WD_forward;
	 wire [3:0] byteen_wire;
    DM_WDformux DM_WDfor_uut(
        .DM_WDfor(DM_WDfor),
        .RD2_MEM(RD2_MEM),
        .WD_WB(WD_WB),
        .DM_WD(DM_WD_forward)
    );
	 DMEXT DMEXT_uut(
		  .Ad(Ad),
	     .Data(rawData),
		  .Op(DMEXTCtrl_MEM),
		  .EXTData(ReadData)
	 );
	 byteen_generator byteen_uut(
        .DM_WE(DM_WE),
        .ad(Ad),
        .byteen(byteen_wire)
     );
	 DMfdata2mdata mdata_uut(
        .DMfordata(DM_WD_forward),
        .byteen(byteen_wire),
        .DM_WD(DM_WD)
     );
	 assign byteen = byteen_wire;
endmodule