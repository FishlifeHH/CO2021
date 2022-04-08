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
module WAmux(
    input [1:0] WACtrl,
    input [4:0] Instr20_16,
    input [4:0] Instr15_11,
	output reg [4:0] WA
    );
    always @(*) begin
        case(WACtrl)
        2'b00: WA = Instr20_16;
        2'b01: WA = Instr15_11;
        2'b10: WA = 31;
        default: WA = 0;
		  endcase
    end
endmodule
module WDmux(
    input [1:0] WDCtrl,
    input [31:0] ALUResult,
    input [31:0] ReadData,
    input [31:0] PC4,
    output reg [31:0] WD
    );
    always @(*) begin
        case(WDCtrl)
        2'b00: WD = ALUResult;
        2'b01: WD = ReadData;
        2'b10: WD = PC4;
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
    input [1:0] JumpCtrl,
    input [31:0] adder, Nadder, splitter, RD1,
    output reg [31:0] nPC
    );  
    always @(*) begin
        case(JumpCtrl)
        2'b00: nPC = adder;
        2'b01: nPC = Nadder;
        2'b10: nPC = splitter;
        2'b11: nPC = RD1;
		  endcase
    end
endmodule
