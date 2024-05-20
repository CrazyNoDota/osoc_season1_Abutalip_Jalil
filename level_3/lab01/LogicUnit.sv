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