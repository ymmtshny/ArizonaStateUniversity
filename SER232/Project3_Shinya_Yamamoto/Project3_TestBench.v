`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:45:56 04/22/2016
// Design Name:   calculator
// Module Name:   C:/Xilinx/14.7/ISE_DS/ISE/Shinya_Yamamoto/Project3_Shinya_Yamamoto/Project3_TestBench.v
// Project Name:  Project3_Shinya_Yamamoto
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: calculator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Project3_TestBench;

	// Inputs
	reg [15:0] in1;
	reg [15:0] in2;
	reg [3:0] opCode;

	// Outputs
	wire [15:0] result;
	wire overflow;

	// Instantiate the Unit Under Test (UUT)
	calculator uut (
		.in1(in1), 
		.in2(in2), 
		.opCode(opCode), 
		.result(result), 
		.overflow(overflow)
	);

	initial begin
		$monitor("opCode(%d), in1(%d), in2(%d), result(%d), overflow(%b)", opCode, in1, in2, result, overflow);
		// AND
		in1 = 16'b_0000_1111_1111_1111; in2 = 16'b_0000_1010_1100_0011; opCode = 4'b0100; #100;
		
      // OR
		in1 = 16'b_0000_0101_0101_0101; in2 = 16'b_0000_1010_1010_1010; opCode = 4'b0110; #100;
		
		// XOR
		in1 = 16'b_0000_1111_0000_1111; in2 = 16'b_0000_1010_1010_1010; opCode = 4'b0101; #100;
		
		// One's complement of in1
		in1 = 16'b_1010_1010_1010_1010; in2 = 16'b_0000_0000_0000_0000; opCode = 4'b0111; #100;
		
		//Increment 
		in1 = 16'b_0111_1111_1111_0000; in2 = 16'b_0000_0000_0000_0000; opCode = 4'b1000; #100;
		
		//Inceremnt overflow
		in1 = 16'b_0111_1111_1111_1111; in2 = 16'b_0000_0000_0000_0000; opCode = 4'b1000; #100;
		
		//Decrement
		in1 = 16'b_0000_0000_0000_0000; in2 = 16'b_0000_0000_0000_0000; opCode = 4'b1001; #100;
		
		//Derement overflow
		in1 = 16'b_1000_0000_0000_0000; in2 = 16'b_0000_0000_0000_0000; opCode = 4'b1001; #100;
		
		//1011001100110101 -19659
		//0011001100110010  13106
		
		///multiplication
		in1 = 16'b_0000_0000_0000_0001; in2 = 16'b_0000_0000_0000_0000; opCode = 4'b0010; #100;
		in1 = 16'b_0000_0000_1111_0000; in2 = 16'b_0000_0000_0000_0000; opCode = 4'b0010; #100;
		in1 = 16'b_1000_0000_0000_0000; in2 = 16'b_0000_0000_0000_0000; opCode = 4'b0010; #100;//overflow too negative
		in1 = 16'b_0111_1111_1111_1111; in2 = 16'b_0000_0000_0000_0000; opCode = 4'b0010; #100;//overflow too positive
		
		//addition
		//overflow too positive
		in1 = 16'b_0111_1111_1111_1111; in2 = 16'b_0000_0000_0000_0010; opCode = 4'b0000; #100;
		//overflow too negative
		in1 = 16'b_1011_0011_0011_0101; in2 = 16'b_1011_0011_0011_0101; opCode = 4'b0000; #100;

		//in1 > 0, in2 > 0
		in1 = 16'b_0011_0011_0011_0010; in2 = 16'b_0000_0000_0100_0000; opCode = 4'b0000; #100;
		//in1 > 0, in2 < 0
		in1 = 16'b_0011_0011_0011_0010; in2 = 16'b_1011_0011_0011_0101; opCode = 4'b0000; #100;
		//in1 < 0, in2 > 0
		in1 = 16'b_0000_0000_0000_0000; in2 = 16'b_0011_0011_0011_0010; opCode = 4'b0000; #100;
		//in1 < 0, in2 < 0
		in1 = 16'b_1111_0000_0000_0001; in2 = 16'b_1111_0000_0000_0001; opCode = 4'b0000; #100;
		
		//subtraction
		//overflow too positive
		in1 = 16'b_0111_1111_0000_1111; in2 = 16'b_1011_0011_0011_0101; opCode = 4'b0001; #100;
		//overflow too negative
		in1 = 16'b_1011_0011_0011_0101; in2 = 16'b_0111_1111_0000_1111; opCode = 4'b0001;; #100;
		
		//in1 > 0, in2 > 0
		in1 = 16'b_0111_1111_0000_1111; in2 = 16'b_0111_1111_0000_1111; opCode = 4'b0001; #100;
		//in1 > 0, in2 < 0
		in1 = 16'b_0000_0000_0000_0001; in2 = 16'b_1011_0011_0011_0101; opCode = 4'b0001; #100;
		//in1 < 0, in2 > 0
		in1 = 16'b_1011_0011_0011_0101; in2 = 16'b_0000_0000_0000_0001; opCode = 4'b0001; #100;
		//in1 < 0, in2 < 0
		in1 = 16'b_1011_0011_0011_0101; in2 = 16'b_1011_0011_0011_0101; opCode = 4'b0001; #100;
		
	end
      
endmodule

