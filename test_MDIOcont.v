`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:50:25 11/04/2016
// Design Name:   mdioControl
// Module Name:   H:/CS 3710/Cotter1 Project/Cotter1/test_MDIOcont.v
// Project Name:  Cotter1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mdioControl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_MDIOcont;

	// Inputs
	reg CLK;

	// Outputs
	wire [15:0] from_MDI;
	wire ready;
	wire mdCLK;

	// Bidirs
	wire MDIO;

	// Instantiate the Unit Under Test (UUT)
	mdioControl uut (
		.CLK(CLK), 
		.MDIO(MDIO), 
		.from_MDI(from_MDI), 
		.ready(ready), 
		.mdCLK(mdCLK)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always
	begin
		CLK <= ~CLK;
		#10;
	end
	
      
endmodule

