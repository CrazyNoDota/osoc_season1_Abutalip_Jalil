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
    top->clk = 0;
    top->reset = 1;
    top->data = 0;

    // Deassert reset after a few cycles
    for (int i = 0; i < 10; ++i) {
        top->clk ^= 1;
        top->eval();
        tfp->dump(i);
    }
    top->reset = 0;

    // Test sequence: 1101
    int test_sequence[] = {1, 1, 0, 1};
    int seq_len = sizeof(test_sequence) / sizeof(test_sequence[0]);
    int seq_index = 0;

    for (int simcyc = 10; simcyc < MAX_SIM_CYCLES; simcyc++) {
        top->clk ^= 1;
        
        // Apply test stimulus
        if (top->clk == 1) {
            top->data = test_sequence[seq_index];
            seq_index = (seq_index + 1) % seq_len;
        }

        top->eval();
        tfp->dump(simcyc);

        // Print signals at each cycle
        printf("Cycle: %d, state: %d, start_shifting: %d\n", simcyc, top->state_out, top->start_shifting);
    }

    tfp->close();
    delete top;
    return 0;
}
