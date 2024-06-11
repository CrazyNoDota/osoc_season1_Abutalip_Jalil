// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBITTY_H_
#define _VBITTY_H_  // guard

#include "verilated.h"

//==========

class VBitty__Syms;
class VBitty_VerilatedVcd;


//----------

VL_MODULE(VBitty) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(done,0,0);
    VL_IN16(din,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*2:0*/ Bitty__DOT__mux_sel;
    CData/*0:0*/ Bitty__DOT__carry_in;
    CData/*3:0*/ Bitty__DOT__alu_sel;
    CData/*0:0*/ Bitty__DOT__mode;
    CData/*0:0*/ Bitty__DOT__carry_out;
    CData/*0:0*/ Bitty__DOT__run;
    CData/*0:0*/ Bitty__DOT__alu1__DOT__arithmetic_carry_out;
    CData/*1:0*/ Bitty__DOT__ControlUnit1__DOT__state;
    CData/*1:0*/ Bitty__DOT__ControlUnit1__DOT__next_state;
    SData/*15:0*/ Bitty__DOT__mux_out;
    SData/*15:0*/ Bitty__DOT__alu_out;
    SData/*15:0*/ Bitty__DOT__alu1__DOT__temp_a_out;
    SData/*15:0*/ Bitty__DOT__alu1__DOT__temp_l_out;
    SData/*15:0*/ Bitty__DOT__d_out[11];
    SData/*15:0*/ Bitty__DOT__d_in[11];
    CData/*0:0*/ Bitty__DOT__reg_en[11];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ Bitty__DOT____Vcellout__ControlUnit1__en_inst;
    CData/*0:0*/ Bitty__DOT____Vcellout__ControlUnit1__en_7;
    CData/*0:0*/ Bitty__DOT____Vcellout__ControlUnit1__en_6;
    CData/*0:0*/ Bitty__DOT____Vcellout__ControlUnit1__en_5;
    CData/*0:0*/ Bitty__DOT____Vcellout__ControlUnit1__en_4;
    CData/*0:0*/ Bitty__DOT____Vcellout__ControlUnit1__en_3;
    CData/*0:0*/ Bitty__DOT____Vcellout__ControlUnit1__en_2;
    CData/*0:0*/ Bitty__DOT____Vcellout__ControlUnit1__en_1;
    CData/*0:0*/ Bitty__DOT____Vcellout__ControlUnit1__en_0;
    CData/*0:0*/ Bitty__DOT____Vcellout__ControlUnit1__en_c;
    CData/*0:0*/ Bitty__DOT____Vcellout__ControlUnit1__en_s;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*15:0*/ Bitty__DOT____Vcellout__regC__out;
    SData/*15:0*/ Bitty__DOT____Vcellout__regS__out;
    SData/*15:0*/ Bitty__DOT____Vcellout__reg0__out;
    SData/*15:0*/ Bitty__DOT____Vcellout__reg1__out;
    SData/*15:0*/ Bitty__DOT____Vcellout__reg2__out;
    SData/*15:0*/ Bitty__DOT____Vcellout__reg3__out;
    SData/*15:0*/ Bitty__DOT____Vcellout__reg4__out;
    SData/*15:0*/ Bitty__DOT____Vcellout__reg5__out;
    SData/*15:0*/ Bitty__DOT____Vcellout__reg6__out;
    SData/*15:0*/ Bitty__DOT____Vcellout__reg7__out;
    SData/*15:0*/ Bitty__DOT____Vcellout__reg_inst__out;
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VBitty__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VBitty);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VBitty(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBitty();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VBitty__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBitty__Syms* symsp, bool first);
  private:
    static QData _change_request(VBitty__Syms* __restrict vlSymsp);
    static QData _change_request_1(VBitty__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VBitty__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VBitty__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VBitty__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VBitty__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VBitty__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VBitty__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
