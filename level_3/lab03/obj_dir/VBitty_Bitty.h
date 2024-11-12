// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBitty.h for the primary calling header

#ifndef _VBITTY_BITTY_H_
#define _VBITTY_BITTY_H_  // guard

#include "verilated.h"
#include "VBitty__Dpi.h"

//==========

class VBitty__Syms;
class VBitty_VerilatedVcd;


//----------

VL_MODULE(VBitty_Bitty) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(done,0,0);
    VL_IN8(run,0,0);
    VL_IN16(din,15,0);
    VL_OUT16(dout[11],15,0);
    
    // LOCAL SIGNALS
    CData/*3:0*/ __PVT__alu_sel;
    CData/*2:0*/ __PVT__mux_sel;
    CData/*0:0*/ __PVT__mode;
    CData/*0:0*/ __PVT__carry_out;
    CData/*0:0*/ __PVT__carry_in;
    CData/*0:0*/ __PVT__alu1__DOT__arithmetic_carry_out;
    CData/*1:0*/ __PVT__ControlUnit1__DOT__state;
    CData/*1:0*/ __PVT__ControlUnit1__DOT__next_state;
    SData/*15:0*/ __PVT__alu_out;
    SData/*15:0*/ __PVT__mux_out;
    SData/*15:0*/ __PVT__alu1__DOT__temp_a_out;
    SData/*15:0*/ __PVT__alu1__DOT__temp_l_out;
    SData/*15:0*/ d_out[11];
    SData/*15:0*/ d_in[11];
    CData/*0:0*/ reg_en[11];
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellout__ControlUnit1__en_inst;
    CData/*0:0*/ __Vcellout__ControlUnit1__en_7;
    CData/*0:0*/ __Vcellout__ControlUnit1__en_6;
    CData/*0:0*/ __Vcellout__ControlUnit1__en_5;
    CData/*0:0*/ __Vcellout__ControlUnit1__en_4;
    CData/*0:0*/ __Vcellout__ControlUnit1__en_3;
    CData/*0:0*/ __Vcellout__ControlUnit1__en_2;
    CData/*0:0*/ __Vcellout__ControlUnit1__en_1;
    CData/*0:0*/ __Vcellout__ControlUnit1__en_0;
    CData/*0:0*/ __Vcellout__ControlUnit1__en_c;
    CData/*0:0*/ __Vcellout__ControlUnit1__en_s;
    SData/*15:0*/ __Vcellout__regC__out;
    SData/*15:0*/ __Vcellout__regS__out;
    SData/*15:0*/ __Vcellout__reg_inst__out;
    SData/*15:0*/ __Vcellout__reg_inst_block__BRA__2__KET____DOT__regN__out;
    SData/*15:0*/ __Vcellout__reg_inst_block__BRA__3__KET____DOT__regN__out;
    SData/*15:0*/ __Vcellout__reg_inst_block__BRA__4__KET____DOT__regN__out;
    SData/*15:0*/ __Vcellout__reg_inst_block__BRA__5__KET____DOT__regN__out;
    SData/*15:0*/ __Vcellout__reg_inst_block__BRA__6__KET____DOT__regN__out;
    SData/*15:0*/ __Vcellout__reg_inst_block__BRA__7__KET____DOT__regN__out;
    SData/*15:0*/ __Vcellout__reg_inst_block__BRA__8__KET____DOT__regN__out;
    SData/*15:0*/ __Vcellout__reg_inst_block__BRA__9__KET____DOT__regN__out;
    
    // INTERNAL VARIABLES
  private:
    VBitty__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VBitty_Bitty);  ///< Copying not allowed
  public:
    VBitty_Bitty(const char* name = "TOP");
    ~VBitty_Bitty();
    
    // INTERNAL METHODS
    void __Vconfigure(VBitty__Syms* symsp, bool first);
    static void _combo__TOP__Bitty__3(VBitty__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__Bitty__1(VBitty__Syms* __restrict vlSymsp);
    static void _settle__TOP__Bitty__2(VBitty__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
