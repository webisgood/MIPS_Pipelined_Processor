`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:49:14 03/25/2023
// Design Name:   Instruction_Memory
// Module Name:   D:/OneDrive - hyderabad.bits-pilani.ac.in/Assignment/R_Type_Datapath/Instr_Mem_Test_2.v
// Project Name:  R_Type_Datapath
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Instruction_Memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Instr_Mem_Test_2;

	// Inputs
	reg [4:0] PCIn;
	reg reset;
	reg clk;

	// Outputs
	wire [31:0] Instruction;
	wire PC;

	// Instantiate the Unit Under Test (UUT)
	Instruction_Memory uut (
		.PCIn(PCIn), 
		.reset(reset), 
		.clk(clk), 
		.Instruction(Instruction), 
		.PC(PC)
	);

	initial begin
		// Initialize Inputs
		PCIn = 0;
		reset = 0;
		#2 reset=1;
		#7 reset=0;
		
		#110 $finish;
        
	end
	
	initial begin
		clk = 0;
		repeat(8) 
		#10 clk=~clk;
	end
      
endmodule

