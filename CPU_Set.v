`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Tony McDaniel, Matt Blessing, Ben Broadhead, Charlie Shoup  
// 
// Create Date:    13:50:49 10/10/2016 
// Design Name: Cotter   1 CPU
// Module Name:    CPU_Set 
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
module CPU_Set(
    input CLK,
	 input reset,
	 input [15:0]camera,
	 input [15:0] move_command,
	 input [15:0] data_out,
	 output reg [23:0] memory_location,
	 output reg [15:0] memory_input,
	 output reg [127:0] display,
	 output write_memory
    );
	 
    parameter [14:0] termination_line = 15'd22;
    
	 parameter [4:0] stall = 5'd0;
    parameter [4:0] store = 5'd1;
    parameter [4:0] add = 5'd2;
    parameter [4:0] sub = 5'd3;
    parameter [4:0] move = 5'd4;
    parameter [4:0] sll = 5'd5;
    parameter [4:0] srl = 5'd6;
    parameter [4:0] load_hi_reg = 5'd7;
    parameter [4:0] load_lo_reg = 5'd8;
    parameter [4:0] jump = 5'd9;
    parameter [4:0] set_servo = 5'd10;
    parameter [4:0] load_cam = 5'd11;
    parameter [4:0] move_buffer = 5'd12;
    parameter [4:0] bne = 5'd13;
    parameter [4:0] beq = 5'd14;
    parameter [4:0] slt = 5'd15;
    parameter [4:0] AND = 5'd16;
    parameter [4:0] OR = 5'd17;
    parameter [4:0] NOT = 5'd18;
    parameter [4:0] load = 5'd19;
    parameter [4:0] loadl = 5'd20;
    parameter [4:0] storel = 5'd21;
    
    parameter [1:0] phase0 = 2'b00;
    parameter [1:0] phase1 = 2'b01;
    parameter [1:0] phase2 = 2'b10;
    
    parameter [2:0] reg0 = 3'b000;
    parameter [2:0] reg1 = 3'b001;
    parameter [2:0] reg2 = 3'b010;
    parameter [2:0] reg3 = 3'b011;
    parameter [2:0] reg4 = 3'b100;
    parameter [2:0] reg5 = 3'b101;
    parameter [2:0] reg6 = 3'b110;    
    
	 reg [15:0] word = 16'b0;
	 reg [14:0] pc_counter = 15'b0;
	 reg [7:0] right_servo = 8'b0; //if top bit == 1 forward if 0 backwards
	 reg [7:0] left_servo = 8'b0;
	 reg [7:0] hi_part = 8'b0;
	 reg [2:0] reg_to_store = 3'b0;
	 reg [1:0] phase = 2'b11;
	 reg memory_flag = 1'b0;
	 reg memory_ready = 1'b0;
	 reg write_memory = 1'b0;
	 reg load_store = 1'b1; // if 1 load
     
	 //registers
	 reg [15:0] r0 = 16'b0;
	 reg [15:0] r1 = 16'b0;
	 reg [15:0] r2 = 16'b0;
	 reg [15:0] r3 = 16'b0;
	 reg [15:0] r4 = 16'b0;
	 reg [15:0] r5 = 16'b0;
	 reg [15:0] r6 = 16'b0;
	 reg [15:0] r7 = 16'b0;
	 reg [15:0] tempA = 16'b0;
	 reg [15:0] tempB = 16'b0;
	 reg [10:0] jump_amount = 11'b0; // lowest bit indicates sign
	 
	 always@(posedge CLK)
	 begin 
		if(pc_counter > termination_line )
            phase <= phase0;
		else
			phase <= phase + 1'b1;	
	 
        case(phase)//case of phases of the CPU
            phase0:
            begin 
					word <= data_out;

					if(memory_flag)
					begin
					  case(reg_to_store)
							reg0: memory_input <= r0;
							reg1:	memory_input <= r1;
							reg2:	memory_input <= r2;
							reg3:	memory_input <= r3;
							reg4:	memory_input <= r4;
							reg5:	memory_input <= r5;
							reg6:	memory_input <= r6;
							default: memory_input <= r7;
					  endcase	
					  memory_ready <= 1'b1;
					end
					else if(data_out[15:11] == loadl)
					begin
						memory_location <= {16'b0, data_out[7:0]};
						memory_ready <= 1'b1;
						reg_to_store <= data_out[10:8];
						load_store <= 1'b1;
					end
					else if(data_out[15:11] == storel)
					begin
						memory_location <= {16'b0, data_out[7:0]};
						memory_ready <= 1'b1;
						load_store <= 1'b0;
						write_memory <= 1'b1;
						
						case(data_out[10:8])
							reg0: memory_input <= r0;
							reg1:	memory_input <= r1;
							reg2:	memory_input <= r2;
							reg3:	memory_input <= r3;
							reg4:	memory_input <= r4;
							reg5:	memory_input <= r5;
							reg6:	memory_input <= r6;
							default: memory_input <= r7;
					  endcase	
					end
            end
            phase1:
            begin
                if(memory_flag)
                begin
                  write_memory <= ~(load_store);
						memory_location <= {hi_part,word};
						hi_part <= 1'b0;
						memory_flag <= 1'b0;
                end
                else 
                begin
						case(word[15:11]) //case on instruction set for CPU
							load:
							begin
								 
								 memory_flag <= 1'b1;
								 load_store <= 1'b1;
								 reg_to_store <= word[10:8];
								 hi_part <= word[7:0];
							end
							store:
							begin
								 
								 memory_flag <= 1'b1;
								 load_store <= 1'b0;
								 reg_to_store <= word[10:8];
								 hi_part <= word[7:0];
							end
							add:
							begin
								 
								 case(word[7:5])//set tempA
									  reg0: tempA = r0;// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
									  reg1: tempA = r1;//reg1
									  reg2: tempA = r2;//reg2
									  reg3: tempA = r3;//reg3
									  reg4: tempA = r4;//reg4
									  reg5: tempA = r5;//reg5
									  reg6: tempA = r6;//reg6
									  default: tempA = r7;
								 endcase					
								 case(word[4:2])//set tempB
									  reg0: tempB = r0;// if ( word[4:2] = 3'b000 ) set tempB = to the value in reg 0
									  reg1: tempB = r1;//reg1
									  reg2: tempB = r2;//reg2
									  reg3: tempB = r3;//reg3
									  reg4: tempB = r4;//reg4
									  reg5: tempB = r5;//reg5
									  reg6: tempB = r6;//reg6
									  default: tempB = r7;
								 endcase					
								 case(word[10:8])//destination reg
									  reg0: r0 <= tempA + tempB; // if ( word[10:8] = 3'b000 ) set dest = to tempA + tempB
									  reg1: r1 <= tempA + tempB;
									  reg2: r2 <= tempA + tempB;
									  reg3: r3 <= tempA + tempB;
									  reg4: r4 <= tempA + tempB;
									  reg5: r5 <= tempA + tempB;
									  reg6: r6 <= tempA + tempB;
									  default: r7 <= tempA + tempB;
								 endcase					
							end
							sub:
							begin
								 
								 case(word[7:5])//set tempA
									  reg0: tempA = r0;// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
									  reg1: tempA = r1;//reg1
									  reg2: tempA = r2;//reg2
									  reg3: tempA = r3;//reg3
									  reg4: tempA = r4;//reg4
									  reg5: tempA = r5;//reg5
									  reg6: tempA = r6;//reg6
									  default: tempA = r7;
								 endcase					
								 case(word[4:2])//set tempB
									  reg0: tempB= r0;// if ( word[4:2] = 3'b000 ) set tempB = to the value in reg 0
									  reg1: tempB = r1;//reg1
									  reg2: tempB = r2;//reg2
									  reg3: tempB = r3;//reg3
									  reg4: tempB = r4;//reg4
									  reg5: tempB = r5;//reg5
									  reg6: tempB = r6;//reg6
									  default: tempB = r7;
								 endcase					
								 case(word[10:8])//destination reg
									  reg0: r0 <= tempA - tempB; // if ( word[10:8] = 3'b000 ) set dest = to tempA - tempB
									  reg1: r1 <= tempA - tempB;
									  reg2: r2 <= tempA - tempB;
									  reg3: r3 <= tempA - tempB;
									  reg4: r4 <= tempA - tempB;
									  reg5: r5 <= tempA - tempB;
									  reg6: r6 <= tempA - tempB;
									  default: r7 <= tempA - tempB;
								 endcase
							end
							move:
							begin
								 
								 case(word[7:5])//set tempA
									  reg0: tempA = r0;// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
									  reg1: tempA = r1;//reg1
									  reg2: tempA = r2;//reg2
									  reg3: tempA = r3;//reg3
									  reg4: tempA = r4;//reg4
									  reg5: tempA = r5;//reg5
									  reg6: tempA = r6;//reg6
									  default: tempA = r7;
								 endcase					
								 case(word[10:8])//destination reg
									  reg0: r0 <= tempA;
									  reg1: r1 <= tempA;
									  reg2: r2 <= tempA;
									  reg3: r3 <= tempA;
									  reg4: r4 <= tempA;
									  reg5: r5 <= tempA;
									  reg6: r6 <= tempA;
									  default: r7 <= tempA;
								 endcase
							end
							sll:
							begin
								 
								 case(word[7:5])//set tempA
									  reg0: tempA = r0 << word[4:1];// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
									  reg1: tempA = r1 << word[4:1];//reg1
									  reg2: tempA = r2 << word[4:1];//reg2
									  reg3: tempA = r3 << word[4:1];//reg3
									  reg4: tempA = r4 << word[4:1];//reg4
									  reg5: tempA = r5 << word[4:1];//reg5
									  reg6: tempA = r6 << word[4:1];//reg6
									  default: tempA = r7 << word[4:1];
								 endcase					
								 case(word[10:8])//destination reg
									  reg0: r0 <= tempA;
									  reg1: r1 <= tempA;
									  reg2: r2 <= tempA;
									  reg3: r3 <= tempA;
									  reg4: r4 <= tempA;
									  reg5: r5 <= tempA;
									  reg6: r6 <= tempA;
									  default: r7 <= tempA;
								 endcase
							end
							srl:
							begin
								 
								 case(word[7:5])//set tempA
									  reg0: tempA = r0 >> word[4:1];// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
									  reg1: tempA = r1 >> word[4:1];//reg1
									  reg2: tempA = r2 >> word[4:1];//reg2
									  reg3: tempA = r3 >> word[4:1];//reg3
									  reg4: tempA = r4 >> word[4:1];//reg4
									  reg5: tempA = r5 >> word[4:1];//reg5
									  reg6: tempA = r6 >> word[4:1];//reg6
									  default: tempA = r7 >> word[4:1];
								 endcase					
								 case(word[10:8])//destination reg
									  reg0: r0 <= tempA;
									  reg1: r1 <= tempA;
									  reg2: r2 <= tempA;
									  reg3: r3 <= tempA;
									  reg4: r4 <= tempA;
									  reg5: r5 <= tempA;
									  reg6: r6 <= tempA;
									  default: r7 <= tempA;
								 endcase
							end
							load_hi_reg:
							begin
								 
								 case(word[10:8])//destination reg
									  reg0: r0[15:8] <= word[7:0];
									  reg1: r1[15:8] <= word[7:0];
									  reg2: r2[15:8] <= word[7:0];
									  reg3: r3[15:8] <= word[7:0];
									  reg4: r4[15:8] <= word[7:0];
									  reg5: r5[15:8] <= word[7:0];
									  reg6: r6[15:8] <= word[7:0];
									  default: r7[15:8] <= word[7:0];
								 endcase
							end
							load_lo_reg:
							begin
								 
								 case(word[10:8])//destination reg
									  reg0: r0[7:0] <= word[7:0];
									  reg1: r1[7:0] <= word[7:0];
									  reg2: r2[7:0] <= word[7:0];
									  reg3: r3[7:0] <= word[7:0];
									  reg4: r4[7:0] <= word[7:0];
									  reg5: r5[7:0] <= word[7:0];
									  reg6: r6[7:0] <= word[7:0];
									  default: r7[7:0] <= word[7:0];
								 endcase
							end
							jump:
							begin
								 
								 jump_amount <= word[10:0];
							end
							set_servo:
							begin
								 
								 case(word[10:8])//destination reg
									  reg0:
									  begin
											right_servo <= r0[7:0];
											left_servo <= r0[15:8];
									  end
									  reg1:
									  begin
											right_servo <= r1[7:0];
											left_servo <= r1[15:8];
									  end
									  reg2:
									  begin
											right_servo <= r2[7:0];
											left_servo <= r2[15:8];
									  end
									  reg3:
									  begin
											right_servo <= r3[7:0];
											left_servo <= r3[15:8];
									  end
									  reg4:
									  begin
											right_servo <= r4[7:0];
											left_servo <= r4[15:8];
									  end
									  reg5:
									  begin
											right_servo <= r5[7:0];
											left_servo <= r5[15:8];
									  end
									  reg6:
									  begin
											right_servo <= r6[7:0];
											left_servo <= r6[15:8];
									  end
									  default:
									  begin
											right_servo <= r7[7:0];
											left_servo <= r7[15:8];
									  end
								 endcase
							end
							load_cam:
							begin
								 
								 case(word[10:8])//destination reg
									  reg0: r0 <= camera;
									  reg1: r1 <= camera;
									  reg2: r2 <= camera;
									  reg3: r3 <= camera;
									  reg4: r4 <= camera;
									  reg5: r5 <= camera;
									  reg6: r6 <= camera;
									  default: r7 <= camera;
								 endcase
							end
							move_buffer:
							begin
								 
								 case(word[10:8])//destination reg
									  reg0: r0 <= move_command;
									  reg1: r1 <= move_command;
									  reg2: r2 <= move_command;
									  reg3: r3 <= move_command;
									  reg4: r4 <= move_command;
									  reg5: r5 <= move_command;
									  reg6: r6 <= move_command;
									  default: r7 <= move_command;
								 endcase
							end
							bne:
							begin
								 
								 case(word[10:8])//set tempA
									  reg0: tempA = r0;// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
									  reg1: tempA = r1;//reg1
									  reg2: tempA = r2;//reg2
									  reg3: tempA = r3;//reg3
									  reg4: tempA = r4;//reg4
									  reg5: tempA = r5;//reg5
									  reg6: tempA = r6;//reg6
									  default: tempA = r7;
								 endcase					
								 case(word[7:5])//set tempB
									  reg0: tempB= r0;// if ( word[4:2] = 3'b000 ) set tempB = to the value in reg 0
									  reg1: tempB = r1;//reg1
									  reg2: tempB = r2;//reg2
									  reg3: tempB = r3;//reg3
									  reg4: tempB = r4;//reg4
									  reg5: tempB = r5;//reg5
									  reg6: tempB = r6;//reg6
									  default: tempB = r7;
								 endcase		
								 if(tempA != tempB)
								 begin
									  jump_amount <= {6'b0, word[4:0]};
								 end
								 else
								 begin
									  jump_amount <= 11'b0;
								 end
							end
							beq:
							begin
								 
								 case(word[10:8])//set tempA
									  reg0: tempA = r0;// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
									  reg1: tempA = r1;//reg1
									  reg2: tempA = r2;//reg2
									  reg3: tempA = r3;//reg3
									  reg4: tempA = r4;//reg4
									  reg5: tempA = r5;//reg5
									  reg6: tempA = r6;//reg6
									  default: tempA = r7;
								 endcase					
								 case(word[7:5])//set tempB
									  reg0: tempB = r0;// if ( word[4:2] = 3'b000 ) set tempB = to the value in reg 0
									  reg1: tempB = r1;//reg1
									  reg2: tempB = r2;//reg2
									  reg3: tempB = r3;//reg3
									  reg4: tempB = r4;//reg4
									  reg5: tempB = r5;//reg5
									  reg6: tempB = r6;//reg6
									  default: tempB = r7;
								 endcase		
								 if(tempA == tempB)
								 begin
									  jump_amount <= {6'b0 , word[4:0]};
								 end
								 else
								 begin
									  jump_amount <= 11'b0;
								 end
							end
							slt:
							begin
								 
								 case(word[7:5])//set tempA
									  reg0: tempA = r0;// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
									  reg1: tempA = r1;//reg1
									  reg2: tempA = r2;//reg2
									  reg3: tempA = r3;//reg3
									  reg4: tempA = r4;//reg4
									  reg5: tempA = r5;//reg5
									  reg6: tempA = r6;//reg6
									  default: tempA = r7;
								 endcase					
								 case(word[4:2])//set tempB
									  reg0: tempB = r0;// if ( word[4:2] = 3'b000 ) set tempB = to the value in reg 0
									  reg1: tempB = r1;//reg1
									  reg2: tempB = r2;//reg2
									  reg3: tempB = r3;//reg3
									  reg4: tempB = r4;//reg4
									  reg5: tempB = r5;//reg5
									  reg6: tempB = r6;//reg6
									  default: tempB = r7;
								 endcase		
								 case(word[10:8])//destination reg
									  reg0: r0 <= tempA < tempB;
									  reg1: r1 <= tempA < tempB;
									  reg2: r2 <= tempA < tempB;
									  reg3: r3 <= tempA < tempB;
									  reg4: r4 <= tempA < tempB;
									  reg5: r5 <= tempA < tempB;
									  reg6: r6 <= tempA < tempB;
									  default: r7 <= tempA < tempB;
								 endcase
							end
							AND:
							begin
								 
								 case(word[7:5])//set tempA
									  reg0: tempA = r0;// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
									  reg1: tempA = r1;//reg1
									  reg2: tempA = r2;//reg2
									  reg3: tempA = r3;//reg3
									  reg4: tempA = r4;//reg4
									  reg5: tempA = r5;//reg5
									  reg6: tempA = r6;//reg6
									  default: tempA = r7;
								 endcase					
								 case(word[4:2])//set tempB
									  reg0: tempB = r0;// if ( word[4:2] = 3'b000 ) set tempB = to the value in reg 0
									  reg1: tempB = r1;//reg1
									  reg2: tempB = r2;//reg2
									  reg3: tempB = r3;//reg3
									  reg4: tempB = r4;//reg4
									  reg5: tempB = r5;//reg5
									  reg6: tempB = r6;//reg6
									  default: tempB = r7;
								 endcase		
								 case(word[10:8])//destination reg
									  reg0: r0 <= tempA & tempB;
									  reg1: r1 <= tempA & tempB;
									  reg2: r2 <= tempA & tempB;
									  reg3: r3 <= tempA & tempB;
									  reg4: r4 <= tempA & tempB;
									  reg5: r5 <= tempA & tempB;
									  reg6: r6 <= tempA & tempB;
									  default: r7 <= tempA & tempB;
								 endcase
							end
							OR:
							begin
								 
								 case(word[7:5])//set tempA
									  reg0: tempA = r0;// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
									  reg1: tempA = r1;//reg1
									  reg2: tempA = r2;//reg2
									  reg3: tempA = r3;//reg3
									  reg4: tempA = r4;//reg4
									  reg5: tempA = r5;//reg5
									  reg6: tempA = r6;//reg6
									  default: tempA = r7;
								 endcase					
								 case(word[4:2])//set tempB
									  reg0: tempB = r0;// if ( word[4:2] = 3'b000 ) set tempB = to the value in reg 0
									  reg1: tempB = r1;//reg1
									  reg2: tempB = r2;//reg2
									  reg3: tempB = r3;//reg3
									  reg4: tempB = r4;//reg4
									  reg5: tempB = r5;//reg5
									  reg6: tempB = r6;//reg6
									  default: tempB = r7;
								 endcase		
								 case(word[10:8])//destination reg
									  reg0: r0 <= tempA | tempB;
									  reg1: r1 <= tempA | tempB;
									  reg2: r2 <= tempA | tempB;
									  reg3: r3 <= tempA | tempB;
									  reg4: r4 <= tempA | tempB;
									  reg5: r5 <= tempA | tempB;
									  reg6: r6 <= tempA | tempB;
									  default: r7 <= tempA | tempB;
								 endcase
							end
							NOT:
							begin
								 
								 case(word[7:5])//set tempA
									  reg0: tempA = r0;// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
									  reg1: tempA = r1;//reg1
									  reg2: tempA = r2;//reg2
									  reg3: tempA = r3;//reg3
									  reg4: tempA = r4;//reg4
									  reg5: tempA = r5;//reg5
									  reg6: tempA = r6;//reg6
									  default: tempA = r7;
								 endcase
								 case(word[10:8])//destination reg
									  reg0: r0 <= ~(tempA);
									  reg1: r1 <= ~(tempA);
									  reg2: r2 <= ~(tempA);
									  reg3: r3 <= ~(tempA);
									  reg4: r4 <= ~(tempA);
									  reg5: r5 <= ~(tempA);
									  reg6: r6 <= ~(tempA);
									  default: r7 <= ~(tempA);
								 endcase
							end
							storel:
							begin
								write_memory <= 1'b0;
							end
							default:
							begin
								
							end
						endcase
               end
            end
            phase2:
				begin
					//do mem stuff with flags and shit
					write_memory <= 1'b0;
					
					if (memory_ready && load_store)
					begin
						memory_ready <= 1'b0;
						case(reg_to_store)
							reg0: r0 <= data_out;
							reg1:	r1 <= data_out;
							reg2:	r2 <= data_out;
							reg3:	r3 <= data_out;
							reg4:	r4 <= data_out;
							reg5:	r5 <= data_out;
							reg6:	r6 <= data_out;
							default: r7 <= data_out;
						endcase
					end
					
					if(jump_amount > 1'b0)
					begin
						if(jump_amount[0] == 1'b1)
						begin
							memory_location <= {9'b0,pc_counter - jump_amount[10:1]};
							pc_counter <= pc_counter - jump_amount[10:1];
						end
						else
						begin
							memory_location <= {9'b0,pc_counter + jump_amount[10:1]};
							pc_counter <= pc_counter + jump_amount[10:1];
						end

						jump_amount <= 11'b0;
					end
					else
					begin
						memory_location <= {9'b0,pc_counter + 1'b1};
						pc_counter <= pc_counter + 1'b1;
					end
				end
            default: //clean up phase
            begin
					display <= {r7,r6,r5,r4,r3,r2,r1,r0};
            end				
        endcase
	 end
endmodule