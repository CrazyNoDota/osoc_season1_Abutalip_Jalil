#include <verilated.h>
#include "Valu.h"
#include "verilated_vcd_c.h"

#define MAX_SIM_CYCLES 300

class Bitty{
    uint32_t registers[12];
    uint32_t din;
    public: 
        Bitty() = default;
        void Evaluate(int32_t din){
            
        }
        
        
        int32_t generate_inst(&din) {
            int Rx   
        };

}

int main (int argc, char **argv, char **env) {

    Verilated::commandArgs(argc, argv);
    Valu *top = new Valu;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    Varilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    top->clk = 0;
    top->reset = 1;
    top->data = 0;

    for(int i = 0; i < 10; i++){
        top->clk ^= 1;
        top->eval();
        tfp->dump(i);
    }
    top->reset = 0;

}