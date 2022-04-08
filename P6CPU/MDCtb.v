`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:05:48 12/11/2021
// Design Name:   MDC
// Module Name:   D:/VHDLfile/P6CPU/MDCtb.v
// Project Name:  P6CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MDC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MDCtb;

	// Inputs
	reg [31:0] SrcA;
	reg [31:0] SrcB;
	reg [2:0] MDCCtrl;

	// Outputs
	wire [31:0] MDCResult_hi;
	wire [31:0] MDCResult_lo;

	// Instantiate the Unit Under Test (UUT)
	MDC uut (
		.SrcA(SrcA), 
		.SrcB(SrcB), 
		.MDCCtrl(MDCCtrl), 
		.MDCResult_hi(MDCResult_hi), 
		.MDCResult_lo(MDCResult_lo)
	);

	initial begin
		// Initialize Inputs
		SrcA = 0;
		SrcB = 0;
		MDCCtrl = 0;

		// Wait 100 ns for global reset to finish
		#100;
      SrcA = 32'hc2345678;
		SrcB = 32'hb8765431;
		#10
		MDCCtrl = 3'd1;
		#10
		MDCCtrl = 3'd2;
		#10
		MDCCtrl = 3'd3;
		// Add stimulus here

	end
      
endmodule

