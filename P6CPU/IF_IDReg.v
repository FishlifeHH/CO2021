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
    input [31:0] Instr_IF,
    input [31:0] PC4_IF,
	 input [31:0] PC_IF,
	 output reg [31:0] Instr_ID,
    output reg [31:0] PC4_ID,
	 output reg [31:0] PC_ID
    );
	always @(posedge clk) begin
		if(reset) begin
				Instr_ID <= 0;
            PC4_ID <= 0;
				PC_ID <= 0;
		  end
		else if(en) begin
            Instr_ID <= Instr_IF;
            PC4_ID <= PC4_IF;
				PC_ID <= PC_IF;
        end
      else begin
            Instr_ID <= Instr_ID;
            PC4_ID <= PC4_ID;
				PC_ID <= PC_ID;
        end
	end
endmodule