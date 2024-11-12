// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VBitty__Syms.h"
#include "VBitty.h"
#include "VBitty_Bitty.h"



// FUNCTIONS
VBitty__Syms::VBitty__Syms(VBitty* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__Bitty(Verilated::catName(topp->name(), "Bitty"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->Bitty = &TOP__Bitty;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__Bitty.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_Bitty.configure(this, name(), "Bitty", "Bitty", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_Bitty.varInsert(__Vfinal,"d_in", &(TOP__Bitty.d_in), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,10,0);
        __Vscope_Bitty.varInsert(__Vfinal,"d_out", &(TOP__Bitty.d_out), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,10,0);
        __Vscope_Bitty.varInsert(__Vfinal,"reg_en", &(TOP__Bitty.reg_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
    }
}
