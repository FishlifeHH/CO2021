`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:49:09 11/16/2021 
// Design Name: 
// Module Name:    ID_EXReg 
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
module ID_EXReg(
    input [31:0] RD1_ID,
    input [31:0] RD2_ID,
	 input [4:0] shamt_ID,
    input [31:0] EXTData_ID,
    input [31:0] PC8_ID,
	 input [31:0] PC_ID,
     input PC_err_ID,
	  //input eret_EX_in,
    input [2:0] WDCtrl_ID,
    input GRFWE_ID,
    input c0_WE_ID,
    input [4:0] ALUCtrl_ID,
    input ALUBCtrl_ID,
    input [1:0] DM_WE_ID,
    input [2:0] MDCCtrl_ID,
    input start_ID,
    input [1:0] MDM_RE_ID,
    input [1:0] MDM_WE_ID,
    input [4:0] RA1_ID,
    input [4:0] RA2_ID,
    input [4:0] WA_ID,
	 input [2:0] DMEXTCtrl_ID,
     input overflow_ID,
    input RI_ID,
	 input mtc0_ID,
    input [1:0] Tnew_ID,
	 input jal_ID,
     input eret_ID,
     input br_j_ID,
     input muldiv_R_ID,
    input clk,
    input reset,
    //input eret_MEM,
    input IntReq,
    input flush,
	 input [4:0] c0_WA_ID,
	 input [4:0] c0_RA_ID,
    //input [31:0] EPC,
    output reg [31:0] RD1_EX,
    output reg [31:0] RD2_EX,
	 output reg [4:0] shamt_EX,
    output reg [31:0] EXTData_EX,
    output reg [31:0] PC8_EX,
	 output reg [31:0] PC_EX,
     output reg PC_err_EX,
    output reg [2:0] WDCtrl_EX,
    output reg GRFWE_EX,
    output reg c0_WE_EX,
    output reg [4:0] ALUCtrl_EX,
    output reg ALUBCtrl_EX,
    output reg [1:0] DM_WE_EX,
    output reg [2:0] MDCCtrl_EX,
    output reg start_EX,
    output reg [1:0] MDM_RE_EX,
    output reg [1:0] MDM_WE_EX,
    output reg [4:0] RA1_EX,
    output reg [4:0] RA2_EX,
    output reg [4:0] WA_EX,
	 output reg [2:0] DMEXTCtrl_EX,
     output reg overflow_EX,
     output reg RI_EX,
    output reg [1:0] Tnew_EX,
	 output reg jal_EX,
     output reg br_j_EX,
     output reg eret_EX,
     output reg muldiv_R_EX,
	  output reg mtc0_EX,
	  output reg [4:0] c0_WA_EX,
	  output reg [4:0] c0_RA_EX
    );
    always @(posedge clk) begin
        if(reset) begin
            RD1_EX <= 0;
            RD2_EX <= 0;
			shamt_EX <= 0;
            EXTData_EX <= 0;
            PC8_EX <= 0;
			PC_EX <= (IntReq)? 32'h4180:(flush)? PC_ID:32'h3000;
            PC_err_EX <= 0;
            WDCtrl_EX <= 0;
            GRFWE_EX <= 0;
            c0_WE_EX <= 0;
            ALUCtrl_EX <= 0;
            ALUBCtrl_EX <= 0;
            DM_WE_EX <= 0;
            MDCCtrl_EX <= 0;
            start_EX <= 0;
            MDM_RE_EX <= 0;
            MDM_WE_EX <= 0;
            RA1_EX <= 0;
            RA2_EX <= 0;
            WA_EX <= 0;
			DMEXTCtrl_EX <= 0;
            Tnew_EX <= 0;
			jal_EX <= 0;
            eret_EX <= 0;
            muldiv_R_EX <= 0;
            br_j_EX <= (flush)? br_j_EX:0;
            overflow_EX <= 0;
            RI_EX <= 0;
				mtc0_EX <= 0;
				c0_WA_EX <= 0;
				c0_RA_EX <= 0;
        end
		  else if(RI_ID) begin
				RD1_EX <= 0;
            RD2_EX <= 0;
			shamt_EX <= 0;
            EXTData_EX <= 0;
            PC8_EX <= 0;
			PC_EX <= PC_ID;
            PC_err_EX <= 0;
            WDCtrl_EX <= 0;
            GRFWE_EX <= 0;
            c0_WE_EX <= 0;
            ALUCtrl_EX <= 0;
            ALUBCtrl_EX <= 0;
            DM_WE_EX <= 0;
            MDCCtrl_EX <= 0;
            start_EX <= 0;
            MDM_RE_EX <= 0;
            MDM_WE_EX <= 0;
            RA1_EX <= 0;
            RA2_EX <= 0;
            WA_EX <= 0;
			DMEXTCtrl_EX <= 0;
            Tnew_EX <= 0;
			jal_EX <= 0;
            eret_EX <= 0;
            muldiv_R_EX <= 0;
            br_j_EX <= br_j_ID;
            overflow_EX <= 0;
            RI_EX <= RI_ID;
				mtc0_EX <= 0;
				c0_WA_EX <= 0;
				c0_RA_EX <= 0;
		  end
        else begin
            RD1_EX <= RD1_ID;
            RD2_EX <= RD2_ID;
			shamt_EX <= shamt_ID;
            EXTData_EX <= EXTData_ID;
            PC8_EX <= PC8_ID;
			PC_EX <= PC_ID;
            PC_err_EX <= PC_err_ID;
            WDCtrl_EX <= WDCtrl_ID;
            GRFWE_EX <= GRFWE_ID;
            c0_WE_EX <= c0_WE_ID;
            ALUCtrl_EX <= ALUCtrl_ID;
            ALUBCtrl_EX <= ALUBCtrl_ID;
            DM_WE_EX <= DM_WE_ID;
            MDCCtrl_EX <= MDCCtrl_ID;
            start_EX <= start_ID;
            MDM_RE_EX <= MDM_RE_ID;
            MDM_WE_EX <= MDM_WE_ID;
            RA1_EX <= RA1_ID;
            RA2_EX <= RA2_ID;
            WA_EX <= WA_ID;
			DMEXTCtrl_EX <= DMEXTCtrl_ID;
            Tnew_EX <= Tnew_ID;
			jal_EX <= jal_ID;
            eret_EX <= eret_ID;
            muldiv_R_EX <= muldiv_R_ID;
            br_j_EX <= br_j_ID;
            overflow_EX <= overflow_ID;
            RI_EX <= RI_ID;
				mtc0_EX <= mtc0_ID;
				c0_WA_EX <= c0_WA_ID;
				c0_RA_EX <= c0_RA_ID;
        end
    end
endmodule