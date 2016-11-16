`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:55:58 11/15/2016
// Design Name:   mdioControl
// Module Name:   F:/CS 3710/Cotter1 Project/Cotter1/testingMDIO.v
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

module testingMDIO;

	// Inputs
	reg CLK;
	reg start;

	// Outputs
	wire [15:0] from_MDI;
	wire ready;
	wire mdCLK;

	// Bidirs
	wire MDIO;

	// Instantiate the Unit Under Test (UUT)
	mdioControl uut (
		.CLK(CLK), 
		.start(start), 
		.MDIO(MDIO), 
		.from_MDI(from_MDI), 
		.ready(ready), 
		.mdCLK(mdCLK)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		start = 0;

		// Wait 100 ns for global reset to finish
		#10000000;
		start = 1;
        
		// Add stimulus here

	end
	always
	begin
		CLK <= ~CLK;
		#10;
	end
      
endmodule

