`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:39:06 11/25/2021 
// Design Name: 
// Module Name:    DMfdata2mdata 
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
//save
module DMfdata2mdata(
    input [31:0] DMfordata,
    input [3:0] byteen,
    output reg [31:0] DM_WD
    );
    localparam word = 4'b1111, highhalf = 4'b1100, lowhalf = 4'b0011, byte0 = 4'b0001, byte1 = 4'b0010, byte2 = 4'b0100, byte3 = 4'b1000;
    always @(*) begin
        case(byteen)
            word: DM_WD = DMfordata;
            lowhalf: DM_WD = {{16'b0}, DMfordata[15:0]}; 
            highhalf: DM_WD = {DMfordata[15:0], {16'b0}};
            byte0: DM_WD = {{24'b0}, DMfordata[7:0]};
            byte1: DM_WD = {{16'b0}, DMfordata[7:0], {8'b0}};
            byte2: DM_WD = {{8'b0}, DMfordata[7:0], {16'b0}};
            byte3: DM_WD = {DMfordata[7:0], {24'b0}};
            default: DM_WD = 32'hffffffff;
        endcase
    end
endmodule