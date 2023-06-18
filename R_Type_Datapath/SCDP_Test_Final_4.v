`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:41:26 03/25/2023
// Design Name:   SCDataPath
// Module Name:   D:/OneDrive - hyderabad.bits-pilani.ac.in/Assignment/R_Type_Datapath/SCDP_Test_Final_4.v
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

module SCDP_Test_Final_4;

	// Inputs
	reg clk;
	reg reset;
	reg [4:0] PCIn;

	// Outputs
	wire [31:0] ALU_Output;
	wire [31:0] Instruction;
	wire [31:0] Write_Data;
	wire [31:0] Read_Data_1;
	wire [31:0] Read_Data_2;
	wire [31:0] Offset;
	wire [31:0] ALU_Input_2;
	wire [31:0] Read_Mem_Data;
	wire RegDst;
	wire ALUSrc;
	wire MemtoReg;
	wire RegWrite;
	wire MemRead;
	wire MemWrite;
	wire Branch;
	wire Zero;
	wire [1:0] ALUOp;
	wire [4:0] Write_Register;
	wire [4:0] Read_Reg_1;
	wire [4:0] Read_Reg_2;
	wire [4:0] PC;
	wire [3:0] ALU_Ctrl;

	// Instantiate the Unit Under Test (UUT)
	SCDataPath uut (
		.clk(clk), 
		.reset(reset), 
		.PCIn(PCIn), 
		.ALU_Output(ALU_Output), 
		.Instruction(Instruction), 
		.Write_Data(Write_Data), 
		.Read_Data_1(Read_Data_1), 
		.Read_Data_2(Read_Data_2), 
		.Offset(Offset), 
		.ALU_Input_2(ALU_Input_2), 
		.Read_Mem_Data(Read_Mem_Data), 
		.RegDst(RegDst), 
		.ALUSrc(ALUSrc), 
		.MemtoReg(MemtoReg), 
		.RegWrite(RegWrite), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.Branch(Branch), 
		.Zero(Zero), 
		.ALUOp(ALUOp), 
		.Write_Register(Write_Register), 
		.Read_Reg_1(Read_Reg_1), 
		.Read_Reg_2(Read_Reg_2), 
		.PC(PC), 
		.ALU_Ctrl(ALU_Ctrl)
	);

	initial begin
		$monitor("at time %0d IPC=%d, Reset = %d, CLK = %d, ALU Output = %d",$time,PCIn,reset,clk,ALU_Output);
		PCIn=0;
		#2 reset=1;
		#7 reset=0;
		#200 $stop;
	end
	
	initial begin
		clk=0;
		repeat(12)
		#15 clk=~clk;
	end
      
endmodule 