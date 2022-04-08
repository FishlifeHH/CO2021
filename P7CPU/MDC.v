`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:41:06 11/27/2021 
// Design Name: 
// Module Name:    MDC 
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
module MDC(
    input [31:0] SrcA,
    input [31:0] SrcB,
    input [2:0] MDCCtrl,
	 input [31:0] hi,
	 input [31:0] lo,
    output reg [31:0] MDCResult_hi,
    output reg [31:0] MDCResult_lo
    );
    /*wire [32:0] unsigned_A, unsigned_B, divu_result, divu_remain;
    wire [65:0] multu_result;*/
	always @(*) begin
        case(MDCCtrl)
        3'b000: {MDCResult_hi, MDCResult_lo} = $signed(SrcA) * $signed(SrcB);
        3'b001: {MDCResult_hi, MDCResult_lo} = SrcA * SrcB;//multu_result[63:0];
        3'b010: begin
            MDCResult_lo = $signed(SrcA) / $signed(SrcB);
            MDCResult_hi = $signed(SrcA) % $signed(SrcB);
        end
        3'b011: begin
            MDCResult_lo = SrcA / SrcB;//divu_result[31:0];
            MDCResult_hi = SrcA % SrcB;//divu_remain[31:0];
        end
		  3'b100: {MDCResult_hi, MDCResult_lo} = {hi, lo} + $signed({{32{SrcA[31]}},SrcA} * {{32{SrcB[31]}}, SrcB});
		  default: begin 
				MDCResult_hi = 32'hffffffff;
				MDCResult_lo = 32'hffffffff;
		  end
        endcase
    end
    /*assign unsigned_A = {1'b0, SrcA};
    assign unsigned_B = {1'b0, SrcB};
    assign multu_result = unsigned_A * unsigned_B;
    assign divu_result = unsigned_A / unsigned_B;
    assign divu_remain = unsigned_A % unsigned_B;*/
endmodule
//unsigned calculate without 0||?