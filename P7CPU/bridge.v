`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:00:38 12/16/2021 
// Design Name: 
// Module Name:    bridge 
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
module bridge(
    input [31:0] Dev_add,
    input IRQ_timer0,
    input IRQ_timer1,
    input [3:0] byteen,
    input [31:0] DM_RD,
    input [31:0] timer0_RD,
    input [31:0] timer1_RD,
    input [31:0] Dev_WD,
    //input interrupt,
    input DevReq,
	 input IntReq,
	 //input temp_Int,
    //input eret_MEM,
    output [3:0] DM_byteen,
    output WE_timer0,
    output WE_timer1,
    output IRQ_timer0_out,
    output IRQ_timer1_out,
    output [31:0] Dev_RD,
    output [31:0] Dev_add_fixed,
    output [31:0] Dev_WD_out
    );
    wire DM, timer0, timer1;
    assign DM = Dev_add < 32'h3000 & ~IntReq;//(Dev_add == 32'h7f20 & interrupt);
    assign timer0 = Dev_add >= 32'h7f00 & Dev_add <= 32'h7f0b & ~IntReq;
    assign timer1 = Dev_add >= 32'h7f10 & Dev_add <= 32'h7f1b & ~IntReq;
    assign DM_byteen ={4{DevReq}} |{4{DM}} & byteen;
    assign Dev_RD = (DM)? DM_RD:(timer0)? timer0_RD:(timer1)? timer1_RD:32'hbbbbbbbb;
    assign Dev_add_fixed = (DevReq)? 32'h7f20:{Dev_add[31:2], 2'b0};
    assign IRQ_timer0_out = IRQ_timer0;
    assign IRQ_timer1_out = IRQ_timer1;
    assign WE_timer0 = timer0 & &byteen;
    assign WE_timer1 = timer1 & &byteen;
	 assign Dev_WD_out = Dev_WD;
endmodule
