`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:28:58 03/28/2016
// Design Name:   Verilog_Implementation
// Module Name:   C:/Xilinx/14.7/ISE_DS/ISE/Shinya_Yamamoto/Project_partB_Shinya_Yamamoto/Verilog_Implementation_TestBench.v
// Project Name:  Project_partB_Shinya_Yamamoto
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Verilog_Implementation
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Verilog_Implementation_TestBench;

	// Inputs
	reg A;
	reg B;
	reg C;

	// Outputs
	wire F;

	// Instantiate the Unit Under Test (UUT)
	Verilog_Implementation uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.F(F)
	);

	initial begin
		// Initialize Inputs
		A = 0; B = 0; C = 0;
		#100;
		A = 0; B = 0; C = 1;
		#100;
		A = 0; B = 1; C = 0;
		#100;
		A = 0; B = 1; C = 1;
		#100;
		A = 1; B = 0; C = 0;
		#100;
		A = 1; B = 0; C = 1;
		#100;
		A = 1; B = 1; C = 0;
		#100;
		A = 1; B = 1; C = 1;
		#100;        
		// Add stimulus here

	end
      
endmodule

