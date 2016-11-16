`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:25 10/21/2016 
// Design Name: 
// Module Name:    CPU 
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
module CPU(input CLK,
	 input reset,
	 input [15:0]camera,
	 input [15:0] move_command,
	 input [15:0] data_outA,
	 output [23:0] memory_locationA,
	 output [15:0] memory_inputA,
	 output reg [127:0] display,
	 output write_memoryA
	 );
		
		parameter [14:0] termination_line = 15'd256;
		
		wire[127:0] regUpdates1;
		wire[127:0] regUpdates2;
		
		reg [15:0] r0 = 16'b0;
		reg [15:0] r1 = 16'b0;
		reg [15:0] r2 = 16'b0;
		reg [15:0] r3 = 16'b0;
		reg [15:0] r4 = 16'b0;
		reg [15:0] r5 = 16'b0;
		reg [15:0] r6 = 16'b0;
		reg [15:0] r7 = 16'b0;
		reg [14:0] pcCounter = 14'b0;
		reg [1:0] phase = 2'b11;
		
		ALU pipeline1(CLK, {r7,r6,r5,r4,r3,r2,r1,r0}, camera, move_command, data_outA, phase, memory_locationA, pcCounter, memory_inputA, regUpdates1, write_memoryA);
		ALU pipeline2(CLK, {r7,r6,r5,r4,r3,r2,r1,r0}, camera, move_command, data_outA, {(phase[1] ^ 1'b1), phase[0]}, pcCounter, memory_locationA, memory_inputA, regUpdates2, write_memoryA);

		always@(posedge CLK)
		begin
			if(pcCounter >= termination_line || reset)
				phase <= 2'b00;
			else
				phase <= phase + 1'b1;
				
			if(reset)
				pcCounter <= 15'b0;
			else if(phase == 2'b00)
			begin
				r0 <= regUpdates1[15:0];
				r1 <= regUpdates1[31:16];
				r2 <= regUpdates1[47:32];
				r3 <= regUpdates1[63:48];
				r4 <= regUpdates1[79:64];
				r5 <= regUpdates1[95:80];
				r6 <= regUpdates1[111:96];
				r7 <= regUpdates1[127:12];
				pcCounter <= pcCounter + 1'b1;
			end
			else if(phase == 2'b10)
			begin
				pcCounter <= pcCounter + 1'b1;
				r0 <= regUpdates2[15:0];
				r1 <= regUpdates2[31:16];
				r2 <= regUpdates2[47:32];
				r3 <= regUpdates2[63:48];
				r4 <= regUpdates2[79:64];
				r5 <= regUpdates2[95:80];
				r6 <= regUpdates2[111:96];
				r7 <= regUpdates2[127:12];
			end
			
			display <= {r7,r6,r5,r4,r3,r2,r1,r0};

		end

endmodule
