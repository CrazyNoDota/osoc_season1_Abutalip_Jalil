module ControlUnit(
    input clk,
    input reset,
    input logic [15:0] instruction,
    input run,
    output logic [3:0] alu_sel,
    output logic [2:0] mux_sel,
    output mode,
    output en_s, // reg_en[0] d_in[0] 
    output en_c, // d_in[1] reg_en[1]
    output en_0, // d_in[2] reg_en[2]
    output en_1, //3 d_in[3] reg_en[3]
    output en_2, //4
    output en_3, //5
    output en_4, //6
    output en_5, //7
    output en_6, //8
    output en_7, //9
    output en_inst, //10
    output logic done
);

    typedef enum logic [1:0] {S0, S1, S2, IDLE} state_t;
    state_t state, next_state;
    
    always@(posedge clk or posedge reset) begin
        if (reset) begin
            state <= S0;
        end else begin
            state <= next_state;
        end
    end

    always@(*) begin
        case(state)
                IDLE: begin
                    done = 0;
                    next_state = S0;
                    en_inst = 1;
                    if (run)
                        next_state = S0;
                    else
                        next_state = IDLE;
                end
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
                    en_inst = 0;
                end
                S1: begin
                    mux_sel = instruction[12:10];
                    en_s = 0;
                    en_c = 1;
                    alu_sel = instruction[6:3];
                    mode = instruction[2];
                    done = 0;
                    next_state = S2;
                    
                end
                S2: begin
                    done = 1;
                    next_state = IDLE;
                    en_inst = 1;
                    case(instruction[15:13])
                        3'd0: en_0 = 1;
                        3'd1: en_1 = 1;
                        3'd2: en_2 = 1;
                        3'd3: en_3 = 1;
                        3'd4: en_4 = 1;
                        3'd5: en_5 = 1;
                        3'd6: en_6 = 1;
                        3'd7: en_7 = 1;

                    endcase
                end
                default: next_state = S0;

        endcase

    end

endmodule