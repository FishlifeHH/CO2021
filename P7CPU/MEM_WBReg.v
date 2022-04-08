`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:00:16 11/16/2021 
// Design Name: 
// Module Name:    MEM_WBReg 
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
module MEM_WBReg(
    input clk,
    input reset,
    //input eret_MEM,
    input IntReq,
    //input [31:0] EPC, 
    input [31:0] ALUResult_MEM,
    input [31:0] MDM_RD_MEM,
    input [31:0] ReadData_MEM,
    input [31:0] PC8_MEM,
	 input [31:0] PC_MEM,
    input [2:0] WDCtrl_MEM,
    input GRFWE_MEM,
    input [4:0] WA_MEM,
    input [1:0] Tnew_MEM,
    input [31:0] c0_RD_MEM,
    input br_j_MEM,
	 //input stall,
    output reg [31:0] ALUResult_WB,
    output reg [31:0] MDM_RD_WB,
    output reg [31:0] ReadData_WB,
    output reg [31:0] PC8_WB,
	 output reg [31:0] PC_WB,
    output reg [2:0] WDCtrl_WB,
    output reg GRFWE_WB,
    output reg [4:0] WA_WB,
    output reg [1:0] Tnew_WB,
    output reg [31:0] c0_RD_WB,
    output reg br_j_WB
    );
    always @(posedge clk) begin
        if(reset) begin
            ALUResult_WB <= 0;
            MDM_RD_WB <= 0;
            ReadData_WB <= 0;
            PC8_WB <= 0;
            WDCtrl_WB <= 0;
            GRFWE_WB <= 0;
            WA_WB <= 0;
            Tnew_WB <= 0;
			PC_WB <= (IntReq)? 32'h4180:32'h3000;
            c0_RD_WB <= 0;
            br_j_WB <= 0;
        end
        else begin
            ALUResult_WB <= ALUResult_MEM;
            MDM_RD_WB <= MDM_RD_MEM;
            ReadData_WB <= ReadData_MEM;
            PC8_WB <= PC8_MEM;
				PC_WB <= PC_MEM;
            WDCtrl_WB <= WDCtrl_MEM;
            GRFWE_WB <= GRFWE_MEM;
            WA_WB <= WA_MEM;
            Tnew_WB <= (Tnew_MEM == 0)? 2'b00:Tnew_MEM - 2'b01;
            c0_RD_WB <= c0_RD_MEM;
            br_j_WB <= br_j_MEM;
        end
    end
endmodule