`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:44:34 11/11/2021 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] PC,
    output [31:0] Instr
    );
    reg [31:0] rom[32'h1400:32'hc00];
	 initial begin
		$readmemh("code.txt", rom);
	 end
	 assign processed_PC = PC - 32'h3000;
    assign Instr = rom[{2'b0,PC[31:2]}];
endmodule
