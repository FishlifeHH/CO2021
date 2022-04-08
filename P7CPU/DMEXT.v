`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:44:39 11/25/2021 
// Design Name: 
// Module Name:    DMEXT 
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
//load
module DMEXT(
    input [1:0] ad,
    input [31:0] Data,
    input [2:0] Op,
    output reg [31:0] EXTData
    );
    localparam byte0 = 2'b00, byte1 = 2'b01, byte2 = 2'b10, byte3 = 2'b11;
    localparam highhalf = 2'b10, lowhalf = 2'b00;
	always @(*) begin
        case(Op)
        3'b111: EXTData = Data;
        3'b001: begin
            case(ad)
                byte0: EXTData = {{24'b0}, Data[7:0]};
                byte1: EXTData = {{24'b0}, Data[15:8]};
                byte2: EXTData = {{24'b0}, Data[23:16]};
                byte3: EXTData = {{24'b0}, Data[31:24]};
            endcase
        end
        3'b010: begin
            case(ad)
                byte0: EXTData = {{24{Data[7]}}, Data[7:0]};
                byte1: EXTData = {{24{Data[15]}}, Data[15:8]};
                byte2: EXTData = {{24{Data[23]}}, Data[23:16]};
                byte3: EXTData = {{24{Data[31]}}, Data[31:24]};
            endcase
        end
        3'b011: begin
            case(ad)
                lowhalf: EXTData = {{16'b0}, Data[15:0]};
                highhalf: EXTData = {{16'b0}, Data[31:16]};
            endcase
        end
        3'b100: begin
            case(ad)
                lowhalf: EXTData = {{16{Data[15]}}, Data[15:0]};
                highhalf: EXTData = {{16{Data[31]}}, Data[31:16]};
            endcase
        end
		  default: EXTData = 32'hdddddddd;
		  endcase
    end
endmodule
