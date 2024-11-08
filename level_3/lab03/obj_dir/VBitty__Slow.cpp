// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBitty.h for the primary calling header

#include "VBitty.h"
#include "VBitty__Syms.h"

//==========

VL_CTOR_IMP(VBitty) {
    VBitty__Syms* __restrict vlSymsp = __VlSymsp = new VBitty__Syms(this, name());
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VBitty::__Vconfigure(VBitty__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VBitty::~VBitty() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VBitty::_settle__TOP__3(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_settle__TOP__3\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Bitty__DOT__reg_en[0xaU] = vlTOPp->regen
        [0xaU];
    vlTOPp->Bitty__DOT__reg_en[9U] = vlTOPp->regen[9U];
    vlTOPp->Bitty__DOT__reg_en[8U] = vlTOPp->regen[8U];
    vlTOPp->Bitty__DOT__reg_en[7U] = vlTOPp->regen[7U];
    vlTOPp->Bitty__DOT__reg_en[6U] = vlTOPp->regen[6U];
    vlTOPp->Bitty__DOT__reg_en[5U] = vlTOPp->regen[5U];
    vlTOPp->Bitty__DOT__reg_en[4U] = vlTOPp->regen[4U];
    vlTOPp->Bitty__DOT__reg_en[3U] = vlTOPp->regen[3U];
    vlTOPp->Bitty__DOT__reg_en[2U] = vlTOPp->regen[2U];
    vlTOPp->Bitty__DOT__reg_en[1U] = vlTOPp->regen[1U];
    vlTOPp->Bitty__DOT__reg_en[0U] = vlTOPp->regen[0U];
    vlTOPp->done = (1U & (((IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state) 
                           >> 1U) & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))));
    vlTOPp->Bitty__DOT__ControlUnit1__DOT__next_state 
        = ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))
            ? ((1U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))
                ? ((IData)(vlTOPp->run) ? 0U : 3U) : 3U)
            : ((1U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))
                ? 2U : 1U));
    if ((1U & (~ ((IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
            vlTOPp->Bitty__DOT__mode = (1U & ((IData)(vlTOPp->din) 
                                              >> 2U));
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
            vlTOPp->Bitty__DOT__alu_sel = (0xfU & ((IData)(vlTOPp->din) 
                                                   >> 3U));
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_inst = 1U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_inst = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_c 
            = (1U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state));
    }
    if ((1U & (~ ((IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_s 
            = (1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)));
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((0x8000U & (IData)(vlTOPp->din))) {
                if ((1U & (~ ((IData)(vlTOPp->din) 
                              >> 0xeU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->din) 
                                  >> 0xdU)))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_4 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_4 = 0U;
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((0x8000U & (IData)(vlTOPp->din))) {
                if ((1U & (~ ((IData)(vlTOPp->din) 
                              >> 0xeU)))) {
                    if ((0x2000U & (IData)(vlTOPp->din))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_5 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_5 = 0U;
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((0x8000U & (IData)(vlTOPp->din))) {
                if ((0x4000U & (IData)(vlTOPp->din))) {
                    if ((1U & (~ ((IData)(vlTOPp->din) 
                                  >> 0xdU)))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_6 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_6 = 0U;
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((0x8000U & (IData)(vlTOPp->din))) {
                if ((0x4000U & (IData)(vlTOPp->din))) {
                    if ((0x2000U & (IData)(vlTOPp->din))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_7 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_7 = 0U;
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((1U & (~ ((IData)(vlTOPp->din) >> 0xfU)))) {
                if ((0x4000U & (IData)(vlTOPp->din))) {
                    if ((0x2000U & (IData)(vlTOPp->din))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_3 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_3 = 0U;
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((1U & (~ ((IData)(vlTOPp->din) >> 0xfU)))) {
                if ((0x4000U & (IData)(vlTOPp->din))) {
                    if ((1U & (~ ((IData)(vlTOPp->din) 
                                  >> 0xdU)))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_2 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_2 = 0U;
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((1U & (~ ((IData)(vlTOPp->din) >> 0xfU)))) {
                if ((1U & (~ ((IData)(vlTOPp->din) 
                              >> 0xeU)))) {
                    if ((0x2000U & (IData)(vlTOPp->din))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_1 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_1 = 0U;
        }
    }
    if ((2U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))) {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            if ((1U & (~ ((IData)(vlTOPp->din) >> 0xfU)))) {
                if ((1U & (~ ((IData)(vlTOPp->din) 
                              >> 0xeU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->din) 
                                  >> 0xdU)))) {
                        vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_0 = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state)))) {
            vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_0 = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state) 
                  >> 1U)))) {
        vlTOPp->Bitty__DOT__mux_sel = (7U & ((1U & (IData)(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state))
                                              ? ((IData)(vlTOPp->din) 
                                                 >> 0xaU)
                                              : ((IData)(vlTOPp->din) 
                                                 >> 0xdU)));
    }
    vlTOPp->Bitty__DOT__d_out[1U] = vlTOPp->Bitty__DOT____Vcellout__regC__out;
    vlTOPp->Bitty__DOT__d_out[0U] = vlTOPp->Bitty__DOT____Vcellout__regS__out;
    vlTOPp->Bitty__DOT__d_out[2U] = vlTOPp->Bitty__DOT____Vcellout__reg0__out;
    vlTOPp->Bitty__DOT__d_out[3U] = vlTOPp->Bitty__DOT____Vcellout__reg1__out;
    vlTOPp->Bitty__DOT__d_out[4U] = vlTOPp->Bitty__DOT____Vcellout__reg2__out;
    vlTOPp->Bitty__DOT__d_out[5U] = vlTOPp->Bitty__DOT____Vcellout__reg3__out;
    vlTOPp->Bitty__DOT__d_out[6U] = vlTOPp->Bitty__DOT____Vcellout__reg4__out;
    vlTOPp->Bitty__DOT__d_out[7U] = vlTOPp->Bitty__DOT____Vcellout__reg5__out;
    vlTOPp->Bitty__DOT__d_out[8U] = vlTOPp->Bitty__DOT____Vcellout__reg6__out;
    vlTOPp->Bitty__DOT__d_out[9U] = vlTOPp->Bitty__DOT____Vcellout__reg7__out;
    vlTOPp->Bitty__DOT__d_out[0xaU] = vlTOPp->Bitty__DOT____Vcellout__reg_inst__out;
    vlTOPp->Bitty__DOT__reg_en[0xaU] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_inst;
    vlTOPp->Bitty__DOT__reg_en[1U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_c;
    vlTOPp->Bitty__DOT__reg_en[0U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_s;
    vlTOPp->Bitty__DOT__reg_en[6U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_4;
    vlTOPp->Bitty__DOT__reg_en[7U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_5;
    vlTOPp->Bitty__DOT__reg_en[8U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_6;
    vlTOPp->Bitty__DOT__reg_en[9U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_7;
    vlTOPp->Bitty__DOT__reg_en[5U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_3;
    vlTOPp->Bitty__DOT__reg_en[4U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_2;
    vlTOPp->Bitty__DOT__reg_en[3U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_1;
    vlTOPp->Bitty__DOT__reg_en[2U] = vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_0;
    vlTOPp->dout[0xaU] = vlTOPp->Bitty__DOT__d_out[0xaU];
    vlTOPp->dout[9U] = vlTOPp->Bitty__DOT__d_out[9U];
    vlTOPp->dout[8U] = vlTOPp->Bitty__DOT__d_out[8U];
    vlTOPp->dout[7U] = vlTOPp->Bitty__DOT__d_out[7U];
    vlTOPp->dout[6U] = vlTOPp->Bitty__DOT__d_out[6U];
    vlTOPp->dout[5U] = vlTOPp->Bitty__DOT__d_out[5U];
    vlTOPp->dout[4U] = vlTOPp->Bitty__DOT__d_out[4U];
    vlTOPp->dout[3U] = vlTOPp->Bitty__DOT__d_out[3U];
    vlTOPp->dout[2U] = vlTOPp->Bitty__DOT__d_out[2U];
    vlTOPp->dout[1U] = vlTOPp->Bitty__DOT__d_out[1U];
    vlTOPp->dout[0U] = vlTOPp->Bitty__DOT__d_out[0U];
    vlTOPp->Bitty__DOT__mux_out = ((4U & (IData)(vlTOPp->Bitty__DOT__mux_sel))
                                    ? ((2U & (IData)(vlTOPp->Bitty__DOT__mux_sel))
                                        ? ((1U & (IData)(vlTOPp->Bitty__DOT__mux_sel))
                                            ? vlTOPp->Bitty__DOT__d_out
                                           [9U] : vlTOPp->Bitty__DOT__d_out
                                           [8U]) : 
                                       ((1U & (IData)(vlTOPp->Bitty__DOT__mux_sel))
                                         ? vlTOPp->Bitty__DOT__d_out
                                        [7U] : vlTOPp->Bitty__DOT__d_out
                                        [6U])) : ((2U 
                                                   & (IData)(vlTOPp->Bitty__DOT__mux_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->Bitty__DOT__mux_sel))
                                                    ? 
                                                   vlTOPp->Bitty__DOT__d_out
                                                   [5U]
                                                    : 
                                                   vlTOPp->Bitty__DOT__d_out
                                                   [4U])
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->Bitty__DOT__mux_sel))
                                                    ? 
                                                   vlTOPp->Bitty__DOT__d_out
                                                   [3U]
                                                    : 
                                                   vlTOPp->Bitty__DOT__d_out
                                                   [2U])));
    vlTOPp->Bitty__DOT__d_in[2U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [2U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [2U]);
    vlTOPp->Bitty__DOT__d_in[3U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [3U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [3U]);
    vlTOPp->Bitty__DOT__d_in[4U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [4U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [4U]);
    vlTOPp->Bitty__DOT__d_in[5U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [5U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [5U]);
    vlTOPp->Bitty__DOT__d_in[6U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [6U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [6U]);
    vlTOPp->Bitty__DOT__d_in[7U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [7U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [7U]);
    vlTOPp->Bitty__DOT__d_in[8U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [8U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [8U]);
    vlTOPp->Bitty__DOT__d_in[9U] = ((vlTOPp->Bitty__DOT__reg_en
                                     [9U] & (~ (IData)(vlTOPp->write)))
                                     ? vlTOPp->Bitty__DOT__d_out
                                    [1U] : vlTOPp->regs
                                    [9U]);
    if ((8U & (IData)(vlTOPp->Bitty__DOT__alu_sel))) {
        vlTOPp->Bitty__DOT__alu1__DOT__arithmetic_carry_out 
            = (1U & ((4U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                      ? ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                          ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                              ? (1U & (((vlTOPp->Bitty__DOT__d_out
                                         [0U] - (IData)(1U)) 
                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                       >> 0x10U)) : 
                             (1U & ((((vlTOPp->Bitty__DOT__d_out
                                       [0U] + (0xffffU 
                                               & (~ (IData)(vlTOPp->Bitty__DOT__mux_out)))) 
                                      + vlTOPp->Bitty__DOT__d_out
                                      [0U]) + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                    >> 0x10U))) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                                    ? 
                                                   (1U 
                                                    & ((((vlTOPp->Bitty__DOT__d_out
                                                          [0U] 
                                                          | (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                                         + 
                                                         vlTOPp->Bitty__DOT__d_out
                                                         [0U]) 
                                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                                       >> 0x10U))
                                                    : 
                                                   (1U 
                                                    & (((vlTOPp->Bitty__DOT__d_out
                                                         [0U] 
                                                         + 
                                                         vlTOPp->Bitty__DOT__d_out
                                                         [0U]) 
                                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                                       >> 0x10U))))
                      : ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                          ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                              ? (1U & ((((vlTOPp->Bitty__DOT__d_out
                                          [0U] & (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                         - (IData)(1U)) 
                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                       >> 0x10U)) : 
                             (1U & ((((vlTOPp->Bitty__DOT__d_out
                                       [0U] | (0xffffU 
                                               & (~ (IData)(vlTOPp->Bitty__DOT__mux_out)))) 
                                      + (vlTOPp->Bitty__DOT__d_out
                                         [0U] & (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                     + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                    >> 0x10U))) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                                    ? 
                                                   (1U 
                                                    & (((vlTOPp->Bitty__DOT__d_out
                                                         [0U] 
                                                         + (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                                       >> 0x10U))
                                                    : 
                                                   (1U 
                                                    & (((vlTOPp->Bitty__DOT__d_out
                                                         [0U] 
                                                         + 
                                                         (vlTOPp->Bitty__DOT__d_out
                                                          [0U] 
                                                          & (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                                       >> 0x10U))))));
        vlTOPp->Bitty__DOT__alu1__DOT__temp_l_out = 
            (0xffffU & ((4U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                         ? ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                             ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? vlTOPp->Bitty__DOT__d_out
                                [0U] : (vlTOPp->Bitty__DOT__d_out
                                        [0U] | (IData)(vlTOPp->Bitty__DOT__mux_out)))
                             : ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (vlTOPp->Bitty__DOT__d_out
                                    [0U] | (~ (IData)(vlTOPp->Bitty__DOT__mux_out)))
                                 : 1U)) : ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                            ? ((1U 
                                                & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                                ? (
                                                   vlTOPp->Bitty__DOT__d_out
                                                   [0U] 
                                                   & (IData)(vlTOPp->Bitty__DOT__mux_out))
                                                : (IData)(vlTOPp->Bitty__DOT__mux_out))
                                            : ((1U 
                                                & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                                ? (~ 
                                                   (vlTOPp->Bitty__DOT__d_out
                                                    [0U] 
                                                    ^ (IData)(vlTOPp->Bitty__DOT__mux_out)))
                                                : (
                                                   (~ 
                                                    vlTOPp->Bitty__DOT__d_out
                                                    [0U]) 
                                                   | (IData)(vlTOPp->Bitty__DOT__mux_out))))));
        vlTOPp->Bitty__DOT__alu1__DOT__temp_a_out = 
            (0xffffU & ((4U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                         ? ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                             ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? ((vlTOPp->Bitty__DOT__d_out
                                     [0U] - (IData)(1U)) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in))
                                 : (((vlTOPp->Bitty__DOT__d_out
                                      [0U] + (~ (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                     + vlTOPp->Bitty__DOT__d_out
                                     [0U]) + (IData)(vlTOPp->Bitty__DOT__carry_in)))
                             : ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (((vlTOPp->Bitty__DOT__d_out
                                      [0U] | (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                     + vlTOPp->Bitty__DOT__d_out
                                     [0U]) + (IData)(vlTOPp->Bitty__DOT__carry_in))
                                 : ((vlTOPp->Bitty__DOT__d_out
                                     [0U] + vlTOPp->Bitty__DOT__d_out
                                     [0U]) + (IData)(vlTOPp->Bitty__DOT__carry_in))))
                         : ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                             ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (((vlTOPp->Bitty__DOT__d_out
                                      [0U] & (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                     - (IData)(1U)) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in))
                                 : (((vlTOPp->Bitty__DOT__d_out
                                      [0U] | (~ (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                     + (vlTOPp->Bitty__DOT__d_out
                                        [0U] & (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in)))
                             : ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? ((vlTOPp->Bitty__DOT__d_out
                                     [0U] + (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in))
                                 : ((vlTOPp->Bitty__DOT__d_out
                                     [0U] + (vlTOPp->Bitty__DOT__d_out
                                             [0U] & (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in))))));
    } else {
        vlTOPp->Bitty__DOT__alu1__DOT__arithmetic_carry_out 
            = (1U & ((4U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                      ? ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                          ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                              ? (1U & ((((0xffffU & 
                                          (vlTOPp->Bitty__DOT__d_out
                                           [0U] & (~ (IData)(vlTOPp->Bitty__DOT__mux_out)))) 
                                         - (IData)(1U)) 
                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                       >> 0x10U)) : 
                             (1U & ((((vlTOPp->Bitty__DOT__d_out
                                       [0U] - (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                      - (IData)(1U)) 
                                     + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                    >> 0x10U))) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                                    ? 
                                                   (1U 
                                                    & ((((vlTOPp->Bitty__DOT__d_out
                                                          [0U] 
                                                          | (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                                         + 
                                                         (~ 
                                                          (vlTOPp->Bitty__DOT__d_out
                                                           [0U] 
                                                           & (IData)(vlTOPp->Bitty__DOT__mux_out)))) 
                                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                                       >> 0x10U))
                                                    : 
                                                   (1U 
                                                    & ((vlTOPp->Bitty__DOT__d_out
                                                        [0U] 
                                                        | ((0xffffU 
                                                            & (vlTOPp->Bitty__DOT__d_out
                                                               [0U] 
                                                               & (~ (IData)(vlTOPp->Bitty__DOT__mux_out)))) 
                                                           + (IData)(vlTOPp->Bitty__DOT__carry_in))) 
                                                       >> 0x10U))))
                      : ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                          ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                              ? (1U & (((IData)(0x10001U) 
                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                       >> 0x10U)) : 
                             (1U & ((vlTOPp->Bitty__DOT__d_out
                                     [0U] | ((0xffffU 
                                              & (~ (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                             + (IData)(vlTOPp->Bitty__DOT__carry_in))) 
                                    >> 0x10U))) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                                    ? 
                                                   (1U 
                                                    & ((vlTOPp->Bitty__DOT__d_out
                                                        [0U] 
                                                        | ((IData)(vlTOPp->Bitty__DOT__mux_out) 
                                                           + (IData)(vlTOPp->Bitty__DOT__carry_in))) 
                                                       >> 0x10U))
                                                    : 
                                                   (1U 
                                                    & ((vlTOPp->Bitty__DOT__d_out
                                                        [0U] 
                                                        + (IData)(vlTOPp->Bitty__DOT__carry_in)) 
                                                       >> 0x10U))))));
        vlTOPp->Bitty__DOT__alu1__DOT__temp_l_out = 
            (0xffffU & ((4U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                         ? ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                             ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (vlTOPp->Bitty__DOT__d_out
                                    [0U] & (~ (IData)(vlTOPp->Bitty__DOT__mux_out)))
                                 : (vlTOPp->Bitty__DOT__d_out
                                    [0U] ^ (IData)(vlTOPp->Bitty__DOT__mux_out)))
                             : ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (~ (IData)(vlTOPp->Bitty__DOT__mux_out))
                                 : (~ (vlTOPp->Bitty__DOT__d_out
                                       [0U] & (IData)(vlTOPp->Bitty__DOT__mux_out)))))
                         : ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                             ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? 0U : ((~ vlTOPp->Bitty__DOT__d_out
                                          [0U]) & (IData)(vlTOPp->Bitty__DOT__mux_out)))
                             : ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (~ (vlTOPp->Bitty__DOT__d_out
                                       [0U] | (IData)(vlTOPp->Bitty__DOT__mux_out)))
                                 : (~ vlTOPp->Bitty__DOT__d_out
                                    [0U])))));
        vlTOPp->Bitty__DOT__alu1__DOT__temp_a_out = 
            (0xffffU & ((4U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                         ? ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                             ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (((vlTOPp->Bitty__DOT__d_out
                                      [0U] & (~ (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                     - (IData)(1U)) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in))
                                 : (((vlTOPp->Bitty__DOT__d_out
                                      [0U] - (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                     - (IData)(1U)) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in)))
                             : ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (((vlTOPp->Bitty__DOT__d_out
                                      [0U] | (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                     + (~ (vlTOPp->Bitty__DOT__d_out
                                           [0U] & (IData)(vlTOPp->Bitty__DOT__mux_out)))) 
                                    + (IData)(vlTOPp->Bitty__DOT__carry_in))
                                 : (vlTOPp->Bitty__DOT__d_out
                                    [0U] | ((vlTOPp->Bitty__DOT__d_out
                                             [0U] & 
                                             (~ (IData)(vlTOPp->Bitty__DOT__mux_out))) 
                                            + (IData)(vlTOPp->Bitty__DOT__carry_in)))))
                         : ((2U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                             ? ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? ((IData)(1U) + (IData)(vlTOPp->Bitty__DOT__carry_in))
                                 : (vlTOPp->Bitty__DOT__d_out
                                    [0U] | ((~ (IData)(vlTOPp->Bitty__DOT__mux_out)) 
                                            + (IData)(vlTOPp->Bitty__DOT__carry_in))))
                             : ((1U & (IData)(vlTOPp->Bitty__DOT__alu_sel))
                                 ? (vlTOPp->Bitty__DOT__d_out
                                    [0U] | ((IData)(vlTOPp->Bitty__DOT__mux_out) 
                                            + (IData)(vlTOPp->Bitty__DOT__carry_in)))
                                 : (vlTOPp->Bitty__DOT__d_out
                                    [0U] + (IData)(vlTOPp->Bitty__DOT__carry_in))))));
    }
    if (vlTOPp->Bitty__DOT__mode) {
        if (vlTOPp->Bitty__DOT__mode) {
            vlTOPp->Bitty__DOT__carry_out = 0U;
        }
    } else {
        vlTOPp->Bitty__DOT__carry_out = vlTOPp->Bitty__DOT__alu1__DOT__arithmetic_carry_out;
    }
    if (vlTOPp->Bitty__DOT__mode) {
        if (vlTOPp->Bitty__DOT__mode) {
            vlTOPp->Bitty__DOT__alu_out = vlTOPp->Bitty__DOT__alu1__DOT__temp_l_out;
        }
    } else {
        vlTOPp->Bitty__DOT__alu_out = vlTOPp->Bitty__DOT__alu1__DOT__temp_a_out;
    }
    vlTOPp->Bitty__DOT__d_in[1U] = vlTOPp->Bitty__DOT__alu_out;
}

void VBitty::_eval_initial(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_eval_initial\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VBitty::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::final\n"); );
    // Variables
    VBitty__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBitty::_eval_settle(VBitty__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_eval_settle\n"); );
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VBitty::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitty::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    din = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
            regs[__Vi0] = VL_RAND_RESET_I(16);
    }}
    done = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
            dout[__Vi0] = VL_RAND_RESET_I(16);
    }}
    write = VL_RAND_RESET_I(1);
    run = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
            regen[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
            Bitty__DOT__d_out[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
            Bitty__DOT__d_in[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<11; ++__Vi0) {
            Bitty__DOT__reg_en[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Bitty__DOT____Vcellout__regC__out = VL_RAND_RESET_I(16);
    Bitty__DOT____Vcellout__regS__out = VL_RAND_RESET_I(16);
    Bitty__DOT____Vcellout__reg0__out = VL_RAND_RESET_I(16);
    Bitty__DOT____Vcellout__reg1__out = VL_RAND_RESET_I(16);
    Bitty__DOT____Vcellout__reg2__out = VL_RAND_RESET_I(16);
    Bitty__DOT____Vcellout__reg3__out = VL_RAND_RESET_I(16);
    Bitty__DOT____Vcellout__reg4__out = VL_RAND_RESET_I(16);
    Bitty__DOT____Vcellout__reg5__out = VL_RAND_RESET_I(16);
    Bitty__DOT____Vcellout__reg6__out = VL_RAND_RESET_I(16);
    Bitty__DOT____Vcellout__reg7__out = VL_RAND_RESET_I(16);
    Bitty__DOT____Vcellout__reg_inst__out = VL_RAND_RESET_I(16);
    Bitty__DOT__mux_sel = VL_RAND_RESET_I(3);
    Bitty__DOT__mux_out = VL_RAND_RESET_I(16);
    Bitty__DOT__carry_in = VL_RAND_RESET_I(1);
    Bitty__DOT__alu_sel = VL_RAND_RESET_I(4);
    Bitty__DOT__mode = VL_RAND_RESET_I(1);
    Bitty__DOT__carry_out = VL_RAND_RESET_I(1);
    Bitty__DOT__alu_out = VL_RAND_RESET_I(16);
    Bitty__DOT____Vcellout__ControlUnit1__en_inst = VL_RAND_RESET_I(1);
    Bitty__DOT____Vcellout__ControlUnit1__en_7 = VL_RAND_RESET_I(1);
    Bitty__DOT____Vcellout__ControlUnit1__en_6 = VL_RAND_RESET_I(1);
    Bitty__DOT____Vcellout__ControlUnit1__en_5 = VL_RAND_RESET_I(1);
    Bitty__DOT____Vcellout__ControlUnit1__en_4 = VL_RAND_RESET_I(1);
    Bitty__DOT____Vcellout__ControlUnit1__en_3 = VL_RAND_RESET_I(1);
    Bitty__DOT____Vcellout__ControlUnit1__en_2 = VL_RAND_RESET_I(1);
    Bitty__DOT____Vcellout__ControlUnit1__en_1 = VL_RAND_RESET_I(1);
    Bitty__DOT____Vcellout__ControlUnit1__en_0 = VL_RAND_RESET_I(1);
    Bitty__DOT____Vcellout__ControlUnit1__en_c = VL_RAND_RESET_I(1);
    Bitty__DOT____Vcellout__ControlUnit1__en_s = VL_RAND_RESET_I(1);
    Bitty__DOT__alu1__DOT__temp_a_out = VL_RAND_RESET_I(16);
    Bitty__DOT__alu1__DOT__temp_l_out = VL_RAND_RESET_I(16);
    Bitty__DOT__alu1__DOT__arithmetic_carry_out = VL_RAND_RESET_I(1);
    Bitty__DOT__ControlUnit1__DOT__state = VL_RAND_RESET_I(2);
    Bitty__DOT__ControlUnit1__DOT__next_state = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
