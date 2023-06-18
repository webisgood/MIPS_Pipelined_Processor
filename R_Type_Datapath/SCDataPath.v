`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:45:53 03/23/2023 
// Design Name: 
// Module Name:    SCDataPath 
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
module SCDataPath(
		input clk, reset,
		input [31:0] PCIn,
		output [31:0] ALU_Output
    );
	 
//	 Program_Counter PC1(PCIn, PC_Next, clk, reset, PC);
//	 Instruction_Memory I1(PC,reset,clk,Instruction,PC_Instr);
//	 Main_Control MC1(Instruction[31:26],RegDst, ALUSrc, MemtoReg, RegWrite, MemRead, MemWrite, Jump, ALUOp, Branch);
//	 
//	 ALU_Main A2(PC,32'h00000004,4'b0010,5'b00000,PC_4);
//	 Shifter S1(Offset,Offset_Branch);
//	 ALU_Main A3(PC_4,Offset_Branch,4'b0010,5'b00000,Branch_Address);
//	 MUX_32 Mux4(PC_4,Branch_Address,(Branch[0] & Zero)|(Branch[1] & ~Zero), PC4_Branch);
//	 MUX_32 Mux5(PC4_Branch,{PC_4[31:28],Instruction[25:0],2'b00},Jump,PC_Next);
//	 
//	 MUX_5 Mux1(Instruction[20:16],Instruction[15:11],RegDst,Write_Register);
//	 Register_File R1(Instruction[25:21],Instruction[20:16],Write_Register,Write_Data,Read_Data_1,Read_Data_2,RegWrite,reset,clk);
//	 assign Read_Reg_1=Instruction[25:21]; 
//	 assign Read_Reg_2=Instruction[20:16];
//	 Sign_Extender SE1(Instruction[15:0],Offset);
//	 MUX_32 Mux2(Read_Data_2,Offset,ALUSrc,ALU_Input_2);
//	 ALU_Control AC1(ALUOp,Instruction[5:0],ALU_Ctrl);
//	 ALU_Main A1_Main(Read_Data_1,ALU_Input_2,ALU_Ctrl,Instruction[10:6],ALU_Output,Zero);	
//	 
//	 Data_Memory D1(ALU_Output,Read_Data_2,MemRead, MemWrite,reset,clk,Read_Mem_Data);
//	 MUX_32 Mux3(ALU_Output,Read_Mem_Data,MemtoReg,Write_Data);

	wire [31:0] CurrPC, NextPC, IC1, IC2;
	wire [31:0] PCincr1, PCincr2;
	
	wire RegDst1, ALUSrc1, MemtoReg1, RegWrite1, MemRead1, MemWrite1, Jump1, RegDst2, ALUSrc2, MemtoReg2, RegWrite2, MemRead2, MemWrite2, Jump2;
	wire [2:0] ALUOp;
	wire [3:0] ALUCntrl1, ALUCntrl2;
	wire [1:0] Branch1, Branch2;
	
	wire [31:0] RD1_1, RD2_1, SEN1, ShSEN, RD1_2, RD2_2, SEN2;
	wire [19:0] IC_chunk;
	wire [4:0] WR;
	wire [31:0] WD1, WD2;
	
	wire MemRead3, MemWrite3, MemtoReg3, RegDst3, RegWrite3, RegDst4, RegWrite4;
	
	wire flush, stall;
	wire [31:0] BranchAddr1, JumpAddr1, BranchAddr2, JumpAddr2, BranchOrPCincr;
	wire [31:0] ALU_ip, ALU_Result1, ALU_Result2;
	wire Zero;
	
	wire [14:0] IC_chunk1, IC_chunk2;
	wire [31:0] RD2_3, ReadMemData;
	
	wire [1:0] forward_sel_rs, forward_sel_rt;
	wire [31:0] forward_out_rs, forward_out_rt;
	
	
	// IFU
	Program_Counter PC1(stall, PCIn, NextPC, clk, reset, CurrPC);
	Instruction_Memory I1(CurrPC, reset, clk, IC1);
	Adder Add1(CurrPC, 4, PCincr1);
	IF_ID Reg1(clk, stall, flush, reset, IC1, PCincr1, IC2, PCincr2);
	
	// IDU
	Main_Control MC1(IC2[31:26], RegDst1, ALUSrc1, MemtoReg1, RegWrite1, MemRead1, MemWrite1, Jump1, ALUOp, Branch1);
	ALU_Control AC1(ALUOp, IC2[5:0], ALUCntrl1);
	Register_File RF1(IC2[25:21], IC2[20:16], WR, WD2, RD1_1, RD2_1, RegWrite4, reset, clk);
	Sign_Extender SignExt(IC2[15:0], SEN1);
	
	Shifter S1(SEN1,ShSEN);
	Adder Add2(PCincr2, ShSEN, BranchAddr1);
	assign JumpAddr1 = {PCincr2[31:28], IC2[25:0], 2'b00};
	
	ID_EX Reg2(clk, stall, flush, reset, BranchAddr1, JumpAddr1, PCincr2, RD1_1, RD2_1, SEN1, IC2[25:6], RegDst1, Jump1, Branch1, MemRead1, MemtoReg1, ALUCntrl1, MemWrite1, ALUSrc1, RegWrite1, BranchAddr2, JumpAddr2, PCincr3, RD1_2, RD2_2, SEN2, IC_chunk, RegDst2, Jump2, Branch2, MemRead2, MemtoReg2, ALUCntrl2, MemWrite2, ALUSrc2, RegWrite2);
	
	stall_unit Stall1(MemRead2, IC_chunk[14:10], IC2[25:21], IC2[20:16], stall);
	
	// EXU
	MUX_forwarding Mux6(RD1_2, ALU_Result2, WD2, forward_sel_rs, forward_out_rs);
	MUX_forwarding Mux7(RD2_2, ALU_Result2, WD2, forward_sel_rt, forward_out_rt);
	MUX_32 Mux2(forward_out_rt, SEN2, ALUSrc2, ALU_ip);
	ALU_Main A1_Main(forward_out_rs, ALU_ip, ALUCntrl2, IC_chunk[4:0], ALU_Result1, Zero);
	
	MUX_32 Mux4(PCincr1, BranchAddr2,(Branch2[0] & Zero)|(Branch2[1] & ~Zero), BranchOrPCincr);
	MUX_32 Mux5(BranchOrPCincr, JumpAddr2, Jump2, NextPC);
	
	assign ALU_Output = ALU_Result1;
	assign flush = (Branch2[0] & Zero)|(Branch2[1] & ~Zero)|Jump2;
	
	EX_MEM Reg3(clk, reset, RegWrite2, ALU_Result1, RD2_2, MemRead2, MemWrite2, MemtoReg2, RegDst2, IC_chunk[19:5], RegWrite3, ALU_Result2, RD2_3, MemRead3, MemWrite3, MemtoReg3, RegDst3, IC_chunk1);
	
	// MEMU
	Data_Memory D1(ALU_Result2, RD2_3, MemRead3, MemWrite3, reset, clk, ReadMemData);
	MUX_32 Mux3(ALU_Result2, ReadMemData, MemtoReg3, WD1);
	
	MEM_WB Reg4(clk, reset, RegDst3, RegWrite3, WD1, IC_chunk1, RegDst4, RegWrite4, WD2, IC_chunk2);
	
	// WB
	MUX_5 Mux1(IC_chunk2[9:5],IC_chunk2[4:0], RegDst4, WR);
	
	// Data Forwarding
	Forwarding_unit F1(IC_chunk1[4:0], IC_chunk[19:15], IC_chunk[14:10], WR, RegWrite4, RegWrite3, forward_sel_rs, forward_sel_rt);

endmodule

//		output [31:0] ALU_Output,Instruction, Write_Data, Read_Data_1,Read_Data_2, Offset, ALU_Input_2,Read_Mem_Data, PC, PC_Next, PC_4,
//		output [31:0] Offset_Branch, Branch_Address, PC4_Branch, PC_Instr,
//		output RegDst, ALUSrc, MemtoReg, RegWrite, MemRead, MemWrite, Jump, Zero,
//		output [1:0] Branch,
//		output [2:0] ALUOp,
//		output [4:0] Write_Register, Read_Reg_1, Read_Reg_2, 
//		output [3:0] ALU_Ctrl