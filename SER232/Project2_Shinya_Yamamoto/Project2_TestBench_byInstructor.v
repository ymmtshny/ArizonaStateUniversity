`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:59:16 09/15/2015
// Design Name:   project2
// Module Name:   C:/Users/yhidalgo/Documents/ser232/Project2/Project2_TestBench_byInstructor.v
// Project Name:  Project2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: project2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Project2_TestBench_byInstructor;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg S;
	
	// Output
	wire [6:0] Display;

	//Instructor's note: You may need to change the name of the UUT (in line 37) to match the name you gave to implementation; also make sure that names and length (number of bits) of the inputs and output also match. 
	// Instantiate the Unit Under Test (UUT)
	AddOrSubtractThenSelectAndDecodedInto7SegmentsDisplay uut (  
		.A(A), 
		.B(B), 
		.S(S),
		.Display(Display)//
	);

	reg [6:0] ExpectedValueForDisplay;
	integer numberOfCorrectTestCases;
	integer numberOfIncorrectTestCases;
	always@(A,B,S,Display,ExpectedValueForDisplay)begin
		#75;
		if(Display==ExpectedValueForDisplay) begin
			numberOfCorrectTestCases = numberOfCorrectTestCases + 1;
		end
		else begin 
			numberOfIncorrectTestCases = numberOfIncorrectTestCases + 1;
			$display("A= %d    B= %d    S= %b    Display= %b    ExpectedValueForDisplay = %b ",A,B,S,Display,ExpectedValueForDisplay);
		end
	end
	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		S = 1;
		ExpectedValueForDisplay = 7'b1111110; 
		numberOfCorrectTestCases = 0;
		numberOfIncorrectTestCases = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

		//Testing Addition, where S=1
		{A,B,S,ExpectedValueForDisplay}=16'b0000000011111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000000110110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000001011101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000001111111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000010010110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000010111011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000011011011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000011111110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000100011111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000100111111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000101011110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000101110011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000110011001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000110110111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000111011001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000111111000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001000010110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001000111101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001001011111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001001110110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001010011011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001010111011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001011011110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001011111111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001100011111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001100111110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001101010011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001101111001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001110010111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001110111001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001111011000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001111110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010000011101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010000111111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010001010110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010001111011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010010011011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010010111110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010011011111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010011111111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010100011110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010100110011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010101011001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010101110111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010110011001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010110111000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010111010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010111110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011000011111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011000110110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011001011011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011001111011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011010011110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011010111111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011011011111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011011111110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011100010011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011100111001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011101010111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011101111001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011110011000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011110110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011111010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011111110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100000010110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100000111011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100001011011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100001111110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100010011111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100010111111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100011011110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100011110011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100100011001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100100110111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100101011001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100101111000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100110010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100110110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100111010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100111110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101000011011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101000111011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101001011110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101001111111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101010011111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101010111110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101011010011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101011111001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101100010111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101100111001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101101011000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101101110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101110010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101110110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101111010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101111110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110000011011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110000111110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110001011111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110001111111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110010011110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110010110011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110011011001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110011110111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110100011001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110100111000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110101010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110101110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110110010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110110110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110111010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110111110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111000011110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111000111111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111001011111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111001111110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111010010011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111010111001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111011010111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111011111001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111100011000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111100110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111101010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111101110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111110010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111110110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111111010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111111110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000000011111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000000111111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000001011110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000001110011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000010011001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000010110111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000011011001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000011111000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000100010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000100110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000101010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000101110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000110010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000110110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000111010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000111110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001000011111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001000111110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001001010011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001001111001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001010010111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001010111001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001011011000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001011110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001100010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001100110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001101010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001101110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001110010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001110110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001111010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001111110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010000011110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010000110011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010001011001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010001110111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010010011001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010010111000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010011010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010011110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010100010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010100110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010101010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010101110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010110010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010110110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010111010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010111110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011000010011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011000111001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011001010111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011001111001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011010011000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011010110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011011010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011011110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011100010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011100110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011101010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011101110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011110010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011110110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011111010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011111110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100000011001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100000110111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100001011001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100001111000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100010010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100010110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100011010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100011110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100100010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100100110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100101010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100101110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100110010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100110110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100111010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100111110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101000010111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101000111001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101001011000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101001110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101010010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101010110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101011010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101011110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101100010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101100110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101101010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101101110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101110010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101110110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101111010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101111110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110000011001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110000111000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110001010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110001110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110010010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110010110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110011010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110011110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110100010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110100110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110101010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110101110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110110010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110110110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110111010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110111110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111000011000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111000110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111001010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111001110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111010010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111010110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111011010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111011110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111100010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111100110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111101010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111101110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111110010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111110110011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111111010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111111110011101; #100;

		//Testing Subtraction, where S=0
		{A,B,S,ExpectedValueForDisplay}=16'b0000000001111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000000100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000001000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000001100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000010000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000010100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000011000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000011100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000100000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000100100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000101000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000101100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000110000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000110100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000111000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001000000110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001000101111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001001000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001001100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001010000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001010100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001011000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001011100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001100000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001100100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001101000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001101100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001110000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001110100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001111000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0001111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010000001101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010000100110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010001001111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010001100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010010000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010010100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010011000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010011100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010100000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010100100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010101000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010101100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010110000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010110100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010111000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0010111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011000001111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011000101101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011001000110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011001101111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011010000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011010100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011011000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011011100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011100000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011100100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011101000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011101100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011110000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011110100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011111000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0011111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100000000110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100000101111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100001001101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100001100110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100010001111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100010100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100011000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100011100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100100000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100100100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100101000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100101100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100110000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100110100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100111000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0100111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101000001011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101000100110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101001001111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101001101101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101010000110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101010101111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101011000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101011100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101100000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101100100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101101000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101101100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101110000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101110100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101111000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0101111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110000001011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110000101011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110001000110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110001101111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110010001101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110010100110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110011001111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110011100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110100000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110100100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110101000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110101100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110110000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110110100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110111000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0110111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111000001110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111000101011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111001001011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111001100110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111010001111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111010101101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111011000110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111011101111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111100000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111100100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111101000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111101100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111110000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111110100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111111000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0111111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000000001111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000000101110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000001001011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000001101011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000010000110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000010101111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000011001101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000011100110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000100001111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000100100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000101000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000101100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000110000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000110100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000111000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1000111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001000001111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001000101111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001001001110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001001101011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001010001011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001010100110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001011001111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001011101101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001100000110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001100101111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001101000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001101100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001110000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001110100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001111000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1001111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010000001110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010000101111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010001001111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010001101110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010010001011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010010101011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010011000110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010011101111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010100001101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010100100110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010101001111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010101100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010110000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010110100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010111000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1010111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011000000011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011000101110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011001001111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011001101111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011010001110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011010101011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011011001011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011011100110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011100001111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011100101101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011101000110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011101101111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011110000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011110100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011111000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1011111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100000001001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100000100011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100001001110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100001101111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100010001111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100010101110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100011001011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100011101011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100100000110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100100101111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100101001101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100101100110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100110001111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100110100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100111000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1100111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101000000111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101000101001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101001000011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101001101110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101010001111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101010101111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101011001110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101011101011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101100001011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101100100110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101101001111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101101101101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101110000110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101110101111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101111000011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1101111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110000001001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110000100111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110001001001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110001100011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110010001110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110010101111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110011001111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110011101110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110100001011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110100101011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110101000110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110101101111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110110001101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110110100110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110111001111110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1110111100011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111000001000111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111000101001111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111001000111101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111001101001110; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111010000011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111010101110111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111011001111011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111011101111111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111100001110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111100101011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111101001011011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111101100110011; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111110001111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111110101101101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111111000110000; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111111101111110; #100;

		//These test cases try to test the sensitivity that triggers the execution of your alwas @(some, sensitivity, list) blocks
		{A,B,S,ExpectedValueForDisplay}=16'b0011000011111001; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111010010011101; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b1111010000011111; #100;
		{A,B,S,ExpectedValueForDisplay}=16'b0000001100011101; #100;
		
		
		#100;		
		$display("Number of correct test cases: %d",numberOfCorrectTestCases);
		$display("Number of incorrect test cases: %d   <- Make sure this number is zero",numberOfIncorrectTestCases);
		#100;

	end
      
endmodule

