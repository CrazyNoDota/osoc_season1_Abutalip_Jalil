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
			4'b0000: {carry_out,alu_out} = {1'b0, in_a} + {15'b0, carry_in};
			4'b0001: {carry_out,alu_out} = {1'b0,in_a} | {1'b0,in_b} + {15'b0, carry_in};
			4'b0010: {carry_out,alu_out} = {1'b0, in_a} | {1'b0, (~in_b)} + {15'b0, carry_in};
			4'b0011: {carry_out,alu_out} = {1'b1, 16'b0000000000000001} + {15'b0, carry_in};
			4'b0100: {carry_out,alu_out} = {1'b0, in_a} | ({1'b0,in_a} & {1'b0, (~in_b)}) + {15'b0, carry_in};
			4'b0101: {carry_out,alu_out} = ({1'b0,in_a} | {1'b0,in_b}) + (~({1'b0,in_a} & {1'b0,in_b})) + {15'b0, carry_in};
			4'b0110: {carry_out,alu_out} = {1'b0,in_a} - {1'b0,in_b} - 1 + {15'b0, carry_in};
			4'b0111: {carry_out,alu_out} = ({1'b0,in_a} & {1'b0, (~in_b)}) - 1 + {15'b0, carry_in};
			4'b1000: {carry_out,alu_out} = {1'b0,in_a} + ({1'b0,in_a} & {1'b0,in_b}) + {15'b0, carry_in};
			4'b1001: {carry_out,alu_out} = {1'b0,in_a} + {1'b0,in_b} + {15'b0, carry_in};
			4'b1010: {carry_out,alu_out} = ({1'b0,in_a} | {1'b0,(~in_b)}) + ({1'b0,in_a} & {1'b0,in_b}) + {15'b0, carry_in};
			4'b1011: {carry_out,alu_out} = ({1'b0, in_a} & {1'b0,in_b}) - 1 + {15'b0, carry_in};
			4'b1100: {carry_out,alu_out} = {1'b0, in_a} + {1'b0, in_a} + {15'b0, carry_in};
			4'b1101: {carry_out,alu_out} = ({1'b0, in_a} | {1'b0,in_b}) + {1'b0, in_a} + {15'b0, carry_in};
			4'b1110: {carry_out,alu_out} = ({1'b0, in_a} + {1'b0,(~in_b)}) + {1'b0, in_a} + {15'b0, carry_in};
			4'b1111: {carry_out,alu_out} = {1'b0, in_a} - 1 + {15'b0, carry_in};


		endcase
	
	end
endmodule
