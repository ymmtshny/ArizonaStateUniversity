`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:53:00 04/22/2016 
// Design Name: 
// Module Name:    calculator 
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
module calculator(
    input signed [15:0] in1,
    input signed [15:0] in2,
    input [3:0] opCode,
    output reg signed [15:0] result,
    output reg overflow
    );

//min and max detemines if overflow occured
// read p.200 - 203
// N bit regosters can store values from -2^(N-1) to 2^(N-1)-1
// min and max are 16 bits
integer min = -32768;//16'b1000000000000001; //-2^(16-1) = -32768
integer max =  32767;//16'b0111111111111111; //2^(16-1)-1 = 32767

always@(in1, in2, opCode)begin
	case(opCode)
		4'b0000 : begin 
						//Signed Addition
						result = in1 + in2;
						if(in1 + in2 > max) begin
							overflow = 1;
						end else if(in1 + in2 < min) begin
							overflow = 1;
						end else begin
							overflow = 0;
						end 
					 end 
		4'b0001 : begin
					//Signed Subtraction
					result = in1 - in2;
						if(in1 - in2 > max) begin
							overflow = 1;
						end else if(in1 - in2 < min) begin
							overflow = 1;
						end else begin
							overflow = 0;
						end
					 end
		4'b0010 : begin
						//Multiplication
						result = in1*5;
						if(in1*5 > max) begin
							overflow = 1;
						end else if(in1*5 < min) begin
							overflow = 1;
						end else begin
							overflow = 0;
						end 
					end
		4'b0011 :begin
						//divide in by 10
						//remainder is 0 => overflow is 0
						//remainder is not 0 => overflow is 1
						result = in1 / 10;
						if(in1 % 10 == 0) begin 
							overflow = 0;
						end else begin
							overflow = 1;
						end
					end
		4'b0100 :begin
						//bitwise and
						result = (in1 & in2);
						overflow = 0;
					end
		4'b0101 :begin
						//bitwise xor
						result = (in1 ^ in2);
						overflow = 0;
					end
		4'b0110 :begin
						//bitwise or
						result = (in1 | in2);
						overflow = 0;
					end
		4'b0111 :begin
						//one's complement of in1
						result = (~in1);
						overflow = 0;
					end
				
		4'b1000 :begin
						//increment in1 by 1
						result = in1 + 16'b1;
						if(in1 == max) begin
							overflow = 1;
						end else begin
							overflow = 0;
						end
					end
		4'b1001 :begin
						//decrement in1 by 1
						result = in1 - 16'b1;
						if(in1 == min) begin
							overflow = 1;
						end else begin
							overflow = 0;
						end
					end
		//More oprerations should be added here
	endcase
end

endmodule
