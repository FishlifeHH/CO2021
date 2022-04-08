`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:52:04 11/20/2021
// Design Name:   mips
// Module Name:   D:/VHDLfile/P5CPU/assembly_line_CPU/mipstest.v
// Project Name:  assembly_line_CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:o
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mipstest;

	// Inputs
	reg clk;
	reg reset;	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#1;
      reset = 0;
		// Add stimulus here

	end
   always #0.5 clk = ~clk;
endmodule

