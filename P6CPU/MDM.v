`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:52:27 11/27/2021 
// Design Name: 
// Module Name:    MDM 
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
module MDM(
    input [31:0] SrcA,
    input [31:0] SrcB,
    input [2:0] MDCCtrl,
    input start,
    input [31:0] MDM_WD,
    input [1:0] MDM_RE,
    input [1:0] MDM_WE,
    input clk,
    input reset,
    output [31:0] MDM_RD,
    output busy
    );
    parameter s0 = 4'd0, s1 = 4'd1, s2 = 4'd2, s3 = 4'd3, s4 = 4'd4, s5 = 4'd5, s6 = 4'd6, s7 = 4'd7, s8 = 4'd8, s9 = 4'd9, s10 = 4'd10;
    reg [31:0] hi, lo, A, B;
    reg [3:0] st = 0, nst;
    reg [2:0] ctrl;
    wire [31:0] MDCResult_hi, MDCResult_lo;
	MDC MDC_uut(
        .SrcA(A),
        .SrcB(B),
        .MDCCtrl(ctrl),
        .MDCResult_hi(MDCResult_hi),
        .MDCResult_lo(MDCResult_lo),
		  .hi(hi),
		  .lo(lo)
    );
    always @(*) begin
        case(st)
        s0: nst =(start)? s1:s0;
        s1: nst = s2;
        s2: nst = s3;
        s3: nst = s4;
        s4: nst = s5;
        s5: nst = (ctrl == 3'b000 || ctrl == 3'b001 || ctrl == 3'b100)? s0:s6;
        s6: nst = s7;
        s7: nst = s8;
        s8: nst = s9;
        s9: nst = s10;
        s10: nst = s0;
        endcase
    end
    always @(posedge clk) begin
        if(reset) begin
            hi <= 0;
            lo <= 0;
            ctrl <= 0;
            st <= s0;
				A <= 0;
				B <= 0;
        end
        else begin
           st <= nst;
           if(st == s0) begin
             ctrl <= MDCCtrl;
			    A <= SrcA;
			    B <= SrcB;
           end
           else begin
               ctrl <= ctrl;
               A <= A;
               B <= B;
           end
           if(st == s10 || (st == s5 && (ctrl == 3'b000 || ctrl == 3'b001 || ctrl == 3'b100))) begin
                hi <= MDCResult_hi;
                lo <= MDCResult_lo;
           end
           else if(st == s0) begin
                //ctrl <= MDCCtrl;
                if(MDM_WE == 2'b01)
                    hi <= MDM_WD;
                else if(MDM_WE == 2'b10)
                    lo <= MDM_WD;
                else begin
                    hi <= hi;
                    lo <= lo;
                end
           end
           else begin
               hi <= hi;
               lo <= lo;
           end
        end
    end
    assign MDM_RD = (MDM_RE == 2'b01)? hi:(MDM_RE == 2'b10)? lo:32'hffffffff;
    assign busy = (st == s0 && ~start)? 1'b0:1'b1;
endmodule