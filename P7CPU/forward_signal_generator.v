`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:09:03 11/17/2021 
// Design Name: 
// Module Name:    forward_signal_generator 
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
module forward_signal_generator(
    input [4:0] RA1_ID,
    input [4:0] RA2_ID,
    input [4:0] RA1_EX,
    input [4:0] RA2_EX,
    input [4:0] RA2_MEM,
    input [1:0] Tnew_MEM,
    input [1:0] Tnew_WB,
    input [4:0] WA_EX,
    input [4:0] WA_MEM,
    input [4:0] WA_WB,
    input jal_EX,
    input jal_MEM,
    input muldiv_R_MEM,
    output reg [2:0] CMPAfor,
    output reg [2:0] CMPBfor,
    output reg [2:0] ALUAfor,
    output reg [2:0] ALUBfor,
    output reg [2:0] DM_WDfor,
    output reg [2:0] Rafor,
	 output reg [2:0] RD2for
    );
    localparam inival = 3'b000, ALUmem = 3'b001, wb = 3'b010, PC8_EX = 3'b100, PC8_MEM = 3'b101, RD2_MEM = 3'b001, MDMmem = 3'b011;
    //CMPA
    always @(*) begin
        if(RA1_ID == WA_EX && WA_EX != 0 && jal_EX)
        CMPAfor = PC8_EX;
        else if(RA1_ID == WA_MEM && WA_MEM != 0)
        CMPAfor = (jal_MEM)? PC8_MEM:(muldiv_R_MEM)? MDMmem:ALUmem;
        /*else if(RA1_ID == WA_WB && WA_WB != 0)
        CMPAfor = wb;*/
        else
        CMPAfor = inival;
    end

    //CMPB
    always @(*) begin
        if(RA2_ID == WA_EX && WA_EX != 0 && jal_EX)
        CMPBfor = PC8_EX;
        else if(RA2_ID == WA_MEM && WA_MEM != 0)
        CMPBfor = (jal_MEM)? PC8_MEM:(muldiv_R_MEM)? MDMmem:ALUmem;
        /*else if(RA2_ID == WA_WB && WA_WB != 0)
        CMPBfor = wb;*/
        else
        CMPBfor = inival;
    end

    //Ra
    always @(*) begin
        if(RA1_ID == WA_EX && WA_EX != 0 && jal_EX)
        Rafor = PC8_EX;
        else if(RA1_ID == WA_MEM && WA_MEM != 0)
        Rafor = (jal_MEM)? PC8_MEM:(muldiv_R_MEM)? MDMmem:ALUmem;
        /*else if(RA1_ID == WA_WB && WA_WB != 0)
        Rafor = wb;*/
        else
        Rafor = inival;
    end
    //ALUA
    always @(*) begin
        if(RA1_EX == WA_MEM && WA_MEM != 0)
        ALUAfor = (jal_MEM)? PC8_MEM:(muldiv_R_MEM)? MDMmem:ALUmem;
        else if(RA1_EX == WA_WB && WA_WB != 0)
        ALUAfor = wb;
        else
        ALUAfor = inival;
    end

    //ALUB
    always @(*) begin
        if(RA2_EX == WA_MEM && WA_MEM != 0)
        ALUBfor = (jal_MEM)? PC8_MEM:(muldiv_R_MEM)? MDMmem:ALUmem;
        else if(RA2_EX == WA_WB && WA_WB != 0)
        ALUBfor = wb;
        else
        ALUBfor = inival;
    end

    //DM_WD
    always @(*) begin
        if((RA2_MEM == WA_WB && WA_WB != 0))
        DM_WDfor = wb;
        else
        DM_WDfor = RD2_MEM;
    end
	 //RD2for
	 always @(*) begin
        if(RA2_EX == WA_MEM && WA_MEM != 0)
        RD2for = (jal_MEM)? PC8_MEM:(muldiv_R_MEM)? MDMmem:ALUmem;
        else if(RA2_EX == WA_WB && WA_WB != 0)
        RD2for = wb;
        else
        RD2for = inival;
    end
endmodule