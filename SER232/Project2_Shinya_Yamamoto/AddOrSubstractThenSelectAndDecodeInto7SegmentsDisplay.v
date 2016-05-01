`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:31:14 04/08/2016 
// Design Name: 
// Module Name:    AddOrSubstractThenSelectAndDecodeInto7SegmentsDisplay 
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
module AddOrSubstractThenSelectAndDecodeInto7SegmentsDisplay(
    input [3:0]A, //4bits
	 input [3:0]B, //4bits
	 input S,
	 output reg [6:0]Display, //7bits
	 output reg [3:0] resultOfAddition,
	 output reg overflowOfAddition,
	 output reg [3:0] resultOfSubtraction,
	 output reg overflowOfSubtraction,
	 output reg [3:0] result
	);
	 
//S=1 => add, S=0 => substract

always @ (A, B) begin
{overflowOfAddition, resultOfAddition} = A + B;
{overflowOfSubtraction, resultOfSubtraction} = A - B;
end

always @ (A, B, S) begin
if(S) 
	assign result = A + B;
else 
	assign result = A - B;
end 

always @(result) begin
	case(result)
		4'b0000 : Display = 7'b1111110;
		4'b0001 : Display = 7'b0110000;
		4'b0010 : Display = 7'b1101101;
		4'b0011 : Display = 7'b1111001;
		4'b0100 : Display = 7'b0110011;
		4'b0101 : Display = 7'b1011011;
		4'b0110 : Display = 7'b1011111;
		4'b0111 : Display = 7'b1110000;
		4'b1000 : Display = 7'b1111111;
		4'b1001 : Display = 7'b1111011;
		default : Display = 7'b0011101;
	endcase
end


endmodule
