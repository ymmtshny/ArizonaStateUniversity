`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:34:56 04/15/2016
// Design Name:   AddOrSubtractThenSelectAndDecodedInto7SegmentsDisplay
// Module Name:   C:/Xilinx/14.7/ISE_DS/ISE/Shinya_Yamamoto/Project2_Shinya_Yamamoto/Project2_My_TestBench.v
// Project Name:  Project2_Shinya_Yamamoto
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: AddOrSubtractThenSelectAndDecodedInto7SegmentsDisplay
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Project2_My_TestBench;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg S;

	// Outputs
	wire [6:0] Display;
	wire [3:0] resultOfAddition;
	wire overflowOfAddition;
	wire [3:0] resultOfSubtraction;
	wire overflowOfSubtraction;
	wire [3:0] result;

	// Instantiate the Unit Under Test (UUT)
	AddOrSubtractThenSelectAndDecodedInto7SegmentsDisplay uut (
		.A(A), 
		.B(B), 
		.S(S), 
		.Display(Display), 
		.resultOfAddition(resultOfAddition), 
		.overflowOfAddition(overflowOfAddition), 
		.resultOfSubtraction(resultOfSubtraction), 
		.overflowOfSubtraction(overflowOfSubtraction), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		
		A = 4'b1111; B = 4'b0000; S = 0; #100;//16-0
		A = 4'b1111; B = 4'b0001; S = 0; #100;//16-1
		A = 4'b1111; B = 4'b0010; S = 0; #100;//16-2
		A = 4'b1111; B = 4'b0011; S = 0; #100;//16-3
		A = 4'b1111; B = 4'b0100; S = 0; #100;//16-4
		A = 4'b1111; B = 4'b0101; S = 0; #100;//16-5
		A = 4'b1111; B = 4'b0110; S = 0; #100;//16-6
		A = 4'b1111; B = 4'b0111; S = 0; #100;//16-7
		A = 4'b1111; B = 4'b1000; S = 0; #100;//16-8
		A = 4'b1111; B = 4'b1001; S = 0; #100;//16-9
		A = 4'b1111; B = 4'b1010; S = 0; #100;//16-10
		A = 4'b1111; B = 4'b1011; S = 0; #100;//16-11
		A = 4'b1111; B = 4'b1100; S = 0; #100;//16-12
		A = 4'b1111; B = 4'b1101; S = 0; #100;//16-13
		A = 4'b1111; B = 4'b1111; S = 0; #100;//16-16
		A = 4'b0000; B = 4'b0001; S = 0; #100;//0-1
		A = 4'b0000; B = 4'b0010; S = 0; #100;//0-2
		A = 4'b0000; B = 4'b0011; S = 0; #100;//0-3
		A = 4'b0000; B = 4'b0100; S = 0; #100;//0-4
		A = 4'b0000; B = 4'b0101; S = 0; #100;//0-5
		A = 4'b0000; B = 4'b0110; S = 0; #100;
		A = 4'b0000; B = 4'b0111; S = 0; #100;
		A = 4'b0000; B = 4'b1000; S = 0; #100;
		A = 4'b0000; B = 4'b1001; S = 0; #100;
		A = 4'b0000; B = 4'b1010; S = 0; #100;
		A = 4'b0000; B = 4'b1011; S = 0; #100;
	
		A = 4'b1111; B = 4'b0000; S = 1; #100;
		A = 4'b1111; B = 4'b0001; S = 1; #100;
		A = 4'b1111; B = 4'b0010; S = 1; #100;
		A = 4'b1111; B = 4'b0011; S = 1; #100;
		A = 4'b1111; B = 4'b0100; S = 1; #100;
		A = 4'b1111; B = 4'b0101; S = 1; #100;
		A = 4'b1111; B = 4'b0110; S = 1; #100;
		A = 4'b1111; B = 4'b0111; S = 1; #100;
		A = 4'b1111; B = 4'b1000; S = 1; #100;
		A = 4'b1111; B = 4'b1001; S = 1; #100;
		A = 4'b1111; B = 4'b1010; S = 1; #100;
		A = 4'b1111; B = 4'b1011; S = 1; #100;
		A = 4'b1111; B = 4'b1100; S = 1; #100;
		A = 4'b1111; B = 4'b1101; S = 1; #100;
		A = 4'b1111; B = 4'b1111; S = 1; #100;
		A = 4'b1111; B = 4'b0000; S = 1; #100;
		A = 4'b1111; B = 4'b0000; S = 1; #100;
		A = 4'b0000; B = 4'b0001; S = 1; #100;
		A = 4'b0000; B = 4'b0010; S = 1; #100;
		A = 4'b0000; B = 4'b0011; S = 1; #100;
		A = 4'b0000; B = 4'b0100; S = 1; #100;
		A = 4'b0000; B = 4'b0101; S = 1; #100;
		A = 4'b0000; B = 4'b0110; S = 1; #100;
		A = 4'b0000; B = 4'b0111; S = 1; #100;
		A = 4'b0000; B = 4'b1000; S = 1; #100;
		A = 4'b0000; B = 4'b1001; S = 1; #100;
		A = 4'b0000; B = 4'b1010; S = 1; #100;
		A = 4'b0000; B = 4'b1011; S = 1; #100;

		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

	end
      
endmodule

