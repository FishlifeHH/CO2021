`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:43:47 11/11/2021 
// Design Name: 
// Module Name:    signal_generator 
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
module signal_generator(
    input addu,
    input subu,
    input ori,
    input lw,
    input sw,
    input beq,
    input lui,
    input jal,
    input jr,
    input ALUzero,
    output reg [1:0] WACtrl,
    output reg [1:0] WDCtrl,
    output reg [1:0] ALUCtrl,
    output reg ALUBCtrl,
    output reg DM_WE,
    output reg DM_RE,
    output reg [1:0] JumpCtrl,
    output reg GRFWE,
    output reg EXTCtrl
    );
    localparam adder = 2'b00, Nadder = 2'b01, splitter = 2'b10, RD1 = 2'b11;
	 // jumpCtrl 
	 //00:adder
	 //01:Nadder
	 //10:aplitter
	 //11:RD1
	 
    localparam Instr20_16 = 2'b00, Instr15_11 = 2'b01, ra = 2'b10;
	 //WACtrl
	 //00:Instr[20:16]
	 //01:Instr[15:11]
	 //10:31($ra)
	 
    localparam ALU = 2'b00, DM = 2'b01, PC4 = 2'b10;
	 //WDCtrl
	 //00:ALU
	 //01:DM
	 //10:PC4
	 
    localparam add = 2'b00, sub = 2'b01, OR = 2'b10, shift16 = 2'b11;
	 //ALUCtrl
	 //00:add
	 //01:sub
	 //10:or
	 //11:<<16
	 
    localparam RD2 = 1'b0, EXT = 1'b1;
	 //ALUBCtrl
	 //0:RD2
	 //1:EXT
    localparam zero = 1'b0, sign = 1'b1;
	 //EXTCtrl
	 //0:zero
	 //1:sign
	always @* begin
        if(addu) begin
            WACtrl = Instr15_11;
            WDCtrl = ALU;
            ALUCtrl = add;
            ALUBCtrl = RD2;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = adder;
            GRFWE = 1'b1;
            EXTCtrl = 1'b0;
        end
        else if(subu) begin
            WACtrl = Instr15_11;
            WDCtrl = ALU;
            ALUCtrl = sub;
            ALUBCtrl = RD2;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = adder;
            GRFWE = 1'b1;
            EXTCtrl = 1'b0;
        end
        else if(ori) begin
            WACtrl = Instr20_16;
            WDCtrl = ALU;
            ALUCtrl = OR;
            ALUBCtrl = EXT;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = adder;
            GRFWE = 1'b1;
            EXTCtrl = zero;
        end
        else if(lw) begin
            WACtrl = Instr20_16;
            WDCtrl = DM;
            ALUCtrl = add;
            ALUBCtrl = EXT;
            DM_WE = 1'b0;
            DM_RE = 1'b1;
            JumpCtrl = adder;
            GRFWE = 1'b1;
            EXTCtrl = sign;
        end
        else if(sw) begin
            WACtrl = 2'b00;
            WDCtrl = 2'b00;
            ALUCtrl = add;
            ALUBCtrl = EXT;
            DM_WE = 1'b1;
            DM_RE = 1'b0;
            JumpCtrl = adder;
            GRFWE = 1'b0;
            EXTCtrl = sign;
        end
        else if(beq) begin
            WACtrl = 2'b00;
            WDCtrl = 2'b00;
            ALUCtrl = sub;
            ALUBCtrl = RD2;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = {1'b0, ALUzero};
            GRFWE = 1'b0;
            EXTCtrl = sign;
        end
        else if(lui) begin
            WACtrl = Instr20_16;
            WDCtrl = ALU;
            ALUCtrl = shift16;
            ALUBCtrl = EXT;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = adder;
            GRFWE = 1'b1;
            EXTCtrl = zero;
        end
        else if(jal) begin
            WACtrl = ra;
            WDCtrl = PC4;
            ALUCtrl = 2'b00;
            ALUBCtrl = 1'b0;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = splitter;
            GRFWE = 1'b1;
            EXTCtrl = 1'b0;
        end
        else if(jr) begin
            WACtrl = 2'b00;
            WDCtrl = 1'b0;
            ALUCtrl = 2'b00;
            ALUBCtrl = 1'b0;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = RD1;
            GRFWE = 1'b0;
            EXTCtrl = 1'b0;
        end
        else begin
            WACtrl = 2'b00;
            WDCtrl = 1'b0;
            ALUCtrl = 2'b00;
            ALUBCtrl = 1'b0;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = adder;
            GRFWE = 1'b0;
            EXTCtrl = 1'b0;
        end
    end
endmodule