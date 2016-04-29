`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:15:28 03/28/2016 
// Design Name: 
// Module Name:    Verilog_Implementation 
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

//F=  A'BC + B'(AC' + A'C) + (ABC'+A'B')C'
//F = A'BC + B'(AC' + A'C) + (ABC'+ A'B')C'
module Verilog_Implementation(A, B, C, F);

input A, B, C;
output F;

wire a_not, b_not, c_not, and1, and2, and3, and4, and5, and6, and7, or1, or2;

not(a_not, A); //A'
not(b_not, B); //B'
not(c_not, C); //C'
and(and1, a_not, B, C); //A'BC
and(and2, A, c_not); //AC'
and(and3, a_not, C); //A'C
or(or1, and2, and3); //(AC'+ A'C)
and(and4, b_not, or1); //B'(AC'+ A'C)
and(and5, A, B, c_not); //ABC'
and(and6, a_not, b_not); //A'B'
or(or2, and5, and6); //ABC'+A'B'
and(and7, or2, c_not); //(ABC'+A'B')C'
or(F, and1, and4, and7);

endmodule
