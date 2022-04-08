`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:32:37 11/16/2021 
// Design Name: 
// Module Name:    IF_IDReg 
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
module IF_IDReg(
	 input clk,
	 input en,
	 input reset,
	 input IntReq,
	 //input eret_MEM,
	 input [31:0] EPC,
    input [31:0] Instr_IF,
    input [31:0] PC4_IF,
	 input [31:0] PC_IF,
	 //input ereting,
	 input eret_ID,
	 output reg [31:0] Instr_ID,
    output reg [31:0] PC4_ID,
	 output reg [31:0] PC_ID
    );
	always @(posedge clk) begin
		if(reset) begin
				Instr_ID <= 0;
            PC4_ID <= 0;
				PC_ID <= (IntReq)? 32'h4180:32'h3000;
		  end
		else if(en) begin
            Instr_ID <= (|PC_IF[1:0])? 0:Instr_IF;
            PC4_ID <= (eret_ID)? EPC + 4:PC4_IF;
				PC_ID <= (eret_ID)? EPC:PC_IF;
        end
      else begin
            Instr_ID <= Instr_ID;
            PC4_ID <= PC4_ID;
				PC_ID <= PC_ID;
        end
	end
endmodule