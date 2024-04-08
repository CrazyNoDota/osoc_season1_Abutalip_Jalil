// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


VL_ATTR_COLD void Valu___024root__trace_init_sub__TOP__0(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"carry_in", false,-1);
    tracep->declBus(c+2,"in_a", false,-1, 15,0);
    tracep->declBus(c+3,"in_b", false,-1, 15,0);
    tracep->declBus(c+4,"sel", false,-1, 3,0);
    tracep->declBit(c+5,"mode", false,-1);
    tracep->declBit(c+6,"carry_out", false,-1);
    tracep->declBit(c+7,"compare", false,-1);
    tracep->declBus(c+8,"alu_out", false,-1, 15,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+1,"carry_in", false,-1);
    tracep->declBus(c+2,"in_a", false,-1, 15,0);
    tracep->declBus(c+3,"in_b", false,-1, 15,0);
    tracep->declBus(c+4,"sel", false,-1, 3,0);
    tracep->declBit(c+5,"mode", false,-1);
    tracep->declBit(c+6,"carry_out", false,-1);
    tracep->declBit(c+7,"compare", false,-1);
    tracep->declBus(c+8,"alu_out", false,-1, 15,0);
    tracep->declBus(c+9,"temp_a_out", false,-1, 15,0);
    tracep->declBus(c+10,"temp_l_out", false,-1, 15,0);
    tracep->pushNamePrefix("myArithUnit ");
    tracep->declBit(c+1,"carry_in", false,-1);
    tracep->declBus(c+2,"in_a", false,-1, 15,0);
    tracep->declBus(c+3,"in_b", false,-1, 15,0);
    tracep->declBus(c+4,"sel", false,-1, 3,0);
    tracep->declBit(c+6,"carry_out", false,-1);
    tracep->declBus(c+9,"alu_out", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myLogicUnit ");
    tracep->declBus(c+2,"in_a", false,-1, 15,0);
    tracep->declBus(c+3,"in_b", false,-1, 15,0);
    tracep->declBus(c+4,"sel", false,-1, 3,0);
    tracep->declBus(c+10,"alu_out", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Valu___024root__trace_init_top(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_init_top\n"); );
    // Body
    Valu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu___024root__trace_register(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Valu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Valu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Valu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu___024root__trace_full_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_full_top_0\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu___024root__trace_full_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->carry_in));
    bufp->fullSData(oldp+2,(vlSelf->in_a),16);
    bufp->fullSData(oldp+3,(vlSelf->in_b),16);
    bufp->fullCData(oldp+4,(vlSelf->sel),4);
    bufp->fullBit(oldp+5,(vlSelf->mode));
    bufp->fullBit(oldp+6,(vlSelf->carry_out));
    bufp->fullBit(oldp+7,(vlSelf->compare));
    bufp->fullSData(oldp+8,(vlSelf->alu_out),16);
    bufp->fullSData(oldp+9,(vlSelf->alu__DOT__temp_a_out),16);
    bufp->fullSData(oldp+10,(vlSelf->alu__DOT__temp_l_out),16);
}
