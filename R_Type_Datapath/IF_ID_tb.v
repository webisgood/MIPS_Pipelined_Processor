`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:08:46 04/21/2023
// Design Name:   IF_ID
// Module Name:   C:/Users/Sanjeev/Desktop/Practice files/Acad Labs/Comp Arch Lab/SC_MIPS_Assignment_2/Assignment_3/R_Type_Datapath/IF_ID_tb.v
// Project Name:  R_Type_Datapath
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IF_ID
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IF_ID_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] Instr_Code_next;
	reg [31:0] PC_next;

	// Outputs
	wire [31:0] Instr_Code_curr;
	wire [31:0] PC_curr;

	// Instantiate the Unit Under Test (UUT)
	IF_ID uut (
		.clk(clk), 
		.reset(reset), 
		.Instr_Code_next(Instr_Code_next), 
		.PC_next(PC_next), 
		.Instr_Code_curr(Instr_Code_curr), 
		.PC_curr(PC_curr)
	);

	initial begin
		clk = 0;
		
		repeat(6)
			#5 clk = ~clk;
			
		$finish;
	end
	
	initial begin
		reset = 1; #2
		reset = 0; #28
		
		$finish;
	end
	
	initial begin
		#5
		Instr_Code_next = 32'h00430806; PC_next = 10; #10
		Instr_Code_next = 32'hAA00FF23; PC_next = 12; #10
		Instr_Code_next = 32'h0000AF03; PC_next = 31; #10
		
		$finish;
	end
      
endmodule

