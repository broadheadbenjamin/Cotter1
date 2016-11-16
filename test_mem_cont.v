`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:43:24 10/21/2016
// Design Name:   Control
// Module Name:   H:/CS 3710/Cotter1 Project/Cotter1/test_mem_cont.v
// Project Name:  Cotter1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_mem_cont;

	// Inputs
	reg CLK;
	reg write_memoryA;
	reg [23:0] memory_locationA;
	reg [15:0] memory_inputA;

	// Outputs
	wire [15:0] data_outA;

	// Instantiate the Unit Under Test (UUT)
	Control uut (
		.CLK(CLK), 
		.write_memoryA(write_memoryA), 
		.memory_locationA(memory_locationA), 
		.memory_inputA(memory_inputA), 
		.data_outA(data_outA)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		write_memoryA = 0;
		memory_locationA = 0;
		memory_inputA = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		while(1'b1)
		begin
			memory_locationA = memory_locationA + 1'b1;
			#40;
		end
	

	end
	always
	begin
		CLK = ~CLK;
		#10;
	end
      
endmodule

