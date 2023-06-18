`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:51:37 03/23/2023 
// Design Name: 
// Module Name:    Main_Control 
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
module Main_Control(
		input [5:0] Op,
		output reg RegDst, ALUSrc, MemtoReg, RegWrite, MemRead, MemWrite, Jump,
		output reg [2:0] ALUOp, 
		output reg [1:0] Branch
    );


		always @(Op)
		begin
				case(Op)
						6'b000000: begin  // R-Type
											RegDst=1; ALUSrc=0; MemtoReg=0; RegWrite=1; MemRead=0; MemWrite=0; Jump=0;
											Branch=2'b00; ALUOp=3'b110;
									  end
						6'b100011: begin  // lw
											RegDst=0; ALUSrc=1; MemtoReg=1; RegWrite=1; MemRead=1; MemWrite=0; Jump=0;
											Branch=2'b00; ALUOp=3'b000;
									  end
						6'b101011: begin  // sw
											RegDst=1'bx; ALUSrc=1; MemtoReg=1'bx; RegWrite=0; MemRead=0; MemWrite=1; Jump=0;
											Branch=2'b00; ALUOp=3'b000;
									  end
						6'b000010: begin  // j
											RegDst=1'bx; ALUSrc=1'bx; MemtoReg=1'bx; RegWrite=0; MemRead=0; MemWrite=0; Jump=1;
											Branch=2'b00; ALUOp=3'bxxx;
									  end
						6'b000100: begin  // beq
											RegDst=1'bx; ALUSrc=0; MemtoReg=1'bx; RegWrite=0; MemRead=0; MemWrite=0; Jump=0;
											Branch=2'b01; ALUOp=3'b001;
									  end
						6'b000101: begin  // bne
											RegDst=1'bx; ALUSrc=0; MemtoReg=1'bx; RegWrite=0; MemRead=0; MemWrite=0; Jump=0;
											Branch=2'b10; ALUOp=3'b001;
									  end
						6'b001000: begin  // addi
											RegDst=0; ALUSrc=1; MemtoReg=0; RegWrite=1; MemRead=0; MemWrite=0; Jump=0;
											Branch=2'b00; ALUOp=3'b000;
									  end
						6'b001100: begin  // andi
											RegDst=0; ALUSrc=1; MemtoReg=0; RegWrite=1; MemRead=0; MemWrite=0; Jump=0;
											Branch=2'b00; ALUOp=3'b010;
									  end
						6'b001101: begin  // ori
											RegDst=0; ALUSrc=1; MemtoReg=0; RegWrite=1; MemRead=0; MemWrite=0; Jump=0;
											Branch=2'b00; ALUOp=3'b011;
									  end
						6'b001010: begin  // slti
											RegDst=0; ALUSrc=1; MemtoReg=0; RegWrite=1; MemRead=0; MemWrite=0; Jump=0;
											Branch=2'b00; ALUOp=3'b100;
									  end
						6'b001110: begin  // xori
											RegDst=0; ALUSrc=1; MemtoReg=0; RegWrite=1; MemRead=0; MemWrite=0; Jump=0;
											Branch=2'b00; ALUOp=3'b101;
									  end
						default: begin
											RegDst=1'bx; ALUSrc=1'bx; MemtoReg=1'bx; RegWrite=1'bx; MemRead=1'bx; MemWrite=1'bx; Jump=1'bx;
											Branch=2'bxx; ALUOp=3'bxxx;
									  end
				endcase
		
		end

endmodule
