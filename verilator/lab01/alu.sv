module ALU(
	input logic carry_in,
	input logic [15:0] in_a,
	input logic [15:0] in_b,
	input logic [3:0] sel,
	input logic mode,
	output logic carry_out,
	output logic compare,
	output logic [15:0] alu_out
	);
	reg[15:0] temp_a_out;
	reg[15:0] temp_l_out;
	ArithmeticUnit myArithUnit(carry_in, in_a, in_b, sel,carry_out, temp_a_out);
	LogicUnit myLogicUnit(in_a, in_b,sel, temp_l_out);

	always@* begin
		case(mode)
			1'b0:alu_out = temp_a_out;
			1'b1:alu_out = temp_l_out;
		endcase
	end





	endmodule


module LogicUnit(
	input logic [15:0] in_a,
	input logic [15:0] in_b,
	input logic [3:0] sel,
	output logic [15:0] alu_out
	);

	always@* begin
		case(sel)
			4'b0000: alu_out = ~in_a;
			4'b0001: alu_out = ~(in_a | in_b);
			4'b0010: alu_out = (~in_a) & in_b;
			4'b0011: alu_out = 0;
			4'b0100: alu_out = ~(in_a & in_b);
			4'b0101: alu_out = ~in_b;
			4'b0110: alu_out = in_a ^ in_b;
			4'b0111: alu_out = in_a & ~in_b;
			4'b1000: alu_out = ~in_a | in_b;
			4'b1001: alu_out = ~(in_a ^ in_b);
			4'b1010: alu_out = in_b;
			4'b1011: alu_out = in_a & in_b;
			4'b1100: alu_out = 1;
			4'b1101: alu_out = in_a | ~in_b;
			4'b1110: alu_out = in_a | in_b;
			4'b1111: alu_out = in_a;
		endcase
	end


	endmodule

module ArithmeticUnit(
	input logic carry_in,
	input logic [15:0] in_a,
	input logic [15:0] in_b,
	input logic [3:0] sel,
	output logic carry_out,
	output logic [15:0] alu_out
	);
	

	always@* begin
		case(sel)
			4'b0000: alu_out = in_a;
			4'b0001: alu_out = in_a | in_b;
			4'b0010: alu_out = in_a | (~in_b);
			4'b0011: alu_out = -16'b0000000000000001;
			4'b0100: alu_out = in_a | (in_a & ~in_b);
			4'b0101: alu_out = (in_a | in_b) + ~(in_a & in_b);
			4'b0110: alu_out = in_a - in_b - 1;
			4'b0111: alu_out = (in_a & (~in_b)) - 1;
			4'b1000: alu_out = in_a + (in_a & in_b);
			4'b1001: alu_out = in_a + in_b;
			4'b1010: alu_out = (in_a | (~in_b)) + (in_a & in_b);
			4'b1011: alu_out = (in_a & in_b) - 1;
			4'b1100: alu_out = in_a + in_a;
			4'b1101: alu_out = (in_a | in_b) + in_a;
			4'b1110: alu_out = (in_a + (~in_b)) + in_a;
			4'b1111: alu_out = in_a - 1;


		endcase
	
	end
endmodule



