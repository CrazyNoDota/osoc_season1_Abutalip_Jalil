#include <verilated.h>
#include "Valu.h"
#include "verilated_vcd_c.h"

#define MAX_SIM_CYCLES 150

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Valu *top = new Valu;

    // Initialize Verilator tracing
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    // Initialize inputs
    top->clk = 1;
    top->reset = 1;
    top->data = 1;

    // Run simulation for MAX_SIM_CYCLES
    for (int simcyc = 0; simcyc < MAX_SIM_CYCLES; simcyc++) {
        top->clk ^= 1; 
        
        top->eval();
        tfp->dump(simcyc);
        
        if(simcyc % 4 == 0){
            top->data ^= 1;
        }
        

        // Apply test stimulus
        

        // Print signals at each cycle
        
        printf("Cycle: %d, state: %d, start_shifting: %d\n", simcyc, top->state_out, top->start_shifting);
        
    }                                       

    tfp->close();
    delete top;
    return 0;
}
