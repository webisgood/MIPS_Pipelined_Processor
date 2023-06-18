`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:27:47 04/06/2023
// Design Name:   SCDataPath
// Module Name:   D:/OneDrive - hyderabad.bits-pilani.ac.in/Assignment/R_Type_Datapath/FDP_Test3.v
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

module FDP_Test3;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] PCIn;

	// Outputs
	wire [31:0] ALU_Output;
	wire [31:0] Instruction;
	wire [31:0] Write_Data;
	wire [31:0] Read_Data_1;
	wire [31:0] Read_Data_2;
	wire [31:0] Offset;
	wire [31:0] ALU_Input_2;
	wire [31:0] Read_Mem_Data;
	wire [31:0] PC;
	wire [31:0] PC_Next;
	wire [31:0] PC_4;
	wire [31:0] Offset_Branch;
	wire [31:0] Branch_Address;
	wire [31:0] PC4_Branch;
	wire [31:0] PC_Instr;
	wire RegDst;
	wire ALUSrc;
	wire MemtoReg;
	wire RegWrite;
	wire MemRead;
	wire MemWrite;
	wire Jump;
	wire Zero;
	wire [1:0] Branch;
	wire [2:0] ALUOp;
	wire [4:0] Write_Register;
	wire [4:0] Read_Reg_1;
	wire [4:0] Read_Reg_2;
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
		.PC(PC), 
		.PC_Next(PC_Next), 
		.PC_4(PC_4), 
		.Offset_Branch(Offset_Branch), 
		.Branch_Address(Branch_Address), 
		.PC4_Branch(PC4_Branch), 
		.PC_Instr(PC_Instr), 
		.RegDst(RegDst), 
		.ALUSrc(ALUSrc), 
		.MemtoReg(MemtoReg), 
		.RegWrite(RegWrite), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.Jump(Jump), 
		.Zero(Zero), 
		.Branch(Branch), 
		.ALUOp(ALUOp), 
		.Write_Register(Write_Register), 
		.Read_Reg_1(Read_Reg_1), 
		.Read_Reg_2(Read_Reg_2), 
		.ALU_Ctrl(ALU_Ctrl)
	);

initial begin
		$monitor("at time %0d IPC=%d, Reset = %d, CLK = %d, ALU Output = %d",$time,PCIn,reset,clk,ALU_Output);
		PCIn=0;
		#2 reset=1;
		#7 reset=0;
		#340 $stop;
	end
	
	initial begin
		clk=0;
		repeat(22)
		#15 clk=~clk;
	end
      
      
endmodule

