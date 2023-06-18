`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:29:26 04/22/2023
// Design Name:   EX_MEM
// Module Name:   C:/Users/Sanjeev/Desktop/Practice files/Acad Labs/Comp Arch Lab/SC_MIPS_Assignment_2/Assignment_3/R_Type_Datapath/EX_MEM_tb.v
// Project Name:  R_Type_Datapath
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: EX_MEM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module EX_MEM_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] ALU_Result_in;
	reg [31:0] ReadData2_in;
	reg MemRead_in;
	reg MemWrite_in;
	reg MemToReg_in;
	reg RegDest_in;
	reg [14:0] rs_rt_rd_in;

	// Outputs
	wire [31:0] ALU_Result_out;
	wire [31:0] ReadData2_out;
	wire MemRead_out;
	wire MemWrite_out;
	wire MemToReg_out;
	wire RegDest_out;
	wire [14:0] rs_rt_rd_out;

	// Instantiate the Unit Under Test (UUT)
	EX_MEM uut (
		.clk(clk), 
		.reset(reset),
		.ALU_Result_in(ALU_Result_in), 
		.ReadData2_in(ReadData2_in), 
		.MemRead_in(MemRead_in), 
		.MemWrite_in(MemWrite_in), 
		.MemToReg_in(MemToReg_in), 
		.RegDest_in(RegDest_in), 
		.rs_rt_rd_in(rs_rt_rd_in),
		.ALU_Result_out(ALU_Result_out), 
		.ReadData2_out(ReadData2_out), 
		.MemRead_out(MemRead_out), 
		.MemWrite_out(MemWrite_out), 
		.MemToReg_out(MemToReg_out), 
		.RegDest_out(RegDest_out), 
		.rs_rt_rd_out(rs_rt_rd_out)
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
		ALU_Result_in = 10;
		ReadData2_in = 12;
		MemRead_in = 1;
		MemWrite_in = 0;
		MemToReg_in = 1;
		RegDest_in = 0;
		rs_rt_rd_in = 15'b100100000110000;
		#5
		
		ALU_Result_in = 101;
		ReadData2_in = 13;
		MemRead_in = 0;
		MemWrite_in = 1;
		MemToReg_in = 1;
		RegDest_in = 1;
		rs_rt_rd_in = 15'b101101000110110;
		#10
		
		ALU_Result_in = 31;
		ReadData2_in = 23;
		MemRead_in = 0;
		MemWrite_in = 0;
		MemToReg_in = 1;
		RegDest_in = 1;
		rs_rt_rd_in = 15'b000100001111001;
		#10
		
		ALU_Result_in = 10;
		ReadData2_in = 12;
		MemRead_in = 1;
		MemWrite_in = 0;
		MemToReg_in = 1;
		RegDest_in = 0;
		rs_rt_rd_in = 15'b100100000110000;
		#5
		
		$finish;
	end
      
endmodule

