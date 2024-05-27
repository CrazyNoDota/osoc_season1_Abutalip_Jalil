module top_module (
    input clk,
    input reset,      // Synchronous reset
    input data,
    output [3:0] count,
    output counting,
    output done,
    input ack );
    logic [3:0] state, next_state;
    parameter S0 = 4'd0, S1 = 4'd1, S2 = 4'd2, S3 = 4'd3, B0 = 4'd4, COUNT = 4'd5, WAIT = 4'd6, B1 = 4'd7, B2 = 4'd8, B3 = 4'd9;
    logic shift_ena, done_counting;
    logic [15:0] timer_cnt;
    logic [3:0] delay;
    always@(*) begin
        case(state)
            S0: next_state = data ? S1 : S0;
            S1: next_state = data ? S2 : S0;
            S2: next_state = (!data) ? S3 : S2;
            S3: next_state = data ? B0 : S0;
            B0: next_state = B1;
            B1: next_state = B2;
            B2: next_state = B3;
            B3: next_state = COUNT;
            COUNT: next_state = (done_counting) ? WAIT : COUNT;
            WAIT: next_state = ack ? S0: WAIT;
        endcase
            
    end
    always@(posedge clk) begin
        if(reset) begin
            state <= S0;
        end
        else begin
            case(state)
                COUNT: state <= done_counting ? next_state : COUNT;
                default: state <= next_state; 
            endcase
        end
    end
    
    always@(posedge clk) begin
        if(reset) begin
            shift_ena <= 0;
        	counting <= 0;
        	done <= 0;
    	end
        else begin
            shift_ena <= (next_state == B0) | (next_state == B1) |(next_state == B2) | (next_state == B3);
            counting <= (next_state == COUNT);
            done <= (next_state == WAIT);
        end
    end
    
    always@(posedge clk) begin
        if(reset) begin
           delay <= 0; 
        end 
        else begin
            if(shift_ena) begin
                delay <= {delay[2:0], data};
            end
        end
    end
    
    always@(posedge clk) begin
        if(reset) begin
           timer_cnt <= 0;
        end 
        else begin
            timer_cnt <= (counting) ? timer_cnt + 1 : 0;
        end
    end
    
    always@(posedge clk) begin
        if(reset) begin
            done_counting <= 0;
        end
        else if(counting) begin
        	done_counting <= (((delay + 1) * 1000) - 1 == timer_cnt + 1); 
 
        end
    end
    
    always@(posedge clk) begin
        if(reset) begin
           count <= 0; 
        end
        else if(shift_ena) begin
            count <= {delay[2:0], data} - (timer_cnt+1) / 1000;
        end
        else begin
            count <= delay - (timer_cnt+1) / 1000; 
        end
    end

endmodule

