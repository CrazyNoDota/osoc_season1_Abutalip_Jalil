#include "VBitty.h"
#include <verilated.h>
#include "verilated_vcd_c.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
#include <stdlib.h>

#define MAX_SIM_CYCLES 300

class Bitty{
    
    uint32_t result;
    
    public:
        int Rx, Ry, alu_sel, mode;
        uint16_t registers[12];

        void fill(int reg, uint16_t data){
            registers[reg] = data;
        }
        uint16_t evaluate(){
            int output = 0;
            if(mode == 1){ // Logic
                switch (alu_sel)
                {
                case 0: output = ~registers[Rx];
                    break;
                case 1: output = ~(registers[Rx] + registers[Ry]);
                    break;
                case 2: output = (~registers[Rx] & (registers[Ry]));
                    break;
                case 3: output = 0;
                    break;
                case 4: output = ~(registers[Rx] & registers[Ry]);
                    break;
                case 5: output = ~registers[Ry];
                    break;
                case 6: output = registers[Rx] ^ registers[Ry];
                    break;
                case 7: output = registers[Rx] & (~registers[Ry]);
                    break;
                case 8: output = (~registers[Rx]) | (registers[Ry]);
                    break;
                case 9: output = ~(registers[Rx] ^ registers[Ry]);
                    break;
                case 10: output = (registers[Ry]);
                    break;
                case 11: output = registers[Rx] & registers[Ry];
                    break;
                case 12: output = 1;
                    break;
                case 13: output = registers[Rx] | (~registers[Ry]);
                    break;
                case 14: output = registers[Rx] | registers[Ry];
                    break;
                case 15: output = registers[Rx];
                    break;
                default: output = 4;
                    break;
                }
            }else{
                
                switch (alu_sel)
                {
                case 0: output = registers[Rx];
                    break;
                case 1: output = registers[Rx] | registers[Ry];
                    break;
                case 2: output = registers[Rx] | (~registers[Ry]);
                    break;
                case 3: output = -1;
                    break;
                case 4: output = registers[Rx] | (registers[Rx]&(~registers[Ry]));
                    break;
                case 5: output = (registers[Rx] | registers[Ry]) + registers[Rx]&(~registers[Ry]);
                    break;
                case 6: output = registers[Rx] - registers[Ry] - 1;
                    break;
                case 7: output = registers[Rx]&(~registers[Ry]) - 1;
                    break;
                case 8: output = registers[Rx] + registers[Rx]&registers[Ry];
                    break;
                case 9: output = registers[Rx] + registers[Ry];
                    break;
                case 10: output = (registers[Rx] | (~registers[Ry])) + (registers[Rx]&registers[Ry]);
                    break;
                case 11: output = (registers[Rx] & registers[Ry]) - 1;
                    break;
                case 12: output = (registers[Rx] + registers[Rx]);
                    break;
                case 13: output = (registers[Rx] | registers[Ry]) + registers[Rx];
                    break;
                case 14: output = (registers[Rx] + (~registers[Ry])) + registers[Rx];
                    break;
                case 15: output = registers[Rx] - 1;
                    break;
                
                default:
                    break;
                }
            
            }

            return output;
        }
        
        uint32_t print(){
            return result;
        }
        
        int32_t generate_inst() {
            uint16_t inst = 0;

            srand(time(nullptr));
            Rx = rand() % 8;
            Ry = rand() % 8;
            alu_sel = rand() % 16;
            mode = rand() % 2;
            inst |= (Rx << 13);
            inst |= (Ry << 10);
            inst |= (alu_sel << 3);
            inst |= (mode << 2);

            return inst;
        }

};

int main (int argc, char **argv, char **env) {

    Verilated::commandArgs(argc, argv);
    VBitty *top = new VBitty;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    srand(time(nullptr));
    
    Bitty bitty;
    
    top->clk = 0;
    top->clk = 1;
    for(int i = 2; i <= 9; i++){
        top->regen[i] = 1;
    }
        

    for(int i = 2; i <= 9; i++){
        int data = (rand() % 10000)  + 1;
        top->regs[i] = data;
        bitty.fill(i, data);
    }
    
        
    for(int cycle = 0; cycle < 100; cycle++){
        
        top->clk ^= 1;
        if(cycle % 4 == 0){
            uint16_t inst = bitty.generate_inst();
            top->din = inst;
             
            if(bitty.evaluate() != top->dout[bitty.Rx]){
                std::cout<<"Failed testcase real: "<<top->dout[bitty.Rx]<<" synthesis: "<<bitty.evaluate()<<" /n bitty.Rx = "<<bitty.Rx<<"\n";
            }
            
        }
        top->eval();
        tfp->dump(cycle);


        
    }
    tfp->close();
    delete top;

}