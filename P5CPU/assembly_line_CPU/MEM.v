`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:51:03 11/19/2021 
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
    input clk,
    input reset,
    input [31:0] ALUResult_MEM,
    input [31:0] RD2_MEM,
    input [31:0] PC_MEM,
    input [31:0] WD_WB,
    input DM_RE,
    input DM_WE,
    input [2:0] DM_WDfor,
    output [31:0] ReadData_MEM
    );
    wire [31:0] DM_WD;
    DM DM_uut(
        .clk(clk),
        .reset(reset),
        .Add(ALUResult_MEM),
        .WD(DM_WD),
        .PC(PC_MEM),
        .WE(DM_WE),
        .RE(DM_RE),
        .ReadData(ReadData_MEM)
    );
    DM_WDformux DM_WDfor_uut(
        .DM_WDfor(DM_WDfor),
        .RD2_MEM(RD2_MEM),
        .WD_WB(WD_WB),
        .DM_WD(DM_WD)
    );
endmodule