`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:01:25 11/19/2021 
// Design Name: 
// Module Name:    WB 
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
module WB(
	 input [31:0] MDM_RD_WB,
    input [31:0] ReadData_WB,
    input [31:0] ALUResult_WB,
    input [31:0] c0_RD_WB,
    input [2:0] WDCtrl,
    output [31:0] WD_WB,
    input [31:0] PC8_WB
    );
    WDmux WDmux_uut(
        .WDCtrl(WDCtrl),
        .ALUResult(ALUResult_WB),
        .ReadData(ReadData_WB),
		  .MDM_RD(MDM_RD_WB),
        .PC8(PC8_WB),
        .c0_RD(c0_RD_WB),
        .WD(WD_WB)
    );
endmodule