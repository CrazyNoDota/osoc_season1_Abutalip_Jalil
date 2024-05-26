module top_module (
    input clk,
    input reset,       
    input data,
    output start_shifting
);
    
    
    parameter S0 = 2'd0, S1 = 2'd1, S2 = 3'd2, S3 = 3'd3;
    reg [1:0] state, next_state;
    
    
    always @(*) begin
        case (state)
             S0: next_state = data ? S1 : S0;
             S1: next_state = data ? S2 : S0;
             S2: next_state = data ? S2: S3;
             S3: next_state = S0; 
             default: next_state = S0;
               
        endcase
    end
    
    always@(posedge clk) begin
        state <= reset ? S0: next_state;
    end
    
    always @(posedge clk) begin
        if(reset) begin
           start_shifting <= 0;
        end
        else begin
            start_shifting <= (data & (state == S3)) ? 1 : start_shifting;  
        end
    end

endmodule

