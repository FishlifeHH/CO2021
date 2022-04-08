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
    input lb,
    input lbu,
    input lh,
    input lhu,
    input lw,
    input sb,
    input sh,
    input sw,
    input add_instr, 
    input addu,
    input sub_instr,
    input subu,
    input sll,
    input srl,
    input sra, 
    input sllv,
    input srlv,
    input srav,
	 input and_instr,
	 input or_instr,
	 input xor_instr,
	 input nor_instr,
    input addi,
	input addiu,
    input andi,
    input ori,
    input xori,
    input lui,
    input slt,
    input slti,
    input sltiu,
    input sltu,
    input beq,
	input bne,
    input blez,
    input bgtz,
    input bltz,
    input bgez,
    input j,
    input jal,
    input jalr,
    input jr,
    input equal,
	input smaller,
	input larger,
    input mult,
    input multu,
    input div, 
    input divu,
    input mfhi,
    input mflo,
    input mthi,
    input mtlo,
	 input madd,
	 //input ,
	 //input ,
    output reg [1:0] WDCtrl,
    output reg [4:0] ALUCtrl,
    output reg ALUBCtrl,
    output reg [1:0] DM_WE,
    output reg [1:0] JumpCtrl,
    output reg GRFWE,
    output reg EXTCtrl,
	output reg [2:0] DMEXTCtrl,
    output reg [2:0] MDCCtrl,
    output reg [1:0] MDM_RE,
    output reg [1:0] MDM_WE,
    output reg start
    );
    localparam adder = 2'b00, Nadder = 2'b01, splitter = 2'b10, RD1 = 2'b11;
	 // jumpCtrl 
	 //00:adder
	 //01:Nadder
	 //10:splitter
	 //11:RD1
	 
	 
    localparam ALU = 2'b00, DM = 2'b01, PC8 = 2'b10, MDM = 2'b11;
	 //WDCtrl
	 //00:ALU
	 //01:DM
	 //10:PC8
	 //11:MDM
    localparam add = 5'b00000, sub = 5'b00001, OR = 5'b00010, shift16 = 5'b00011, shiftL = 5'b00100, shiftR = 5'b00101, shiftLV = 5'b00110, shiftRV = 5'b00111, shiftRA = 5'b01000, shiftRAV = 5'b01001, AND = 5'b01010, XOR = 5'b01011, NOR = 5'b01100, set = 5'b01101, setU = 5'b01110;
	 //ALUCtrl
	 //0000:add
	 //0001:sub
	 //0010:or
	 //0011:<<16
	 //0100:<<
     //0101:>>
     //0110:<<V
     //0111:>>V
     //1000:>>>
     //1001:>>>V
	  //1010:and
	  //1011:xor
	  //1100:nor
      //1101:set
      //1110:set unsigned
    localparam RD2 = 1'b0, EXT = 1'b1;
	 //ALUBCtrl
	 //0:RD2
	 //1:EXT
    localparam zero = 1'b0, sign = 1'b1;
	 //EXTCtrl
	 //0:zero
	 //1:sign
    localparam none = 2'b00, word = 2'b01, half = 2'b10, byt = 2'b11;
    //DM_WE
    //00:none
    //01:word
    //10:half
    //11:byte
	localparam W = 3'b000, BU = 3'b001, BS = 3'b010, HU = 3'b011, HS = 3'b100;
    //DMEXTCtrl
    //000:W
    //001:byte unsigned
    //010:byte signed
    //011:half unsigned
    //100:half signed
    localparam ms = 3'b000, mu = 3'b001, ds = 3'b010, du = 3'b011, muladd = 3'b100;
    //MDCCtrl
    //00:multiply signed
    //01:multiply unsigned
    //10:divide signed
    //11:divide unsigned
    localparam hi = 2'b01, lo = 2'b10; 
    //MDM_RE, MDM_WE
    //01:hi
    //10:lo
	always @* begin
        if(addu | add_instr | subu | sub_instr | sll | srl | sra | sllv | srlv | srav | and_instr | or_instr | xor_instr | nor_instr | slt | sltu) begin
            WDCtrl = ALU;
            ALUBCtrl = RD2;
            DM_WE = none;
            JumpCtrl = adder;
            GRFWE = 1'b1;
            EXTCtrl = 1'b0;
			DMEXTCtrl = 3'b0;
            MDCCtrl = 3'b0;
            MDM_RE = 2'b0;
            MDM_WE = 2'b0;
            start = 1'b0;
            if (addu | add_instr)
                ALUCtrl = add;
            else if(subu | sub_instr)
                ALUCtrl = sub;
            else if(sll)
                ALUCtrl = shiftL;
            else if(srl)
                ALUCtrl = shiftR;
            else if(sllv)
                ALUCtrl = shiftLV;
            else if(srlv)
                ALUCtrl = shiftRV;
            else if(sra)
                ALUCtrl = shiftRA;
            else if(srav)
                ALUCtrl = shiftRAV;
            else if(and_instr)
                ALUCtrl = AND;
			else if(or_instr)
				ALUCtrl = OR;
			else if(xor_instr)
				ALUCtrl = XOR;
			else if(nor_instr)
				ALUCtrl = NOR;
			else if(slt)
				ALUCtrl = set;
            else if(sltu)
                ALUCtrl = setU;
            else
                ALUCtrl = 5'b0;
        end
        else if(andi | ori | xori | lui | addi | addiu | slti | sltiu) begin
            WDCtrl = ALU;
            ALUBCtrl = EXT;
            DM_WE = none;
            JumpCtrl = adder;
            GRFWE = 1'b1;
			DMEXTCtrl = 3'b0;
            MDCCtrl = 3'b0;
            MDM_RE = 2'b0;
            MDM_WE = 2'b0;
            start = 1'b0;
            if (addi | addiu | slti | sltiu) begin
                ALUCtrl = (addi | addiu)? add:(slti)? set:(sltiu)? setU:5'b0;
                EXTCtrl = sign;
            end
            else begin
                EXTCtrl = zero;
                ALUCtrl = (ori)? OR:(lui)? shift16:(andi)? AND:(xori)? XOR:5'b0?;
            end
        end
        else if(lb | lbu | lh | lhu | lw) begin
            WDCtrl = DM;
            ALUCtrl = add;
            ALUBCtrl = EXT;
            DM_WE = none;
            JumpCtrl = adder;
            GRFWE = 1'b1;
            EXTCtrl = sign;
            MDCCtrl = 3'b0;
            MDM_RE = 2'b0;
            MDM_WE = 2'b0;
            start = 1'b0;
            if(lb)
			    DMEXTCtrl = BS;
            else if(lbu)
                DMEXTCtrl = BU;
            else if(lh)
                DMEXTCtrl = HS;
            else if(lhu)
                DMEXTCtrl = HU;
            else
                DMEXTCtrl = W;
        end
        else if(sb | sh | sw) begin
            WDCtrl = 2'b00;
            ALUCtrl = add;
            ALUBCtrl = EXT;
            JumpCtrl = adder;
            GRFWE = 1'b0;
            EXTCtrl = sign;
			DMEXTCtrl = 3'b0;
            MDCCtrl = 3'b0;
            MDM_RE = 2'b0;
            MDM_WE = 2'b0;
            start = 1'b0;
            if(sb)
                DM_WE = byt;
            else if(sh)
                DM_WE = half;
            else
                DM_WE = word;
        end
        else if(beq | bne | blez | bgtz | bltz | bgez) begin
            WDCtrl = 2'b00;
            ALUCtrl = 5'b0;
            ALUBCtrl = 1'b0;
            DM_WE = none;
            GRFWE = 1'b0;
            EXTCtrl = sign;
			DMEXTCtrl = 3'b0;
			JumpCtrl[1] = 1'b0;
			JumpCtrl[0] = (beq)? equal:(bne)? ~equal:(blez)? equal | smaller: (bgtz)? larger: (bltz)? smaller:(bgez)? larger | equal:1'b0;
            MDCCtrl = 3'b0;
            MDM_RE = 2'b0;
            MDM_WE = 2'b0;
            start = 1'b0;
        end
        else if(jal) begin
            WDCtrl = PC8;
            ALUCtrl = 5'b0;
            ALUBCtrl = 1'b0;
            DM_WE = none;
            JumpCtrl = splitter;
            GRFWE = 1'b1;
            EXTCtrl = 1'b0;
			DMEXTCtrl = 3'b0;
            MDCCtrl = 3'b0;
            MDM_RE = 2'b0;
            MDM_WE = 2'b0;
            start = 1'b0;
        end
        else if(jr) begin
            WDCtrl = 2'b00;
            ALUCtrl = 5'b0;
            ALUBCtrl = 1'b0;
            DM_WE = none;
            JumpCtrl = RD1;
            GRFWE = 1'b0;
            EXTCtrl = 1'b0;
			DMEXTCtrl = 3'b0;
            MDCCtrl = 3'b0;
            MDM_RE = 2'b0;
            MDM_WE = 2'b0;
            start = 1'b0;
        end
		else if(j) begin
			WDCtrl = 2'b00;
			ALUCtrl = 5'b0;
			ALUBCtrl = 1'b0;
			DM_WE = none;
			JumpCtrl = splitter;
			GRFWE = 1'b0;
			EXTCtrl = 1'b0;
			DMEXTCtrl = 3'b0;
            MDCCtrl = 3'b0;
            MDM_RE = 2'b0;
            MDM_WE = 2'b0;
            start = 1'b0;
		end
        else if(jalr) begin
            WDCtrl = PC8;
            ALUCtrl = 5'b0;
            ALUBCtrl = 1'b0;
            DM_WE = none;
            JumpCtrl = RD1;
            GRFWE = 1'b1;
            EXTCtrl = 1'b0;
			DMEXTCtrl = 3'b0;
            MDCCtrl = 3'b0;
            MDM_RE = 2'b0;
            MDM_WE = 2'b0;
            start = 1'b0;
        end
        else if(mult | multu | div | divu | madd) begin
            WDCtrl = 2'b0;
            ALUCtrl = 5'b0;
            ALUBCtrl = 1'b0;
            DM_WE = none;
            JumpCtrl = adder;
            GRFWE = 1'b0;
            EXTCtrl = 1'b0;
			DMEXTCtrl = 3'b0;
            MDM_RE = 2'b0;
            MDM_WE = 2'b0;
            start = 1'b1;
            MDCCtrl = (mult)? ms:(multu)? mu:(div)? ds:(divu)? du:(madd)? muladd:3'b0;
        end
        else if(mfhi | mflo) begin
            WDCtrl = MDM;
            ALUCtrl = 5'b0;
            ALUBCtrl = 1'b0;
            DM_WE = none;
            JumpCtrl = adder;
            GRFWE = 1'b1;
            EXTCtrl = 1'b0;
			DMEXTCtrl = 3'b0;
            MDCCtrl = 3'b0;
            MDM_RE = (mfhi)? hi:(mflo)? lo:2'b0;
            MDM_WE = 2'b0;
            start = 1'b0;
        end
        else if(mthi | mtlo) begin
            WDCtrl = 2'b0;
            ALUCtrl = 5'b0;
            ALUBCtrl = 1'b0;
            DM_WE = none;
            JumpCtrl = adder;
            GRFWE = 1'b0;
            EXTCtrl = 1'b0;
			DMEXTCtrl = 3'b0;
            MDCCtrl = 3'b0;
            MDM_RE = 2'b0;
            MDM_WE = (mthi)? hi:(mtlo)? lo:2'b0;
            start = 1'b0;
        end
		  /*else if( )begin
            WDCtrl = 2'b00;
            ALUCtrl = 5'b0;
            ALUBCtrl = 1'b0;
            DM_WE = none;
            JumpCtrl = adder;
            GRFWE = 1'b0;
            EXTCtrl = 1'b0;
			   DMEXTCtrl = 3'b0;
			   MDCCtrl = 3'b0;
            MDM_RE = 2'b0;
            MDM_WE = 2'b0;
            start = 1'b0;
        end*/
        else begin
            WDCtrl = 2'b00;
            ALUCtrl = 5'b0;
            ALUBCtrl = 1'b0;
            DM_WE = none;
            JumpCtrl = adder;
            GRFWE = 1'b0;
            EXTCtrl = 1'b0;
			DMEXTCtrl = 3'b0;
			MDCCtrl = 3'b0;
            MDM_RE = 2'b0;
            MDM_WE = 2'b0;
            start = 1'b0;
        end
    end
endmodule