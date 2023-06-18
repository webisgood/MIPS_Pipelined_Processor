`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:43:14 03/22/2023 
// Design Name: 
// Module Name:    ALU_Main 
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
module ALU_Main(
		input [31:0] Data1, Data2,
		input [3:0] ALU_Control,
		input [4:0] Shamt,
		output reg [31:0] ALU_Result,
		output reg Zero
    );
	 
	 
always @(Data1, Data2, ALU_Control)
begin
		case(ALU_Control)
			4'b0000: ALU_Result= Data1 & Data2;
			4'b0001: ALU_Result= Data1 | Data2;
			4'b0010: ALU_Result= Data1 + Data2;
			4'b0110: ALU_Result= Data1 - Data2;
			4'b0111: begin
							if(Data1<Data2) ALU_Result = 1;
							else ALU_Result = 0;
						end	
			4'b1000: ALU_Result= Data2 << Shamt;
			4'b1010: ALU_Result= Data2 >> Shamt;
			4'b1011: ALU_Result= Data2 >>> Shamt;
			4'b1100: ALU_Result= ~(Data1 | Data2);
			4'b1101: ALU_Result= Data1 ^ Data2;
			default: ALU_Result= 32'hxxxxxxxx;
		endcase
		
		if(ALU_Result==0) Zero = 1;
		else Zero = 0;
end


endmodule
