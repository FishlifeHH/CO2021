`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:43:45 11/25/2021 
// Design Name: 
// Module Name:    byteen_generator 
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
module byteen_generator(
    input [1:0] DM_WE,
    input [1:0] ad,
    output reg [3:0] byteen
    );
    localparam word = 4'b1111, highhalf = 4'b1100, lowhalf = 4'b0011, byte0 = 4'b0001, byte1 = 4'b0010, byte2 = 4'b0100, byte3 = 4'b1000;
    always @(*) begin
        case(DM_WE)
            2'b00: byteen = 4'b0;
            2'b01: byteen = word;
            2'b10: begin
                case(ad)
							2'b00: byteen = lowhalf;
							2'b10: byteen = highhalf;
							default: byteen = 4'b0011;
					 endcase
            end
            2'b11: begin
                case(ad)
                    2'b00: byteen = byte0;
                    2'b01: byteen = byte1;
                    2'b10: byteen = byte2;
                    2'b11: byteen = byte3;
                endcase
            end
        endcase
    end
    
endmodule