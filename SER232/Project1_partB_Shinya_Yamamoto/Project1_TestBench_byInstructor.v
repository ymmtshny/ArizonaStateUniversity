// Verilog test fixture created from schematic C:\Users\yhidalgo\Documents\SER232\Project1_partA_Yoalli_Hidalgo\Schematic.sch - Mon Oct 26 22:39:41 2015

`timescale 1ns / 1ps

module Schematic_Schematic_sch_tb();

// Inputs
   reg A;
   reg B;
   reg C;

// Output
   wire F;

// Bidirs

// internal registers
	reg ExpectedF;

// Instantiate the UUT
   Verilog_Implementation UUT (
		.F(F), 
		.A(A), 
		.B(B), 
		.C(C)
   );
// Initialize Inputs
	initial begin
		//$monitor("A=%b;   B=%b;   C=%b;   ExpectedF=%b",A,B,C,F); 
//This $monitor statement is commented out because I added multiple $display statements below. 
		//The Unit Under Test is implementing the equation F = A'BC + B'(AC' + A'C) + (ABC'+ A'B')C'
		
		A=0;   B=0;   C=0;   ExpectedF=1;	#50;

		A=0;   B=0;   C=1;   ExpectedF=1;	#50;

		A=0;   B=1;   C=0;   ExpectedF=0;	#50;

		A=0;   B=1;   C=1;   ExpectedF=1;	#50;

		A=1;   B=0;   C=0;   ExpectedF=1;	#50;

		A=1;   B=0;   C=1;   ExpectedF=0;	#50;

		A=1;   B=1;   C=0;   ExpectedF=1;	#50;

		A=1;   B=1;   C=1;   ExpectedF=0;	#50;

	end
	
	always @(A, B, C, F, ExpectedF) begin//The following code gets executed whenever there is a change in any of the values for A, B, C, F and/or ExpectedF. 
		#25; //Allow some time to let F get calculated
		if ( F == ExpectedF) begin
			$display("Correct when A=%b, B=%b, C=%b, producing ExpectedF = F = %b ", A, B, C, F);
		end else if( F == ~ExpectedF )begin
			$display("Error in implementation, because when A=%b, B=%b, C=%b there is a mismatch between F=%b and ExpectedF=%b",A,B,C,F,ExpectedF);
		end else begin
			$display("Error in implementation, because when A=%b, B=%b, C=%b there is a mismatch between F=%b and ExpectedF=%b. ",A,B,C,F,ExpectedF);
			$display("A value of X means undefined.");
			$display("   If the schematic is being tested: Make sure the wires are well connected; it is possible they are not well connected to the gates and/or to the inputs and/or output");
			$display("   If the behavioral (Verilog module) implementation is the one that is being tested: Double-check the inputs and outputs of every gate. Make sure the names of the variables you are using are consistent with their declaration (be aware names are case-sensitive), for instance: If declared as 'reg A;', don't later use it as lower-case 'or(or1,a,B);'.");
		end
	end
endmodule
