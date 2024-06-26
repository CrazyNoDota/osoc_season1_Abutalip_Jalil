// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu__Syms.h"
#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ alu__DOT__temp_a_out;
    alu__DOT__temp_a_out = 0;
    SData/*15:0*/ alu__DOT__temp_l_out;
    alu__DOT__temp_l_out = 0;
    CData/*0:0*/ alu__DOT__arithmetic_carry_out;
    alu__DOT__arithmetic_carry_out = 0;
    // Body
    vlSelf->compare = ((IData)(vlSelf->in_a) == (IData)(vlSelf->in_b));
    if ((8U & (IData)(vlSelf->sel))) {
        if ((4U & (IData)(vlSelf->sel))) {
            if ((2U & (IData)(vlSelf->sel))) {
                if ((1U & (IData)(vlSelf->sel))) {
                    alu__DOT__arithmetic_carry_out 
                        = (1U & (1U & ((((IData)(vlSelf->in_a) 
                                         - (IData)(1U)) 
                                        + (IData)(vlSelf->carry_in)) 
                                       >> 0x10U)));
                    alu__DOT__temp_l_out = (0xffffU 
                                            & (IData)(vlSelf->in_a));
                    alu__DOT__temp_a_out = (0xffffU 
                                            & (((IData)(vlSelf->in_a) 
                                                - (IData)(1U)) 
                                               + (IData)(vlSelf->carry_in)));
                } else {
                    alu__DOT__arithmetic_carry_out 
                        = (1U & (1U & (((((IData)(vlSelf->in_a) 
                                          + (0xffffU 
                                             & (~ (IData)(vlSelf->in_b)))) 
                                         + (IData)(vlSelf->in_a)) 
                                        + (IData)(vlSelf->carry_in)) 
                                       >> 0x10U)));
                    alu__DOT__temp_l_out = (0xffffU 
                                            & ((IData)(vlSelf->in_a) 
                                               | (IData)(vlSelf->in_b)));
                    alu__DOT__temp_a_out = (0xffffU 
                                            & ((((IData)(vlSelf->in_a) 
                                                 + 
                                                 (~ (IData)(vlSelf->in_b))) 
                                                + (IData)(vlSelf->in_a)) 
                                               + (IData)(vlSelf->carry_in)));
                }
            } else if ((1U & (IData)(vlSelf->sel))) {
                alu__DOT__arithmetic_carry_out = (1U 
                                                  & (1U 
                                                     & (((((IData)(vlSelf->in_a) 
                                                           | (IData)(vlSelf->in_b)) 
                                                          + (IData)(vlSelf->in_a)) 
                                                         + (IData)(vlSelf->carry_in)) 
                                                        >> 0x10U)));
                alu__DOT__temp_l_out = (0xffffU & ((IData)(vlSelf->in_a) 
                                                   | (~ (IData)(vlSelf->in_b))));
                alu__DOT__temp_a_out = (0xffffU & (
                                                   (((IData)(vlSelf->in_a) 
                                                     | (IData)(vlSelf->in_b)) 
                                                    + (IData)(vlSelf->in_a)) 
                                                   + (IData)(vlSelf->carry_in)));
            } else {
                alu__DOT__arithmetic_carry_out = (1U 
                                                  & (1U 
                                                     & ((((IData)(vlSelf->in_a) 
                                                          + (IData)(vlSelf->in_a)) 
                                                         + (IData)(vlSelf->carry_in)) 
                                                        >> 0x10U)));
                alu__DOT__temp_l_out = (0xffffU & 1U);
                alu__DOT__temp_a_out = (0xffffU & (
                                                   ((IData)(vlSelf->in_a) 
                                                    + (IData)(vlSelf->in_a)) 
                                                   + (IData)(vlSelf->carry_in)));
            }
        } else if ((2U & (IData)(vlSelf->sel))) {
            if ((1U & (IData)(vlSelf->sel))) {
                alu__DOT__arithmetic_carry_out = (1U 
                                                  & (1U 
                                                     & (((((IData)(vlSelf->in_a) 
                                                           & (IData)(vlSelf->in_b)) 
                                                          - (IData)(1U)) 
                                                         + (IData)(vlSelf->carry_in)) 
                                                        >> 0x10U)));
                alu__DOT__temp_l_out = (0xffffU & ((IData)(vlSelf->in_a) 
                                                   & (IData)(vlSelf->in_b)));
                alu__DOT__temp_a_out = (0xffffU & (
                                                   (((IData)(vlSelf->in_a) 
                                                     & (IData)(vlSelf->in_b)) 
                                                    - (IData)(1U)) 
                                                   + (IData)(vlSelf->carry_in)));
            } else {
                alu__DOT__arithmetic_carry_out = (1U 
                                                  & (1U 
                                                     & (((((IData)(vlSelf->in_a) 
                                                           | (0xffffU 
                                                              & (~ (IData)(vlSelf->in_b)))) 
                                                          + 
                                                          ((IData)(vlSelf->in_a) 
                                                           & (IData)(vlSelf->in_b))) 
                                                         + (IData)(vlSelf->carry_in)) 
                                                        >> 0x10U)));
                alu__DOT__temp_l_out = (0xffffU & (IData)(vlSelf->in_b));
                alu__DOT__temp_a_out = (0xffffU & (
                                                   (((IData)(vlSelf->in_a) 
                                                     | (~ (IData)(vlSelf->in_b))) 
                                                    + 
                                                    ((IData)(vlSelf->in_a) 
                                                     & (IData)(vlSelf->in_b))) 
                                                   + (IData)(vlSelf->carry_in)));
            }
        } else if ((1U & (IData)(vlSelf->sel))) {
            alu__DOT__arithmetic_carry_out = (1U & 
                                              (1U & 
                                               ((((IData)(vlSelf->in_a) 
                                                  + (IData)(vlSelf->in_b)) 
                                                 + (IData)(vlSelf->carry_in)) 
                                                >> 0x10U)));
            alu__DOT__temp_l_out = (0xffffU & (~ ((IData)(vlSelf->in_a) 
                                                  ^ (IData)(vlSelf->in_b))));
            alu__DOT__temp_a_out = (0xffffU & (((IData)(vlSelf->in_a) 
                                                + (IData)(vlSelf->in_b)) 
                                               + (IData)(vlSelf->carry_in)));
        } else {
            alu__DOT__arithmetic_carry_out = (1U & 
                                              (1U & 
                                               ((((IData)(vlSelf->in_a) 
                                                  + 
                                                  ((IData)(vlSelf->in_a) 
                                                   & (IData)(vlSelf->in_b))) 
                                                 + (IData)(vlSelf->carry_in)) 
                                                >> 0x10U)));
            alu__DOT__temp_l_out = (0xffffU & ((~ (IData)(vlSelf->in_a)) 
                                               | (IData)(vlSelf->in_b)));
            alu__DOT__temp_a_out = (0xffffU & (((IData)(vlSelf->in_a) 
                                                + ((IData)(vlSelf->in_a) 
                                                   & (IData)(vlSelf->in_b))) 
                                               + (IData)(vlSelf->carry_in)));
        }
    } else if ((4U & (IData)(vlSelf->sel))) {
        if ((2U & (IData)(vlSelf->sel))) {
            if ((1U & (IData)(vlSelf->sel))) {
                alu__DOT__arithmetic_carry_out = (1U 
                                                  & (1U 
                                                     & ((((0xffffU 
                                                           & ((IData)(vlSelf->in_a) 
                                                              & (~ (IData)(vlSelf->in_b)))) 
                                                          - (IData)(1U)) 
                                                         + (IData)(vlSelf->carry_in)) 
                                                        >> 0x10U)));
                alu__DOT__temp_l_out = (0xffffU & ((IData)(vlSelf->in_a) 
                                                   & (~ (IData)(vlSelf->in_b))));
                alu__DOT__temp_a_out = (0xffffU & (
                                                   (((IData)(vlSelf->in_a) 
                                                     & (~ (IData)(vlSelf->in_b))) 
                                                    - (IData)(1U)) 
                                                   + (IData)(vlSelf->carry_in)));
            } else {
                alu__DOT__arithmetic_carry_out = (1U 
                                                  & (1U 
                                                     & (((((IData)(vlSelf->in_a) 
                                                           - (IData)(vlSelf->in_b)) 
                                                          - (IData)(1U)) 
                                                         + (IData)(vlSelf->carry_in)) 
                                                        >> 0x10U)));
                alu__DOT__temp_l_out = (0xffffU & ((IData)(vlSelf->in_a) 
                                                   ^ (IData)(vlSelf->in_b)));
                alu__DOT__temp_a_out = (0xffffU & (
                                                   (((IData)(vlSelf->in_a) 
                                                     - (IData)(vlSelf->in_b)) 
                                                    - (IData)(1U)) 
                                                   + (IData)(vlSelf->carry_in)));
            }
        } else if ((1U & (IData)(vlSelf->sel))) {
            alu__DOT__arithmetic_carry_out = (1U & 
                                              (1U & 
                                               (((((IData)(vlSelf->in_a) 
                                                   | (IData)(vlSelf->in_b)) 
                                                  + 
                                                  (~ 
                                                   ((IData)(vlSelf->in_a) 
                                                    & (IData)(vlSelf->in_b)))) 
                                                 + (IData)(vlSelf->carry_in)) 
                                                >> 0x10U)));
            alu__DOT__temp_l_out = (0xffffU & (~ (IData)(vlSelf->in_b)));
            alu__DOT__temp_a_out = (0xffffU & ((((IData)(vlSelf->in_a) 
                                                 | (IData)(vlSelf->in_b)) 
                                                + (~ 
                                                   ((IData)(vlSelf->in_a) 
                                                    & (IData)(vlSelf->in_b)))) 
                                               + (IData)(vlSelf->carry_in)));
        } else {
            alu__DOT__arithmetic_carry_out = (1U & 
                                              (1U & 
                                               (((IData)(vlSelf->in_a) 
                                                 | ((0xffffU 
                                                     & ((IData)(vlSelf->in_a) 
                                                        & (~ (IData)(vlSelf->in_b)))) 
                                                    + (IData)(vlSelf->carry_in))) 
                                                >> 0x10U)));
            alu__DOT__temp_l_out = (0xffffU & (~ ((IData)(vlSelf->in_a) 
                                                  & (IData)(vlSelf->in_b))));
            alu__DOT__temp_a_out = (0xffffU & ((IData)(vlSelf->in_a) 
                                               | (((IData)(vlSelf->in_a) 
                                                   & (~ (IData)(vlSelf->in_b))) 
                                                  + (IData)(vlSelf->carry_in))));
        }
    } else if ((2U & (IData)(vlSelf->sel))) {
        if ((1U & (IData)(vlSelf->sel))) {
            alu__DOT__arithmetic_carry_out = (1U & 
                                              (1U & 
                                               (((IData)(0x1ffffU) 
                                                 + (IData)(vlSelf->carry_in)) 
                                                >> 0x10U)));
            alu__DOT__temp_l_out = (0xffffU & 0U);
            alu__DOT__temp_a_out = (0xffffU & ((IData)(0xffffU) 
                                               + (IData)(vlSelf->carry_in)));
        } else {
            alu__DOT__arithmetic_carry_out = (1U & 
                                              (1U & 
                                               (((IData)(vlSelf->in_a) 
                                                 | ((0xffffU 
                                                     & (~ (IData)(vlSelf->in_b))) 
                                                    + (IData)(vlSelf->carry_in))) 
                                                >> 0x10U)));
            alu__DOT__temp_l_out = (0xffffU & ((~ (IData)(vlSelf->in_a)) 
                                               & (IData)(vlSelf->in_b)));
            alu__DOT__temp_a_out = (0xffffU & ((IData)(vlSelf->in_a) 
                                               | ((~ (IData)(vlSelf->in_b)) 
                                                  + (IData)(vlSelf->carry_in))));
        }
    } else if ((1U & (IData)(vlSelf->sel))) {
        alu__DOT__arithmetic_carry_out = (1U & (1U 
                                                & (((IData)(vlSelf->in_a) 
                                                    | ((IData)(vlSelf->in_b) 
                                                       + (IData)(vlSelf->carry_in))) 
                                                   >> 0x10U)));
        alu__DOT__temp_l_out = (0xffffU & (~ ((IData)(vlSelf->in_a) 
                                              | (IData)(vlSelf->in_b))));
        alu__DOT__temp_a_out = (0xffffU & ((IData)(vlSelf->in_a) 
                                           | ((IData)(vlSelf->in_b) 
                                              + (IData)(vlSelf->carry_in))));
    } else {
        alu__DOT__arithmetic_carry_out = (1U & (1U 
                                                & (((IData)(vlSelf->in_a) 
                                                    + (IData)(vlSelf->carry_in)) 
                                                   >> 0x10U)));
        alu__DOT__temp_l_out = (0xffffU & (~ (IData)(vlSelf->in_a)));
        alu__DOT__temp_a_out = (0xffffU & ((IData)(vlSelf->in_a) 
                                           + (IData)(vlSelf->carry_in)));
    }
    if (vlSelf->mode) {
        if (vlSelf->mode) {
            vlSelf->carry_out = 0U;
            vlSelf->alu_out = alu__DOT__temp_l_out;
        }
    } else {
        vlSelf->carry_out = alu__DOT__arithmetic_carry_out;
        vlSelf->alu_out = alu__DOT__temp_a_out;
    }
}

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Valu___024root___eval_act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_act\n"); );
}

void Valu___024root___eval_nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_nba\n"); );
}

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf);
#endif  // VL_DEBUG
void Valu___024root___eval_triggers__act(Valu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__nba(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Valu___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("alu.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Valu___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Valu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Valu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("alu.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Valu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("alu.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Valu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->carry_in & 0xfeU))) {
        Verilated::overWidthError("carry_in");}
    if (VL_UNLIKELY((vlSelf->sel & 0xf0U))) {
        Verilated::overWidthError("sel");}
    if (VL_UNLIKELY((vlSelf->mode & 0xfeU))) {
        Verilated::overWidthError("mode");}
}
#endif  // VL_DEBUG
