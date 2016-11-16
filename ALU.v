`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:46:27 10/21/2016 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input CLK,
    input [127:0] regUpdates,
	 input [15:0]camera,
	 input [15:0] move_command,
	 input [15:0] data_out,
	 input [14:0] pc_counter,
	 input [1:0] phase,
	 output reg [23:0] memory_location,
	 output reg [15:0] memory_input,
	 output reg [127:0] regOut,
	 output write_memory
    );

    parameter [14:0] termination_line = 15'd256;
    
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
	 reg [7:0] right_servo = 8'b0; //if top bit == 1 forward if 0 backwards
	 reg [7:0] left_servo = 8'b0;
	 reg [7:0] hi_part = 8'b0;
	 reg [2:0] reg_to_store = 3'b0;
	 reg memory_flag = 1'b0;
	 reg memory_ready = 1'b0;
	 reg write_memory = 1'b0;
	 reg load_store = 1'b0; // if 1 load
     
	  
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
        case(phase)//case of phases of the CPU
            phase0:
            begin 
                word <= data_out;
					 
					 r0 <= regUpdates[15:0];
					 r1 <= regUpdates[31:16];
					 r2 <= regUpdates[47:32];
					 r3 <= regUpdates[63:48];
					 r4 <= regUpdates[79:64];
					 r5 <= regUpdates[95:80];
					 r6 <= regUpdates[111:96];
					 r7 <= regUpdates[127:12];
            end
            phase1:
            begin 
                if(memory_flag)
                begin
                    case(reg_to_store)
                        reg0:  memory_input <= regUpdates[15:0];
                        reg1:	memory_input <= regUpdates[31:16];
                        reg2:	memory_input <= regUpdates[47:32];
                        reg3:	memory_input <= regUpdates[63:48];
                        reg4:	memory_input <= regUpdates[79:64];
                        reg5:	memory_input <= regUpdates[95:80];
                        reg6:	memory_input <= regUpdates[111:96];
                        default: memory_input <= regUpdates[127:112];
                    endcase
                    write_memory <= ~(load_store);	
                    memory_ready <= 1'b1;
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
                                reg0: tempA = regUpdates[15:0];// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
                                reg1: tempA = regUpdates[31:16];//reg1
                                reg2: tempA = regUpdates[47:32];//reg2
                                reg3: tempA = regUpdates[63:48];//reg3
                                reg4: tempA = regUpdates[79:64];//reg4
                                reg5: tempA = regUpdates[95:80];//reg5
                                reg6: tempA = regUpdates[111:96];//reg6
                                default: tempA = regUpdates[127:112];
                            endcase					
                            case(word[4:2])//set tempB
                                reg0: tempB = regUpdates[15:0];// if ( word[4:2] = 3'b000 ) set tempB = to the value in reg 0
                                reg1: tempB = regUpdates[31:16];//reg1
                                reg2: tempB = regUpdates[47:32];//reg2
                                reg3: tempB = regUpdates[63:48];//reg3
                                reg4: tempB = regUpdates[79:64];//reg4
                                reg5: tempB = regUpdates[95:80];//reg5
                                reg6: tempB = regUpdates[111:96];//reg6
                                default: tempB = regUpdates[127:112];
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
                                reg0: tempA = regUpdates[15:0];// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
                                reg1: tempA = regUpdates[31:16];//reg1
                                reg2: tempA = regUpdates[47:32];//reg2
                                reg3: tempA = regUpdates[63:48];//reg3
                                reg4: tempA = regUpdates[79:64];//reg4
                                reg5: tempA = regUpdates[95:80];//reg5
                                reg6: tempA = regUpdates[111:96];//reg6
                                default: tempA = regUpdates[127:112];
                            endcase					
                            case(word[4:2])//set tempB
                                reg0: tempB= regUpdates[15:0];// if ( word[4:2] = 3'b000 ) set tempB = to the value in reg 0
                                reg1: tempB = regUpdates[31:16];//reg1
                                reg2: tempB = regUpdates[47:32];//reg2
                                reg3: tempB = regUpdates[63:48];//reg3
                                reg4: tempB = regUpdates[79:64];//reg4
                                reg5: tempB = regUpdates[95:80];//reg5
                                reg6: tempB = regUpdates[111:96];//reg6
                                default: tempB = regUpdates[127:112];
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
                                reg0: tempA = regUpdates[15:0];// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
                                reg1: tempA = regUpdates[31:16];//reg1
                                reg2: tempA = regUpdates[47:32];//reg2
                                reg3: tempA = regUpdates[63:48];//reg3
                                reg4: tempA = regUpdates[79:64];//reg4
                                reg5: tempA = regUpdates[95:80];//reg5
                                reg6: tempA = regUpdates[111:96];//reg6
                                default: tempA = regUpdates[127:112];
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
                                reg0: tempA = regUpdates[15:0] << word[4:1];// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
                                reg1: tempA = regUpdates[31:16] << word[4:1];//reg1
                                reg2: tempA = regUpdates[47:32] << word[4:1];//reg2
                                reg3: tempA = regUpdates[63:48] << word[4:1];//reg3
                                reg4: tempA = regUpdates[79:64] << word[4:1];//reg4
                                reg5: tempA = regUpdates[95:80] << word[4:1];//reg5
                                reg6: tempA = regUpdates[111:96] << word[4:1];//reg6
                                default: tempA = regUpdates[127:112] << word[4:1];
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
                                reg0: tempA = regUpdates[15:0] >> word[4:1];// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
                                reg1: tempA = regUpdates[31:16] >> word[4:1];//reg1
                                reg2: tempA = regUpdates[47:32] >> word[4:1];//reg2
                                reg3: tempA = regUpdates[63:48] >> word[4:1];//reg3
                                reg4: tempA = regUpdates[79:64] >> word[4:1];//reg4
                                reg5: tempA = regUpdates[95:80] >> word[4:1];//reg5
                                reg6: tempA = regUpdates[111:96] >> word[4:1];//reg6
                                default: tempA = regUpdates[127:112] >> word[4:1];
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
                                    right_servo <= regUpdates[7:0];
                                    left_servo <= regUpdates[15:8];
                                end
                                reg1:
                                begin
                                    right_servo <= regUpdates[23:16];
                                    left_servo <= regUpdates[31:24];
                                end
                                reg2:
                                begin
                                    right_servo <= regUpdates[39:32];
                                    left_servo <= regUpdates[47:40];
                                end
                                reg3:
                                begin
                                    right_servo <= regUpdates[55:48];
                                    left_servo <= regUpdates[63:56];
                                end
                                reg4:
                                begin
                                    right_servo <= regUpdates[71:64];
                                    left_servo <= regUpdates[79:72];
                                end
                                reg5:
                                begin
                                    right_servo <= regUpdates[87:80];
                                    left_servo <= regUpdates[95:88];
                                end
                                reg6:
                                begin
                                    right_servo <= regUpdates[103:96];
                                    left_servo <= regUpdates[111:104];
                                end
                                default:
                                begin
                                    right_servo <= regUpdates[119:112];
                                    left_servo <= regUpdates[127:120];
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
                                reg0: tempA = regUpdates[15:0];// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
                                reg1: tempA = regUpdates[31:16];//reg1
                                reg2: tempA = regUpdates[47:32];//reg2
                                reg3: tempA = regUpdates[63:48];//reg3
                                reg4: tempA = regUpdates[79:64];//reg4
                                reg5: tempA = regUpdates[95:80];//reg5
                                reg6: tempA = regUpdates[111:96];//reg6
                                default: tempA = regUpdates[127:112];
                            endcase					
                            case(word[7:5])//set tempB
                                reg0: tempB= regUpdates[15:0];// if ( word[4:2] = 3'b000 ) set tempB = to the value in reg 0
                                reg1: tempB = regUpdates[31:16];//reg1
                                reg2: tempB = regUpdates[47:32];//reg2
                                reg3: tempB = regUpdates[63:48];//reg3
                                reg4: tempB = regUpdates[79:64];//reg4
                                reg5: tempB = regUpdates[95:80];//reg5
                                reg6: tempB = regUpdates[111:96];//reg6
                                default: tempB = regUpdates[127:112];
                            endcase		
                            if(tempA != tempB)
                            begin
                                jump_amount <= word[4:0];
                            end
                        end
                        beq:
                        begin
                            case(word[10:8])//set tempA
                                reg0: tempA = regUpdates[15:0];// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
                                reg1: tempA = regUpdates[31:16];//reg1
                                reg2: tempA = regUpdates[47:32];//reg2
                                reg3: tempA = regUpdates[63:48];//reg3
                                reg4: tempA = regUpdates[79:64];//reg4
                                reg5: tempA = regUpdates[95:80];//reg5
                                reg6: tempA = regUpdates[111:96];//reg6
                                default: tempA = regUpdates[127:112];
                            endcase					
                            case(word[7:5])//set tempB
                                reg0: tempB= regUpdates[15:0];// if ( word[4:2] = 3'b000 ) set tempB = to the value in reg 0
                                reg1: tempB = regUpdates[31:16];//reg1
                                reg2: tempB = regUpdates[47:32];//reg2
                                reg3: tempB = regUpdates[63:48];//reg3
                                reg4: tempB = regUpdates[79:64];//reg4
                                reg5: tempB = regUpdates[95:80];//reg5
                                reg6: tempB = regUpdates[111:96];//reg6
                                default: tempB = regUpdates[127:112];
                            endcase		
                            if(tempA == tempB)
                            begin
                                jump_amount <= word[4:0];
                            end
                        end
                        slt:
                        begin
                            case(word[7:5])//set tempA
                                reg0: tempA = regUpdates[15:0];// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
                                reg1: tempA = regUpdates[31:16];//reg1
                                reg2: tempA = regUpdates[47:32];//reg2
                                reg3: tempA = regUpdates[63:48];//reg3
                                reg4: tempA = regUpdates[79:64];//reg4
                                reg5: tempA = regUpdates[95:80];//reg5
                                reg6: tempA = regUpdates[111:96];//reg6
                                default: tempA = regUpdates[127:112];
                            endcase					
                            case(word[4:2])//set tempB
                                reg0: tempB = regUpdates[15:0];// if ( word[4:2] = 3'b000 ) set tempB = to the value in reg 0
                                reg1: tempB = regUpdates[31:16];//reg1
                                reg2: tempB = regUpdates[47:32];//reg2
                                reg3: tempB = regUpdates[63:48];//reg3
                                reg4: tempB = regUpdates[79:64];//reg4
                                reg5: tempB = regUpdates[95:80];//reg5
                                reg6: tempB = regUpdates[111:96];//reg6
                                default: tempB = regUpdates[127:112];
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
                                reg0: tempA = regUpdates[15:0];// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
                                reg1: tempA = regUpdates[31:16];//reg1
                                reg2: tempA = regUpdates[47:32];//reg2
                                reg3: tempA = regUpdates[63:48];//reg3
                                reg4: tempA = regUpdates[79:64];//reg4
                                reg5: tempA = regUpdates[95:80];//reg5
                                reg6: tempA = regUpdates[111:96];//reg6
                                default: tempA = regUpdates[127:112];
                            endcase					
                            case(word[4:2])//set tempB
                                reg0: tempB = regUpdates[15:0];// if ( word[4:2] = 3'b000 ) set tempB = to the value in reg 0
                                reg1: tempB = regUpdates[31:16];//reg1
                                reg2: tempB = regUpdates[47:32];//reg2
                                reg3: tempB = regUpdates[63:48];//reg3
                                reg4: tempB = regUpdates[79:64];//reg4
                                reg5: tempB = regUpdates[95:80];//reg5
                                reg6: tempB = regUpdates[111:96];//reg6
                                default: tempB = regUpdates[127:112];
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
                                reg0: tempA = regUpdates[15:0];// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
                                reg1: tempA = regUpdates[31:16];//reg1
                                reg2: tempA = regUpdates[47:32];//reg2
                                reg3: tempA = regUpdates[63:48];//reg3
                                reg4: tempA = regUpdates[79:64];//reg4
                                reg5: tempA = regUpdates[95:80];//reg5
                                reg6: tempA = regUpdates[111:96];//reg6
                                default: tempA = regUpdates[127:112];
                            endcase					
                            case(word[4:2])//set tempB
                                reg0: tempB = regUpdates[15:0];// if ( word[4:2] = 3'b000 ) set tempB = to the value in reg 0
                                reg1: tempB = regUpdates[31:16];//reg1
                                reg2: tempB = regUpdates[47:32];//reg2
                                reg3: tempB = regUpdates[63:48];//reg3
                                reg4: tempB = regUpdates[79:64];//reg4
                                reg5: tempB = regUpdates[95:80];//reg5
                                reg6: tempB = regUpdates[111:96];//reg6
                                default: tempB = regUpdates[127:112];
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
                                reg0: tempA = regUpdates[15:0];// if ( word[7:5] = 3'b000 ) set tempA = to the value in reg 0
                                reg1: tempA = regUpdates[31:16];//reg1
                                reg2: tempA = regUpdates[47:32];//reg2
                                reg3: tempA = regUpdates[63:48];//reg3
                                reg4: tempA = regUpdates[79:64];//reg4
                                reg5: tempA = regUpdates[95:80];//reg5
                                reg6: tempA = regUpdates[111:96];//reg6
                                default: tempA = regUpdates[127:112];
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
                        default:
                        begin
                            //do nothing
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

					/*
					if(jump_amount > 1'b0)
					begin
						if(jump_amount[0] == 1'b1)
							pc_counter <= pc_counter - jump_amount[10:1];
						else
							pc_counter <= pc_counter + jump_amount[10:1];

						jump_amount <= 11'b0;
					end
					else
						pc_counter <= pc_counter + 1'b1;
					*/
				end
            default: //clean up phase
            begin
                memory_location <= {9'b0,pc_counter};
                regOut <= {r7,r6,r5,r4,r3,r2,r1,r0};
            end				
        endcase
	 end

endmodule
