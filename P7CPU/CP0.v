`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:55:09 12/16/2021 
// Design Name: 
// Module Name:    CP0 
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
`define add_sr 12
`define add_cause 13
`define add_epc 14
`define add_prid 15
`define IM SR[15:10]
`define IE SR[0]
`define EXL SR[1]
`define IP Cause[15:10]
`define ExcCode Cause[6:2]
`define BD Cause[31]
`define ExcCode Cause[6:2]
module CP0(
    input [4:0] RA,
    input [4:0] WA,
    input [31:0] WD,
    input [31:0] PC,
    input [6:2] ExcCode_in,
    input [5:0] HWInt,
    input WE,
    input br_j,
    input EXLClr,
    input clk,
    input reset,
	 input interrupt,
    output IntReq,
    output [31:0] EPC_out,
    output reg [31:0] RD,
	 //output temp_Int
    output reg DevReq_out
    //output reg handling
    );
	reg [31:0] SR;
    reg [31:0] Cause;
    reg [31:0] EPC;
    reg [31:0] PRId;
	 //reg temp_interrupt;
	 wire temp_DevReq;
    wire DevReq, ExcReq, Req;
    initial begin
        PRId = 32'h20373168;
    end
    always @(posedge clk) begin
        if(reset) begin
            SR <= 32'hff11;
            Cause <= 0;
            EPC <= 0;
            PRId <= 32'h20373168;
				DevReq_out <= 0;
            //handling <= 0;
        end
		  else begin
			  if(EXLClr) begin
					`EXL <= 0;
					//`ExcCode <= 0;
					//`BD <= 0;
					//handling <= 0;
			  end
			  else if(DevReq) begin
					EPC <= (br_j)? PC - 4:PC;
					`BD <= br_j;
					`EXL <= 1;
					`ExcCode <= 0;
					//handling <= 1;
			  end
			  else if(ExcReq) begin
					EPC <= (br_j)? PC - 4:PC;
					`BD <= br_j;
					`EXL <= 1;
					`ExcCode <= ExcCode_in;
					//handling <= 1;
			  end
			  if(WE) begin
					case(WA)
						 `add_sr: SR <= WD;
						 `add_cause: Cause <= WD;
						 `add_epc: EPC <= WD;
						 `add_prid: PRId <= WD;
					endcase
			  end
			  else ;
			  DevReq_out <= temp_DevReq;
		end
       `IP <= HWInt;
    end
    always @(*) begin
        case(RA)
            `add_sr: RD = SR;
            `add_cause: RD = Cause;
            `add_epc: RD = EPC;
            `add_prid: RD = PRId;
            default: RD = 32'hc0c0c0c0;//c0 err code
        endcase
    end
    assign DevReq = (|(HWInt & `IM)) & `IE & ~`EXL;
    assign ExcReq = |ExcCode_in & ~`EXL;
    assign Req = DevReq | ExcReq;
    assign IntReq = Req;
    assign EPC_out = EPC;
	 //assign temp_Int = temp_IntReq;
    assign temp_DevReq = HWInt[2] & SR[12] & `IE & ~`EXL;
endmodule