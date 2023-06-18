`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:37:34 03/23/2023 
// Design Name: 
// Module Name:    ALU_Control 
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
module ALU_Control(
		input [2:0] ALUOp,
		input [5:0] Funct,
		output reg [3:0] ALU_Control
    );
	 
	 always @(ALUOp, Funct)
	 begin
			case(ALUOp)
				3'b000: ALU_Control=4'b0010;  // add
				3'b001: ALU_Control=4'b0110;  // sub
				3'b010: ALU_Control=4'b0000;  // and
				3'b011: ALU_Control=4'b0001;  // or
				3'b100: ALU_Control=4'b0111;  // slt
				3'b101: ALU_Control=4'b1101;  // xor
				
				3'b110: begin
						 	case(Funct[5:4])
								2'b10: begin
											case(Funct[3:0])
													4'b0000: ALU_Control=4'b0010;  // add
													4'b0010: ALU_Control=4'b0110;  // sub
													4'b0100: ALU_Control=4'b0000;  // and
													4'b0101: ALU_Control=4'b0001;  // or
													4'b1010: ALU_Control=4'b0111;  // slt
													4'b0111: ALU_Control=4'b1100;  // nor
													4'b0110: ALU_Control=4'b1101;  // xor
													default: ALU_Control=4'bxxxx;
											endcase
										 end
								2'b00: begin
											case(Funct[3:0])
													4'b0000: ALU_Control=4'b1000;  // sll
													4'b0010: ALU_Control=4'b1010;  // srl
													4'b0011: ALU_Control=4'b1011;  // sra
													default: ALU_Control=4'bxxxx;
											endcase
										 end
								default: ALU_Control=4'bxxxx;
							endcase
						 end
				default: ALU_Control=4'bxxxx;		 
			endcase
	 end

endmodule
