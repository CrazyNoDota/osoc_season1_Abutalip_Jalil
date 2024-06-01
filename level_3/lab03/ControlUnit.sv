module ControlUnit(
    input clk,
    input reset,
    input logic [15:0] instruction,
    input run,
    output logic [3:0] alu_sel,
    output logic [3:0] mux_sel,
    output mode,
    output en_s,
    output en_c,
    output en_0,
    output en_1,
    output en_2,
    output en_3,
    output en_4,
    output en_5,
    output en_6,
    output en_7,
    output en_inst
);

    typedef enum logic [1:0] {S0, S1, S2} state_t;
    state_t state, next_state;

    always@(posedge clk) begin
        state <= (reset) ? S0 : next_state;
    end

    always@(*) begin
        case(state):
                S0: begin 
                    mux_sel = instruction[15:13];
                    en_s = 1;
                    en_c = 0;
                    en_r = 0;
                    alu_sel = 4'b0;
                end

    end

endmodule