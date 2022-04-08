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
	 input j,
    input equal, larger, smaller,
    output reg [1:0] WDCtrl,
    output reg [2:0] ALUCtrl,
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
	 
	 
    localparam ALU = 2'b00, DM = 2'b01, PC8 = 2'b10;
	 //WDCtrl
	 //00:ALU
	 //01:DM
	 //10:PC8
	 
    localparam add = 3'b000, sub = 3'b001, OR = 3'b010, shift16 = 3'b011;
	 //ALUCtrl
	 //000:add
	 //001:sub
	 //010:or
	 //011:<<16
	 
    localparam RD2 = 1'b0, EXT = 1'b1;
	 //ALUBCtrl
	 //0:RD2
	 //1:EXT
    localparam zero = 1'b0, sign = 1'b1;
	 //EXTCtrl
	 //0:zero
	 //1:sign
	always @* begin
        if(addu | subu) begin
            WDCtrl = ALU;
            ALUBCtrl = RD2;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = adder;
            GRFWE = 1'b1;
            EXTCtrl = 1'b0;
            ALUCtrl = (addu)? add:(subu)? sub:2'b0;
        end
        else if(ori | lui) begin
            WDCtrl = ALU;
            ALUBCtrl = EXT;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = adder;
            GRFWE = 1'b1;
            EXTCtrl = zero;
            ALUCtrl = (ori)? OR:(lui)? shift16:2'b0;
        end
        else if(lw) begin
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
            WDCtrl = 2'b00;
            ALUCtrl = sub;
            ALUBCtrl = RD2;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = {1'b0, equal};
            GRFWE = 1'b0;
            EXTCtrl = sign;
        end
        else if(jal) begin
            WDCtrl = PC8;
            ALUCtrl = 3'b0;
            ALUBCtrl = 1'b0;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = splitter;
            GRFWE = 1'b1;
            EXTCtrl = 1'b0;
        end
        else if(jr) begin
            WDCtrl = 2'b00;
            ALUCtrl = 3'b0;
            ALUBCtrl = 1'b0;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = RD1;
            GRFWE = 1'b0;
            EXTCtrl = 1'b0;
        end
		  else if(j) begin
				WDCtrl = 2'b00;
				ALUCtrl = 3'b0;
				ALUBCtrl = 1'b0;
				DM_WE = 1'b0;
				DM_RE = 1'b0;
				JumpCtrl = splitter;
				GRFWE = 1'b0;
				EXTCtrl = 1'b0;
		  end
		  /*
		  else if( ) begin
            WDCtrl = 2'b00;
            ALUCtrl = 3'b0;
            ALUBCtrl = 1'b0;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = adder;
            GRFWE = 1'b0;
            EXTCtrl = 1'b0;
        end
		  else if( ) begin
            WDCtrl = 2'b00;
            ALUCtrl = 3'b0;
            ALUBCtrl = 1'b0;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = adder;
            GRFWE = 1'b0;
            EXTCtrl = 1'b0;
        end
		  else if( ) begin
            WDCtrl = 2'b00;
            ALUCtrl = 3'b0;
            ALUBCtrl = 1'b0;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = adder;
            GRFWE = 1'b0;
            EXTCtrl = 1'b0;
        end
		  */
        else begin
            WDCtrl = 2'b00;
            ALUCtrl = 3'b0;
            ALUBCtrl = 1'b0;
            DM_WE = 1'b0;
            DM_RE = 1'b0;
            JumpCtrl = adder;
            GRFWE = 1'b0;
            EXTCtrl = 1'b0;
        end
    end
endmodule