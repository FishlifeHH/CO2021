`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:24:01 11/11/2021 
// Design Name: 
// Module Name:    mux 
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
//datapath mux
module WDmux(
    input [2:0] WDCtrl,
    input [31:0] ALUResult,
    input [31:0] ReadData,
    input [31:0] PC8,
	input [31:0] MDM_RD,
    input [31:0] c0_RD,
    output reg [31:0] WD
    );
    always @(*) begin
        case(WDCtrl)
        3'b001: WD = ReadData;
        3'b010: WD = PC8;
		3'b011: WD = MDM_RD;
        3'b100: WD = c0_RD;
		default: WD = ALUResult;
		endcase
    end
endmodule
module ALUBmux(
    input ALUBCtrl,
    input [31:0] RD2,
    input [31:0] EXTData,
    output [31:0] ALUB
    );
    assign ALUB = (ALUBCtrl)? EXTData:RD2;
endmodule
module nPCmux(
	 input IntReq,
    input [2:0] JumpCtrl,
    input [31:0] adder, Nadder, splitter, RD1, EPC,
    output reg [31:0] nPC
    );  
    always @(*) begin
        if(IntReq)
        nPC = 32'h4180;
        else begin
            case(JumpCtrl)
            3'b000: nPC = adder;
            3'b001: nPC = Nadder;
            3'b010: nPC = splitter;
            3'b011: nPC = RD1;
            3'b100: nPC = 32'h4180;
            3'b101: nPC = EPC + 4;
		    endcase
        end
        
    end
endmodule
//////////////////////////////////////////////////////////////////////////////////
//hazard solver mux
module ALUAformux(
	input [2:0] ALUAfor,
	input [31:0] RD1_EX, ALUResult_MEM, WD_WB, PC8_MEM, MDM_RD_MEM,
   output reg [31:0] ALUA
	);
    always @(*) begin
        case(ALUAfor)
            3'b001: ALUA = ALUResult_MEM;
            3'b010: ALUA = WD_WB;
            3'b101: ALUA = PC8_MEM;
				3'b011: ALUA = MDM_RD_MEM;
            default: ALUA = RD1_EX;
        endcase
    end
endmodule

module ALUBformux (
    input [2:0] ALUBfor,
    input [31:0] RD2_EX, ALUResult_MEM, WD_WB, PC8_MEM, MDM_RD_MEM,
    output reg [31:0] ALUB
	);
    always @(*) begin
        case(ALUBfor)
				3'b001: ALUB = ALUResult_MEM;
				3'b010: ALUB = WD_WB;
            3'b101: ALUB = PC8_MEM;
				3'b011: ALUB = MDM_RD_MEM;
				default: ALUB = RD2_EX;
		endcase
    end
endmodule

module DM_WDformux (
    input [2:0] DM_WDfor,
    input [31:0] RD2_MEM, WD_WB,
    output reg [31:0] DM_WD
	);
	 always @(*) begin
		case(DM_WDfor)
			3'b010: DM_WD = WD_WB;
			default: DM_WD = RD2_MEM;
		endcase
	 end
endmodule

module CMPAformux(
	input [2:0] CMPAfor,
	input [31:0] RD1, ALUResult_MEM, WD_WB, PC8_EX, PC8_MEM, PC8_WB, MDM_RD_MEM,
   output reg [31:0] CMPA
	);
    always @(*) begin
        case(CMPAfor)
            3'b001: CMPA = ALUResult_MEM;
            //3'b010: CMPA = WD_WB;
            3'b100: CMPA = PC8_EX;
            3'b101: CMPA = PC8_MEM;
				3'b110: CMPA = PC8_WB;
				3'b011: CMPA = MDM_RD_MEM;
            default: CMPA = RD1;
        endcase
    end
endmodule

module CMPBformux (
    input [2:0] CMPBfor,
    input [31:0] RD2, ALUResult_MEM, WD_WB, PC8_EX, PC8_MEM, PC8_WB, MDM_RD_MEM,
    output reg [31:0] CMPB
	);
    always @(*) begin
        case(CMPBfor)
				3'b001: CMPB = ALUResult_MEM;
				//3'b010: CMPB = WD_WB;
            3'b100: CMPB = PC8_EX;
            3'b101: CMPB = PC8_MEM;
				3'b110: CMPB = PC8_WB;
				3'b011: CMPB = MDM_RD_MEM;
				default: CMPB = RD2;
		  endcase
    end
endmodule
module Raformux (
    input [2:0] Rafor,
    input [31:0] RD1, ALUResult_MEM, WD_WB, PC8_EX, PC8_MEM, PC8_WB, MDM_RD_MEM,
    output reg [31:0] ra
	);
    always @(*) begin
        case(Rafor)
        3'b001: ra = ALUResult_MEM;
        //3'b010: ra = WD_WB;
        3'b100: ra = PC8_EX;
        3'b101: ra = PC8_MEM;
		  3'b110: ra = PC8_WB;
		  3'b011: ra = MDM_RD_MEM;
        default: ra = RD1;
        endcase
    end
endmodule
/*module RD2formux(
    input [2:0] RD2for,
    input [31:0] RD2_EX,
    input [31:0] RD2_MEM,
    input [31:0] WD_WB,
	 input [31:0] PC8_MEM,
	 input [31:0] MDM_RD_MEM,
    output reg [31:0] RD2
    );
    always @(*) begin
        case(RD2for)
            3'b001: RD2 = RD2_MEM;
            3'b010: RD2 = WD_WB;
				3'b101: RD2 = PC8_MEM;
				3'b011: RD2 = MDM_RD_MEM;
            default: RD2 = RD2_EX;
        endcase
    end
endmodule*/