`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:12:26 04/14/2016 
// Design Name: 
// Module Name:    AddOrSubtractThenSelectAndDecodedInto7SegmentsDisplay 
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
module AddOrSubtractThenSelectAndDecodedInto7SegmentsDisplay(

    input [3:0]A, //4bits
	 input [3:0]B, //4bits
	 input S,
	 output reg [6:0]Display, //7bits
	 output reg [3:0] resultOfAddition,
	 output reg overflowOfAddition,
	 output reg [3:0] resultOfSubtraction,
	 output reg overflowOfSubtraction,
	 output reg [3:0] result,
	 output reg [4:0] extendedResult
	);
	 
always @ (A, B) begin
{overflowOfAddition, resultOfAddition} = A + B;
{overflowOfSubtraction, resultOfSubtraction} = A - B;
end

always @ (extendedResult, resultOfAddition, resultOfSubtraction) begin
if(S) 
	 extendedResult = {overflowOfAddition, resultOfAddition};
else 
	 extendedResult = {overflowOfSubtraction, resultOfSubtraction};
end 

always @(extendedResult) begin
	case(extendedResult)
		5'b00000 : Display = 7'b1111110; //0
		5'b00001 : Display = 7'b0110000; //1
		5'b00010 : Display = 7'b1101101; //2
		5'b00011 : Display = 7'b1111001; //3
		5'b00100 : Display = 7'b0110011; //4
		5'b00101 : Display = 7'b1011011; //5
		5'b00110 : Display = 7'b1011111; //6
		5'b00111 : Display = 7'b1110000; //7
		5'b01000 : Display = 7'b1111111; //8
		5'b01001 : Display = 7'b1111011; //9
		5'b01010 : Display = 7'b1110111; //A
		5'b01011 : Display = 7'b0011111; //b
		5'b01100 : Display = 7'b1001110; //C
		5'b01101 : Display = 7'b0111101; //d
		5'b01110 : Display = 7'b1001111; //E
		5'b01111 : Display = 7'b1000111; //F
		default : Display  = 7'b0011101; //o
	endcase
end

endmodule
