`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:10:54 04/22/2023
// Design Name:   SCDataPath
// Module Name:   C:/Users/Sanjeev/Desktop/Practice files/Acad Labs/Comp Arch Lab/Pipelined_MIPS_Assignment_3/Assignment_3/R_Type_Datapath/Pipeline_test.v
// Project Name:  R_Type_Datapath
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SCDataPath
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Pipeline_test;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] PCIn;

	// Outputs
	wire [31:0] ALU_Output;

	// Instantiate the Unit Under Test (UUT)
	SCDataPath uut (
		.clk(clk), 
		.reset(reset), 
		.PCIn(PCIn), 
		.ALU_Output(ALU_Output)
	);

	initial begin
		clk = 0;
		PCIn = 0;
		
		#5
		repeat(50)
			#5 clk = ~clk;
		
		$finish;
	end
	
	initial begin
		reset = 1; #2
		reset = 0; #253
		
		$finish;
	end
      
endmodule

