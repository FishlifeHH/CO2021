`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:27 11/16/2021 
// Design Name: 
// Module Name:    EX_MEMReg 
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
module EX_MEMReg(
    input clk,
    input reset,
    input [31:0] ALUResult_EX,
    input [31:0] RD2_EX,
    input [31:0] PC8_EX,
	 input [31:0] PC_EX,
    input [1:0] WDCtrl_EX,
    input GRFWE_EX,
    input DM_RE_EX,
    input DM_WE_EX,
    input [4:0] RA1_EX,
    input [4:0] RA2_EX,
    input [4:0] WA_EX,
    input [1:0] Tnew_EX,
	 input jal_EX,
    output reg [31:0] ALUResult_MEM,
    output reg [31:0] RD2_MEM,
    output reg [31:0] PC8_MEM,
	 output reg [31:0] PC_MEM,
    output reg [1:0] WDCtrl_MEM,
    output reg GRFWE_MEM,
    output reg DM_RE_MEM,
    output reg DM_WE_MEM,
    output reg [4:0] RA1_MEM,
    output reg [4:0] RA2_MEM,
    output reg [4:0] WA_MEM,
    output reg [1:0] Tnew_MEM,
	 output reg jal_MEM
    );
    always @(posedge clk) begin
        if(reset) begin
            ALUResult_MEM <= 0;
            RD2_MEM <= 0;
            PC8_MEM <= 0;
				PC_MEM <= 0;
            WDCtrl_MEM <= 0;
            GRFWE_MEM <= 0;
            DM_RE_MEM <= 0;
            DM_WE_MEM <= 0;
            RA1_MEM <= 0;
            RA2_MEM <= 0;
            WA_MEM <= 0;
            Tnew_MEM <= 0;
				jal_MEM <= 0;
        end
        else begin
            ALUResult_MEM <= ALUResult_EX;
            RD2_MEM <= RD2_EX;
            PC8_MEM <= PC8_EX;
				PC_MEM <= PC_EX;
            WDCtrl_MEM <= WDCtrl_EX;
            GRFWE_MEM <= GRFWE_EX;
            DM_RE_MEM <= DM_RE_EX;
            DM_WE_MEM <= DM_WE_EX;
            RA1_MEM <= RA1_EX;
            RA2_MEM <= RA2_EX;
            WA_MEM <= WA_EX;
				jal_MEM <= jal_EX;
            Tnew_MEM <= (Tnew_EX == 0)? 2'b00:Tnew_EX - 2'b01;
        end
    end
endmodule