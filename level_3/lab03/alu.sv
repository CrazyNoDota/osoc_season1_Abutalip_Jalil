module alu(
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
	reg arithmetic_carry_out;
	ArithmeticUnit myArithUnit(carry_in, in_a, in_b, sel,arithmetic_carry_out, temp_a_out);
	LogicUnit myLogicUnit(in_a, in_b,sel, temp_l_out);

	always@* begin
		case(mode)
			1'b0: begin 
				alu_out = temp_a_out;
				carry_out = arithmetic_carry_out;	
			end
			1'b1:begin
				alu_out = temp_l_out;
				carry_out = 0;
			end
		endcase
	end
	assign compare = (in_a == in_b);




	endmodule






