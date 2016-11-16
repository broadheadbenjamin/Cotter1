`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Tony McDaniel
// 
// Create Date:    15:38:02 11/02/2016 
// Design Name: 
// Module Name:    mdCLK_gen 
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
module mdCLK_gen(
    input CLK,
    output mdCLK
    );
		reg [4:0] countTo20 = 5'd19;
		reg mdCLK = 1'b0;
		
		always@(posedge CLK)
		begin 
			if(countTo20 == 5'd19)
			begin
				mdCLK <= ~mdCLK;
				countTo20 <= 5'd0;
			end
			else
				countTo20 <= countTo20 + 1'b1;
		end
endmodule
