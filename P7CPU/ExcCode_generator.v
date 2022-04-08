`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:07:04 12/17/2021 
// Design Name: 
// Module Name:    ExcCode_generator 
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
module ExcCode_generator(
    input overflow,
    input RI,
    input PC_err,
    input [3:0] byteen,
    input [2:0] DMEXTCtrl,
    input [31:0] dev_add,
    //input handling,
    output [6:2] ExcCode
    );
    localparam W = 3'b111, BU = 3'b001, BS = 3'b010, HU = 3'b011, HS = 3'b100, noload = 3'b000;
    //DMEXTCtrl
    //000:Word
    //001:byte unsigned
    //010:byte signed
    //011:half unsigned
    //100:half signed
    localparam word = 4'b1111, highhalf = 4'b1100, lowhalf = 4'b0011, byte0 = 4'b0001, byte1 = 4'b0010, byte2 = 4'b0100, byte3 = 4'b1000;
    wire AdEL, AdES, Ov;
    wire outrange_load, outrange_save, noalign_load, noalign_save, optimer_load, optimer_save, add_ov_load, add_ov_save;
    assign outrange_load = (DMEXTCtrl != noload) & ((dev_add >= 32'h3000 & dev_add < 32'h7f00) | (dev_add > 32'h7f0b & dev_add < 32'h7f10) | (dev_add > 32'h7f1b));
    assign outrange_save = |byteen & ((dev_add >= 32'h3000 & dev_add < 32'h7f00) | (dev_add > 32'h7f0b & dev_add < 32'h7f10) | (dev_add > 32'h7f1b));
    assign noalign_load = (DMEXTCtrl == W & |(dev_add[1:0])) | ((DMEXTCtrl == HU | DMEXTCtrl == HS) & dev_add[0]);
    assign noalign_save = (byteen == word & |(dev_add[1:0])) | ((byteen == highhalf | byteen == lowhalf) & dev_add[0]);
    assign optimer_load = (DMEXTCtrl == BU | DMEXTCtrl == BS | DMEXTCtrl == HU | DMEXTCtrl == HS) & ((dev_add >= 32'h7f00 & dev_add <= 32'h7f0b) | (dev_add >= 32'h7f10 & dev_add <= 32'h7f1b));
    assign optimer_save = (((|byteen) & ~(&byteen)) & ((dev_add >= 32'h7f00 & dev_add <= 32'h7f0b) | (dev_add >= 32'h7f10 & dev_add <= 32'h7f1b))) | ((&byteen) & (dev_add == 32'h7f08 | dev_add == 32'h7f18));
    assign add_ov_load = overflow & (DMEXTCtrl != noload);
    assign add_ov_save = overflow & (|byteen);
    assign AdEL = outrange_load | noalign_load | optimer_load | add_ov_load;
    assign AdES = outrange_save | noalign_save | optimer_save | add_ov_save;
    assign Ov = overflow & ~(add_ov_load | add_ov_save);
    assign ExcCode = (PC_err)? 5'd4:(RI)? 5'd10:(AdEL)? 5'd4:(AdES)? 5'd5:(Ov)? 5'd12:5'd0;  
endmodule
