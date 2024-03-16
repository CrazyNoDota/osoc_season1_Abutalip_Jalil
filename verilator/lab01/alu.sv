module ALU(
	input wire	carry_in,
	input wire [15:0] in_a,
	input wire [15:0] in_b,
	input wire [3:0] sel,
	input wire mode,
	output wire carry_out,
	output wire compare,
	output wire [15:0] alu_out
	);

	always@* begin
		case(mode)
			1'b0: begin

			end
			1'b1: begin
				myUnit LogicUnit(in_a, in_b,sel, alu_out);
			end
	end



	endmodule


module LogicUnit(
	input wire [15:0] in_a,
	input wire [15:0] in_b,
	input wire [3:0] sel,
	output wire [15:0] alu_out
	);

	always@* begin
		case(sel)
			4'b0000: alu_out = !in_a;
			4'b0001: alu_out = !(in_a | in_b);
			4'b0010: alu_out = (!in_a) & in_b;
			4'b0011: alu_out = 0;
			4'b0100: alu_out = !(in_a & in_b);
			4'b0101: alu_out = !in_b;
			4'b0110: alu_out = in_a ^ in_b;
			4'b0111: alu_out = in_a & !in_b;
			4'b1000: alu_out = !in_a | in_b;
			4'b1001: alu_out = !(in_a ^ in_b);
			4'b1010: alu_out = in_b;
			4'b1011: alu_out = in_a & in_b;
			4'b1100: alu_out = 1;
			4'b1101: alu_out = in_a | !in_b;
			4'b1110: alu_out = in_a | in_b;
			4'b1111: alu_out = in_a;
		endcase
	end


	endmodule

module ArithmeticUnit(
	input wire carry_in,
	input wire [15:0] in_a,
	input wire [15:0] in_b,
	input wire [3:0] sel,
	output wire carry_out,
	output wire alu_out[15:0]
	);
	

	always@* begin
		case(sel)
			4'b0000: alu_out = in_a;
			4'b0001: alu_out = in_a | in_b;
			4'b0010: alu_out = in_a | (!in_b);
			4'b0011: alu_out = -16'b0000000000000001;
			4'b0100: alu_out = in_a | (in_a & !in_b);
			4'b0110: alu_out = in_a - in_b - 1;
			4'b0111: alu_out = (in_a & (!in_b)) - 1;
			4'b1000: alu_out = in_a + (in_a & in_b);
			4'b1001: alu_out = in_a + in_b;
			4'b1010: alu_out = (in_a | (!in_b)) + (in_a & in_b);
			4'b1011: alu_out = (in_a & in_b) - 1;
			4'b1100: alu_out = in_a + in_a;
			4'b1101: alu_out = (in_a | in_b) + in_a;
			4'b1110: alu_out = (in_a + (!in_b)) + in_a;
			4'b1111: alu_out = in_a - 1;


		endcase
	
	end
endmodule



