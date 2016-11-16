`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Tony McDaniel
// 
// Create Date:    19:56:14 08/25/2016 
// Design Name: 
// Module Name:    Debouncer 
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

module Debouncer(
	 input clock,
    input buttonIn,
    output reg wireOut
    );
		parameter[17:0] oneHundredThousand = 17'd100_000;
        
		reg [16:0] counter = 17'd0;
		reg currentState = 1'd0;
	 
		always@(posedge clock)
		begin
			if(counter > oneHundredThousand)
			begin
				if(currentState == 1'b1)
					currentState <= 1'b0;
				else 
					currentState <= 1'b1;
				counter <= 1'd0;
			end
			else if(buttonIn != currentState)
				counter <= counter + 1'b1;
			else
				counter <= 17'd0;
			
			wireOut <= currentState;
		end    
		
		
endmodule
