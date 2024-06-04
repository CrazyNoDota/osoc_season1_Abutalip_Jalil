module ControlUnit(
    input clk,
    input reset,
    input logic [15:0] instruction,
    input run,
    output logic [3:0] alu_sel,
    output logic [3:0] mux_sel,
    output mode,
    output en_s, // reg_en[1] d_in[0] 
    output en_c, // d_in[1]
    output en_0, // d_in[2]
    output en_1, //3
    output en_2, //4
    output en_3, //5
    output en_4, //6
    output en_5, //7
    output en_6, //8
    output en_7, //9
    output en_inst, //10
    output logic done
);

    typedef enum logic [1:0] {S0, S1, S2} state_t;
    state_t state, next_state;

    always@(posedge clk) begin
        if (reset) begin
            state <= S0;
            done <= 0;
        end
        state <= next_state;
    end

    always@(*) begin
        case(state):
                S0: begin 
                    mux_sel = instruction[15:13];
                    en_s = 1;
                    next_state = S1;
                    en_c = 0;
                    en_0 = 0;
                    en_1 = 0;
                    en_2 = 0;
                    en_3 = 0;
                    en_4 = 0;
                    en_5 = 0;
                    en_6 = 0;
                    en_7 = 0;
                    done = 0;
                end
                S1: begin
                    mux_sel = instruction[12:10];
                    en_s = 0;
                    en_c = 1;
                    alu_sel = instruction[6:3];
                    alu_mode = instruction[2];
                    done = 0;
                    next_state = S2;
                    
                end
                S2: begin
                    done = 1;
                    next_state = S0;
                    case(instruction[15:13]):
                        4'd1: en_0 = 1;
                        4'd2: en_1 = 1;
                        4'd3: en_2 = 1;
                        4'd4: en_3 = 1;
                        4'd5: en_4 = 1;
                        4'd6: en_5 = 1;
                        4'd7: en_6 = 1;
                        4'd8: en_7 = 1;

                    endcase
                end

    end

endmodule