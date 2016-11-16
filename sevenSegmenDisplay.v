`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Tony McDaniel
// 
// Create Date:    20:24:12 08/25/2016 
// Design Name: 
// Module Name:    sevenSegmenDisplay 
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
module sevenSegmenDisplay(
	 input[15:0] displayInfo,
	 input[1:0] selection,
    output a,
    output b,
    output c,
    output d,
    output e,
    output f,
    output g
    );
		wire[3:0] character;
		
		assign character = (selection == 2'b00)? displayInfo[3:0] : ((selection == 2'b01)? displayInfo[7:4]:((selection == 2'b10)? displayInfo[11:8]:displayInfo[15:12]));

		assign a = !(character == 4'b0000 || character == 4'b0010 || character == 4'b0011 || character == 4'b0101 || character == 4'b0110 || 
			character == 4'b0111 || character == 4'b1000 || character == 4'b1001 || character == 4'b1010 || character == 4'b1100 || 
			character == 4'b1110 || character == 4'b1111);

		assign b = !(character == 4'b0000 || character == 4'b0001 || character == 4'b0010 || character == 4'b0011 || character == 4'b0100 || 
			character == 4'b0111 || character == 4'b1000 || character == 4'b1001 || character == 4'b1010 || character == 4'b1101);

		assign c = !(character == 4'b0000 || character == 4'b0001 || character == 4'b0011 || character == 4'b0100 || character == 4'b0101 ||
			character == 4'b0110 || character == 4'b0111 || character == 4'b1000 || character == 4'b1001 || character == 4'b1010 ||
			character == 4'b1011 || character == 4'b1101);

		assign d = !(character == 4'b0000 || character == 4'b0010 || character == 4'b0011 || character == 4'b0101 ||
			character == 4'b0110 || character == 4'b1000 || character == 4'b1011 || character == 4'b1100 || character == 4'b1101 || 
			character == 4'b1110);

		assign e = !(character == 4'b0000 || character == 4'b0010 || character == 4'b0110 || character == 4'b1000 || character == 4'b1010 ||
			character == 4'b1011 || character == 4'b1100 || character == 4'b1101 || character == 4'b1110 || character == 4'b1111);

		assign f = !(character == 4'b0000 || character == 4'b0100 || character == 4'b0101 || character == 4'b0110 || character == 4'b1000 ||
			character == 4'b1001 || character == 4'b1010 || character == 4'b1011 || character == 4'b1100 || character == 4'b1110 || 
			character == 4'b1111);

		assign g = !(character == 4'b0010 || character == 4'b0011 || character == 4'b0100 || character == 4'b0101 || character == 4'b0110 || 
			character == 4'b1000 || character == 4'b1001 || character == 4'b1010 || character == 4'b1011 || character == 4'b1101 ||
			character == 4'b1110 || character == 4'b1111);

endmodule
