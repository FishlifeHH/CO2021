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
    input [31:0] MDM_RD_EX,
    input [31:0] RD2_EX,
    input [31:0] PC8_EX,
	 input [31:0] PC_EX,
     input PC_err_EX,
    input [2:0] WDCtrl_EX,
    input GRFWE_EX,
    input c0_WE_EX,
    input [1:0] DM_WE_EX,
    input [4:0] RA1_EX,
    input [4:0] RA2_EX,
    input [4:0] WA_EX,
	 input [2:0] DMEXTCtrl_EX,
     input overflow_EX,
     input RI_EX,
    input [1:0] Tnew_EX,
	 input jal_EX,
     input eret_EX,
     input br_j_EX,
     input muldiv_R_EX,
	  input mtc0_EX,
     //input eret_MEM_in,
     //input [31:0] EPC,
	  input IntReq,
	  input [4:0] c0_WA_EX,
	  input [4:0] c0_RA_EX,
	  //input stall,
    output reg [31:0] ALUResult_MEM,
    output reg [31:0] MDM_RD_MEM,
    output reg [31:0] RD2_MEM,
    output reg [31:0] PC8_MEM,
	 output reg [31:0] PC_MEM,
     output reg PC_err_MEM,
    output reg [2:0] WDCtrl_MEM,
    output reg GRFWE_MEM,
    output reg c0_WE_MEM,
    output reg [1:0] DM_WE_MEM,
    output reg [4:0] RA1_MEM,
    output reg [4:0] RA2_MEM,
    output reg [4:0] WA_MEM,
	 output reg [2:0] DMEXTCtrl_MEM,
    output reg [1:0] Tnew_MEM,
	 output reg jal_MEM,
     output reg eret_MEM,
     output reg br_j_MEM,
     output reg muldiv_R_MEM,
     output reg overflow_MEM,
     output reg RI_MEM,
	  output reg mtc0_MEM,
	  output reg [4:0] c0_WA_MEM,
	  output reg [4:0] c0_RA_MEM
    );
    always @(posedge clk) begin
        if(reset) begin
            ALUResult_MEM <= 0;
            MDM_RD_MEM <= 0;
            RD2_MEM <= 0;
            PC8_MEM <= 0;
				PC_MEM <= (IntReq)? 32'h4180:32'h3000;
            WDCtrl_MEM <= 0;
            GRFWE_MEM <= 0;
            c0_WE_MEM <= 0;
            DM_WE_MEM <= 0;
            RA1_MEM <= 0;
            RA2_MEM <= 0;
            WA_MEM <= 0;
				DMEXTCtrl_MEM <= 0;
            Tnew_MEM <= 0;
				jal_MEM <= 0;
                eret_MEM <= 0;
                muldiv_R_MEM <= 0;
                br_j_MEM <= 0;
                overflow_MEM <= 0;
                RI_MEM <= 0;
                PC_err_MEM <= 0;
					 mtc0_MEM <= 0;
					 c0_WA_MEM <= 0;
					 c0_RA_MEM <= 0;
        end
        else begin
            ALUResult_MEM <= ALUResult_EX;
            MDM_RD_MEM <= MDM_RD_EX;
            RD2_MEM <= RD2_EX;
            PC8_MEM <= PC8_EX;
				PC_MEM <= PC_EX;
            PC_err_MEM <= PC_err_EX;
            WDCtrl_MEM <= WDCtrl_EX;
            GRFWE_MEM <= GRFWE_EX;
            c0_WE_MEM <= c0_WE_EX;
            DM_WE_MEM <= DM_WE_EX;
            RA1_MEM <= RA1_EX;
            RA2_MEM <= RA2_EX;
            WA_MEM <= WA_EX;
				DMEXTCtrl_MEM <= DMEXTCtrl_EX;
				jal_MEM <= jal_EX;
                eret_MEM <= eret_EX;
                muldiv_R_MEM <= muldiv_R_EX;
            Tnew_MEM <= (Tnew_EX == 0)? 2'b00:Tnew_EX - 2'b01;
            br_j_MEM <= br_j_EX;
            overflow_MEM <= overflow_EX;
            RI_MEM <= RI_EX;
				mtc0_MEM <= mtc0_EX;
				c0_WA_MEM <= c0_WA_EX;
				c0_RA_MEM <= c0_RA_EX;
        end
    end
endmodule