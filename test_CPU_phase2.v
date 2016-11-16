`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:20:12 10/21/2016
// Design Name:   CPU
// Module Name:   H:/CS 3710/Cotter1 Project/Cotter1/test_CPU_phase2.v
// Project Name:  Cotter1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_CPU_phase2;

	// Inputs
	reg CLK;
	reg reset;
	reg [15:0] camera;
	reg [15:0] move_command;
	reg [15:0] data_outA;

	// Outputs
	wire [23:0] memory_locationA;
	wire [15:0] memory_inputA;
	wire [127:0] display;
	wire write_memoryA;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.CLK(CLK), 
		.reset(reset), 
		.camera(camera), 
		.move_command(move_command), 
		.data_outA(data_outA), 
		.memory_locationA(memory_locationA), 
		.memory_inputA(memory_inputA), 
		.display(display), 
		.write_memoryA(write_memoryA)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		reset = 0;
		camera = 0;
		move_command = 0;
		data_outA = 0;

		// Wait 100 ns for global reset to finish
		#120;
		
		data_outA = 16'b0000000000000000;
		#40;
		data_outA = 16'b0100000000000101;
		#40;
		data_outA = 16'b0100000100000101;
		#40;
		data_outA = 16'b0001001000000100;
		#40;
		data_outA = 16'b0010101101000100;
		#40;
		data_outA = 16'b0011010001100010;
		#40;
		data_outA = 16'b0001110110000000;
		#40;
		data_outA = 16'b0010011010100000;
		#40;
		data_outA = 16'b0111111111001100;
		#40;
		data_outA = 16'b0000000000000000;
      
	end

	
	always
	begin 
		CLK = ~CLK;
		#5;
	end
      
endmodule

