// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VBITTY__SYMS_H_
#define _VBITTY__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VBitty.h"
#include "VBitty_Bitty.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VBitty__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VBitty*                        TOPp;
    VBitty_Bitty                   TOP__Bitty;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_Bitty;
    
    // CREATORS
    VBitty__Syms(VBitty* topp, const char* namep);
    ~VBitty__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
