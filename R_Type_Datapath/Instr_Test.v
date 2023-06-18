`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:58:54 04/04/2023
// Design Name:   Instruction_Memory
// Module Name:   D:/OneDrive - hyderabad.bits-pilani.ac.in/Assignment/R_Type_Datapath/Instr_Test.v
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

module Instr_Test;

	// Inputs
	reg [31:0] PC;
	reg reset;
	reg clk;

	// Outputs
	wire [31:0] Instruction;
	wire [31:0] PC_Out;

	// Instantiate the Unit Under Test (UUT)
	Instruction_Memory uut (
		.PC(PC), 
		.reset(reset), 
		.clk(clk), 
		.Instruction(Instruction), 
		.PC_Out(PC_Out)
	);

	initial begin
		// Initialize Inputs

		reset = 0;
		#2 reset = 1;
		#5 reset = 0;


		// Wait 100 ns for global reset to finish

        
		// Add stimulus here

	end
	
	initial begin
		clk=0;
		repeat(12)
		begin
		#15 clk=~clk;
		end
		$finish;
	end
	
	initial begin
		#15 PC=0;
		repeat(6)
		#30 PC=PC+4;
	end
      
endmodule

