// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBitty__Syms.h"


//======================

void VBitty::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VBitty::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBitty__Syms* __restrict vlSymsp = static_cast<VBitty__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VBitty::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VBitty::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VBitty__Syms* __restrict vlSymsp = static_cast<VBitty__Syms*>(userp);
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VBitty::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VBitty__Syms* __restrict vlSymsp = static_cast<VBitty__Syms*>(userp);
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+98,"clk", false,-1);
        tracep->declBit(c+99,"reset", false,-1);
        tracep->declBus(c+100,"din", false,-1, 15,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+101+i*1,"regs", true,(i+0), 15,0);}}
        tracep->declBit(c+112,"done", false,-1);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+113+i*1,"dout", true,(i+0), 15,0);}}
        tracep->declBit(c+124,"write", false,-1);
        tracep->declBit(c+125,"run", false,-1);
        {int i; for (i=0; i<11; i++) {
                tracep->declBit(c+126+i*1,"regen", true,(i+0));}}
        tracep->declBit(c+98,"Bitty clk", false,-1);
        tracep->declBit(c+99,"Bitty reset", false,-1);
        tracep->declBus(c+100,"Bitty din", false,-1, 15,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+101+i*1,"Bitty regs", true,(i+0), 15,0);}}
        tracep->declBit(c+112,"Bitty done", false,-1);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+113+i*1,"Bitty dout", true,(i+0), 15,0);}}
        tracep->declBit(c+124,"Bitty write", false,-1);
        tracep->declBit(c+125,"Bitty run", false,-1);
        {int i; for (i=0; i<11; i++) {
                tracep->declBit(c+126+i*1,"Bitty regen", true,(i+0));}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+5+i*1,"Bitty d_out", true,(i+0), 15,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+36+i*1,"Bitty d_in", true,(i+0), 15,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBit(c+76+i*1,"Bitty reg_en", true,(i+0));}}
        tracep->declBus(c+47,"Bitty mux_sel", false,-1, 2,0);
        tracep->declBus(c+48,"Bitty mux_out", false,-1, 15,0);
        tracep->declBit(c+138,"Bitty carry_in", false,-1);
        tracep->declBus(c+49,"Bitty alu_sel", false,-1, 3,0);
        tracep->declBit(c+50,"Bitty mode", false,-1);
        tracep->declBit(c+51,"Bitty carry_out", false,-1);
        tracep->declBit(c+137,"Bitty compare", false,-1);
        tracep->declBus(c+52,"Bitty alu_out", false,-1, 15,0);
        tracep->declBit(c+98,"Bitty regC clk", false,-1);
        tracep->declBit(c+87,"Bitty regC enable", false,-1);
        tracep->declBus(c+53,"Bitty regC in", false,-1, 15,0);
        tracep->declBus(c+16,"Bitty regC out", false,-1, 15,0);
        tracep->declBit(c+98,"Bitty regS clk", false,-1);
        tracep->declBit(c+88,"Bitty regS enable", false,-1);
        tracep->declBus(c+54,"Bitty regS in", false,-1, 15,0);
        tracep->declBus(c+17,"Bitty regS out", false,-1, 15,0);
        tracep->declBit(c+98,"Bitty reg0 clk", false,-1);
        tracep->declBit(c+89,"Bitty reg0 enable", false,-1);
        tracep->declBus(c+55,"Bitty reg0 in", false,-1, 15,0);
        tracep->declBus(c+18,"Bitty reg0 out", false,-1, 15,0);
        tracep->declBit(c+98,"Bitty reg1 clk", false,-1);
        tracep->declBit(c+90,"Bitty reg1 enable", false,-1);
        tracep->declBus(c+56,"Bitty reg1 in", false,-1, 15,0);
        tracep->declBus(c+19,"Bitty reg1 out", false,-1, 15,0);
        tracep->declBit(c+98,"Bitty reg2 clk", false,-1);
        tracep->declBit(c+91,"Bitty reg2 enable", false,-1);
        tracep->declBus(c+57,"Bitty reg2 in", false,-1, 15,0);
        tracep->declBus(c+20,"Bitty reg2 out", false,-1, 15,0);
        tracep->declBit(c+98,"Bitty reg3 clk", false,-1);
        tracep->declBit(c+92,"Bitty reg3 enable", false,-1);
        tracep->declBus(c+58,"Bitty reg3 in", false,-1, 15,0);
        tracep->declBus(c+21,"Bitty reg3 out", false,-1, 15,0);
        tracep->declBit(c+98,"Bitty reg4 clk", false,-1);
        tracep->declBit(c+93,"Bitty reg4 enable", false,-1);
        tracep->declBus(c+59,"Bitty reg4 in", false,-1, 15,0);
        tracep->declBus(c+22,"Bitty reg4 out", false,-1, 15,0);
        tracep->declBit(c+98,"Bitty reg5 clk", false,-1);
        tracep->declBit(c+94,"Bitty reg5 enable", false,-1);
        tracep->declBus(c+60,"Bitty reg5 in", false,-1, 15,0);
        tracep->declBus(c+23,"Bitty reg5 out", false,-1, 15,0);
        tracep->declBit(c+98,"Bitty reg6 clk", false,-1);
        tracep->declBit(c+95,"Bitty reg6 enable", false,-1);
        tracep->declBus(c+61,"Bitty reg6 in", false,-1, 15,0);
        tracep->declBus(c+24,"Bitty reg6 out", false,-1, 15,0);
        tracep->declBit(c+98,"Bitty reg7 clk", false,-1);
        tracep->declBit(c+96,"Bitty reg7 enable", false,-1);
        tracep->declBus(c+62,"Bitty reg7 in", false,-1, 15,0);
        tracep->declBus(c+25,"Bitty reg7 out", false,-1, 15,0);
        tracep->declBit(c+98,"Bitty reg_inst clk", false,-1);
        tracep->declBit(c+97,"Bitty reg_inst enable", false,-1);
        tracep->declBus(c+63,"Bitty reg_inst in", false,-1, 15,0);
        tracep->declBus(c+26,"Bitty reg_inst out", false,-1, 15,0);
        tracep->declBus(c+27,"Bitty mux1 reg0", false,-1, 15,0);
        tracep->declBus(c+28,"Bitty mux1 reg1", false,-1, 15,0);
        tracep->declBus(c+29,"Bitty mux1 reg2", false,-1, 15,0);
        tracep->declBus(c+30,"Bitty mux1 reg3", false,-1, 15,0);
        tracep->declBus(c+31,"Bitty mux1 reg4", false,-1, 15,0);
        tracep->declBus(c+32,"Bitty mux1 reg5", false,-1, 15,0);
        tracep->declBus(c+33,"Bitty mux1 reg6", false,-1, 15,0);
        tracep->declBus(c+34,"Bitty mux1 reg7", false,-1, 15,0);
        tracep->declBus(c+47,"Bitty mux1 sel", false,-1, 2,0);
        tracep->declBus(c+48,"Bitty mux1 out", false,-1, 15,0);
        tracep->declBit(c+138,"Bitty alu1 carry_in", false,-1);
        tracep->declBus(c+35,"Bitty alu1 in_a", false,-1, 15,0);
        tracep->declBus(c+48,"Bitty alu1 in_b", false,-1, 15,0);
        tracep->declBus(c+49,"Bitty alu1 sel", false,-1, 3,0);
        tracep->declBit(c+50,"Bitty alu1 mode", false,-1);
        tracep->declBit(c+51,"Bitty alu1 carry_out", false,-1);
        tracep->declBit(c+137,"Bitty alu1 compare", false,-1);
        tracep->declBus(c+52,"Bitty alu1 alu_out", false,-1, 15,0);
        tracep->declBus(c+64,"Bitty alu1 temp_a_out", false,-1, 15,0);
        tracep->declBus(c+65,"Bitty alu1 temp_l_out", false,-1, 15,0);
        tracep->declBit(c+66,"Bitty alu1 arithmetic_carry_out", false,-1);
        tracep->declBit(c+138,"Bitty alu1 myArithUnit carry_in", false,-1);
        tracep->declBus(c+35,"Bitty alu1 myArithUnit in_a", false,-1, 15,0);
        tracep->declBus(c+48,"Bitty alu1 myArithUnit in_b", false,-1, 15,0);
        tracep->declBus(c+49,"Bitty alu1 myArithUnit sel", false,-1, 3,0);
        tracep->declBit(c+66,"Bitty alu1 myArithUnit carry_out", false,-1);
        tracep->declBus(c+64,"Bitty alu1 myArithUnit alu_out", false,-1, 15,0);
        tracep->declBus(c+35,"Bitty alu1 myLogicUnit in_a", false,-1, 15,0);
        tracep->declBus(c+48,"Bitty alu1 myLogicUnit in_b", false,-1, 15,0);
        tracep->declBus(c+49,"Bitty alu1 myLogicUnit sel", false,-1, 3,0);
        tracep->declBus(c+65,"Bitty alu1 myLogicUnit alu_out", false,-1, 15,0);
        tracep->declBit(c+98,"Bitty ControlUnit1 clk", false,-1);
        tracep->declBit(c+99,"Bitty ControlUnit1 reset", false,-1);
        tracep->declBus(c+100,"Bitty ControlUnit1 instruction", false,-1, 15,0);
        tracep->declBit(c+125,"Bitty ControlUnit1 run", false,-1);
        tracep->declBus(c+49,"Bitty ControlUnit1 alu_sel", false,-1, 3,0);
        tracep->declBus(c+47,"Bitty ControlUnit1 mux_sel", false,-1, 2,0);
        tracep->declBit(c+50,"Bitty ControlUnit1 mode", false,-1);
        tracep->declBit(c+1,"Bitty ControlUnit1 en_s", false,-1);
        tracep->declBit(c+2,"Bitty ControlUnit1 en_c", false,-1);
        tracep->declBit(c+67,"Bitty ControlUnit1 en_0", false,-1);
        tracep->declBit(c+68,"Bitty ControlUnit1 en_1", false,-1);
        tracep->declBit(c+69,"Bitty ControlUnit1 en_2", false,-1);
        tracep->declBit(c+70,"Bitty ControlUnit1 en_3", false,-1);
        tracep->declBit(c+71,"Bitty ControlUnit1 en_4", false,-1);
        tracep->declBit(c+72,"Bitty ControlUnit1 en_5", false,-1);
        tracep->declBit(c+73,"Bitty ControlUnit1 en_6", false,-1);
        tracep->declBit(c+74,"Bitty ControlUnit1 en_7", false,-1);
        tracep->declBit(c+3,"Bitty ControlUnit1 en_inst", false,-1);
        tracep->declBit(c+112,"Bitty ControlUnit1 done", false,-1);
        tracep->declBus(c+4,"Bitty ControlUnit1 state", false,-1, 1,0);
        tracep->declBus(c+75,"Bitty ControlUnit1 next_state", false,-1, 1,0);
    }
}

void VBitty::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VBitty::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VBitty__Syms* __restrict vlSymsp = static_cast<VBitty__Syms*>(userp);
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VBitty::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VBitty__Syms* __restrict vlSymsp = static_cast<VBitty__Syms*>(userp);
    VBitty* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_s));
        tracep->fullBit(oldp+2,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_c));
        tracep->fullBit(oldp+3,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_inst));
        tracep->fullCData(oldp+4,(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state),2);
        tracep->fullSData(oldp+5,(vlTOPp->Bitty__DOT__d_out[0]),16);
        tracep->fullSData(oldp+6,(vlTOPp->Bitty__DOT__d_out[1]),16);
        tracep->fullSData(oldp+7,(vlTOPp->Bitty__DOT__d_out[2]),16);
        tracep->fullSData(oldp+8,(vlTOPp->Bitty__DOT__d_out[3]),16);
        tracep->fullSData(oldp+9,(vlTOPp->Bitty__DOT__d_out[4]),16);
        tracep->fullSData(oldp+10,(vlTOPp->Bitty__DOT__d_out[5]),16);
        tracep->fullSData(oldp+11,(vlTOPp->Bitty__DOT__d_out[6]),16);
        tracep->fullSData(oldp+12,(vlTOPp->Bitty__DOT__d_out[7]),16);
        tracep->fullSData(oldp+13,(vlTOPp->Bitty__DOT__d_out[8]),16);
        tracep->fullSData(oldp+14,(vlTOPp->Bitty__DOT__d_out[9]),16);
        tracep->fullSData(oldp+15,(vlTOPp->Bitty__DOT__d_out[10]),16);
        tracep->fullSData(oldp+16,(vlTOPp->Bitty__DOT____Vcellout__regC__out),16);
        tracep->fullSData(oldp+17,(vlTOPp->Bitty__DOT____Vcellout__regS__out),16);
        tracep->fullSData(oldp+18,(vlTOPp->Bitty__DOT____Vcellout__reg0__out),16);
        tracep->fullSData(oldp+19,(vlTOPp->Bitty__DOT____Vcellout__reg1__out),16);
        tracep->fullSData(oldp+20,(vlTOPp->Bitty__DOT____Vcellout__reg2__out),16);
        tracep->fullSData(oldp+21,(vlTOPp->Bitty__DOT____Vcellout__reg3__out),16);
        tracep->fullSData(oldp+22,(vlTOPp->Bitty__DOT____Vcellout__reg4__out),16);
        tracep->fullSData(oldp+23,(vlTOPp->Bitty__DOT____Vcellout__reg5__out),16);
        tracep->fullSData(oldp+24,(vlTOPp->Bitty__DOT____Vcellout__reg6__out),16);
        tracep->fullSData(oldp+25,(vlTOPp->Bitty__DOT____Vcellout__reg7__out),16);
        tracep->fullSData(oldp+26,(vlTOPp->Bitty__DOT____Vcellout__reg_inst__out),16);
        tracep->fullSData(oldp+27,(vlTOPp->Bitty__DOT__d_out
                                   [2U]),16);
        tracep->fullSData(oldp+28,(vlTOPp->Bitty__DOT__d_out
                                   [3U]),16);
        tracep->fullSData(oldp+29,(vlTOPp->Bitty__DOT__d_out
                                   [4U]),16);
        tracep->fullSData(oldp+30,(vlTOPp->Bitty__DOT__d_out
                                   [5U]),16);
        tracep->fullSData(oldp+31,(vlTOPp->Bitty__DOT__d_out
                                   [6U]),16);
        tracep->fullSData(oldp+32,(vlTOPp->Bitty__DOT__d_out
                                   [7U]),16);
        tracep->fullSData(oldp+33,(vlTOPp->Bitty__DOT__d_out
                                   [8U]),16);
        tracep->fullSData(oldp+34,(vlTOPp->Bitty__DOT__d_out
                                   [9U]),16);
        tracep->fullSData(oldp+35,(vlTOPp->Bitty__DOT__d_out
                                   [0U]),16);
        tracep->fullSData(oldp+36,(vlTOPp->Bitty__DOT__d_in[0]),16);
        tracep->fullSData(oldp+37,(vlTOPp->Bitty__DOT__d_in[1]),16);
        tracep->fullSData(oldp+38,(vlTOPp->Bitty__DOT__d_in[2]),16);
        tracep->fullSData(oldp+39,(vlTOPp->Bitty__DOT__d_in[3]),16);
        tracep->fullSData(oldp+40,(vlTOPp->Bitty__DOT__d_in[4]),16);
        tracep->fullSData(oldp+41,(vlTOPp->Bitty__DOT__d_in[5]),16);
        tracep->fullSData(oldp+42,(vlTOPp->Bitty__DOT__d_in[6]),16);
        tracep->fullSData(oldp+43,(vlTOPp->Bitty__DOT__d_in[7]),16);
        tracep->fullSData(oldp+44,(vlTOPp->Bitty__DOT__d_in[8]),16);
        tracep->fullSData(oldp+45,(vlTOPp->Bitty__DOT__d_in[9]),16);
        tracep->fullSData(oldp+46,(vlTOPp->Bitty__DOT__d_in[10]),16);
        tracep->fullCData(oldp+47,(vlTOPp->Bitty__DOT__mux_sel),3);
        tracep->fullSData(oldp+48,(vlTOPp->Bitty__DOT__mux_out),16);
        tracep->fullCData(oldp+49,(vlTOPp->Bitty__DOT__alu_sel),4);
        tracep->fullBit(oldp+50,(vlTOPp->Bitty__DOT__mode));
        tracep->fullBit(oldp+51,(vlTOPp->Bitty__DOT__carry_out));
        tracep->fullSData(oldp+52,(vlTOPp->Bitty__DOT__alu_out),16);
        tracep->fullSData(oldp+53,(vlTOPp->Bitty__DOT__d_in
                                   [1U]),16);
        tracep->fullSData(oldp+54,(vlTOPp->Bitty__DOT__d_in
                                   [0U]),16);
        tracep->fullSData(oldp+55,(vlTOPp->Bitty__DOT__d_in
                                   [2U]),16);
        tracep->fullSData(oldp+56,(vlTOPp->Bitty__DOT__d_in
                                   [3U]),16);
        tracep->fullSData(oldp+57,(vlTOPp->Bitty__DOT__d_in
                                   [4U]),16);
        tracep->fullSData(oldp+58,(vlTOPp->Bitty__DOT__d_in
                                   [5U]),16);
        tracep->fullSData(oldp+59,(vlTOPp->Bitty__DOT__d_in
                                   [6U]),16);
        tracep->fullSData(oldp+60,(vlTOPp->Bitty__DOT__d_in
                                   [7U]),16);
        tracep->fullSData(oldp+61,(vlTOPp->Bitty__DOT__d_in
                                   [8U]),16);
        tracep->fullSData(oldp+62,(vlTOPp->Bitty__DOT__d_in
                                   [9U]),16);
        tracep->fullSData(oldp+63,(vlTOPp->Bitty__DOT__d_in
                                   [0xaU]),16);
        tracep->fullSData(oldp+64,(vlTOPp->Bitty__DOT__alu1__DOT__temp_a_out),16);
        tracep->fullSData(oldp+65,(vlTOPp->Bitty__DOT__alu1__DOT__temp_l_out),16);
        tracep->fullBit(oldp+66,(vlTOPp->Bitty__DOT__alu1__DOT__arithmetic_carry_out));
        tracep->fullBit(oldp+67,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_0));
        tracep->fullBit(oldp+68,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_1));
        tracep->fullBit(oldp+69,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_2));
        tracep->fullBit(oldp+70,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_3));
        tracep->fullBit(oldp+71,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_4));
        tracep->fullBit(oldp+72,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_5));
        tracep->fullBit(oldp+73,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_6));
        tracep->fullBit(oldp+74,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_7));
        tracep->fullCData(oldp+75,(vlTOPp->Bitty__DOT__ControlUnit1__DOT__next_state),2);
        tracep->fullBit(oldp+76,(vlTOPp->Bitty__DOT__reg_en[0]));
        tracep->fullBit(oldp+77,(vlTOPp->Bitty__DOT__reg_en[1]));
        tracep->fullBit(oldp+78,(vlTOPp->Bitty__DOT__reg_en[2]));
        tracep->fullBit(oldp+79,(vlTOPp->Bitty__DOT__reg_en[3]));
        tracep->fullBit(oldp+80,(vlTOPp->Bitty__DOT__reg_en[4]));
        tracep->fullBit(oldp+81,(vlTOPp->Bitty__DOT__reg_en[5]));
        tracep->fullBit(oldp+82,(vlTOPp->Bitty__DOT__reg_en[6]));
        tracep->fullBit(oldp+83,(vlTOPp->Bitty__DOT__reg_en[7]));
        tracep->fullBit(oldp+84,(vlTOPp->Bitty__DOT__reg_en[8]));
        tracep->fullBit(oldp+85,(vlTOPp->Bitty__DOT__reg_en[9]));
        tracep->fullBit(oldp+86,(vlTOPp->Bitty__DOT__reg_en[10]));
        tracep->fullBit(oldp+87,(vlTOPp->Bitty__DOT__reg_en
                                 [1U]));
        tracep->fullBit(oldp+88,(vlTOPp->Bitty__DOT__reg_en
                                 [0U]));
        tracep->fullBit(oldp+89,(vlTOPp->Bitty__DOT__reg_en
                                 [2U]));
        tracep->fullBit(oldp+90,(vlTOPp->Bitty__DOT__reg_en
                                 [3U]));
        tracep->fullBit(oldp+91,(vlTOPp->Bitty__DOT__reg_en
                                 [4U]));
        tracep->fullBit(oldp+92,(vlTOPp->Bitty__DOT__reg_en
                                 [5U]));
        tracep->fullBit(oldp+93,(vlTOPp->Bitty__DOT__reg_en
                                 [6U]));
        tracep->fullBit(oldp+94,(vlTOPp->Bitty__DOT__reg_en
                                 [7U]));
        tracep->fullBit(oldp+95,(vlTOPp->Bitty__DOT__reg_en
                                 [8U]));
        tracep->fullBit(oldp+96,(vlTOPp->Bitty__DOT__reg_en
                                 [9U]));
        tracep->fullBit(oldp+97,(vlTOPp->Bitty__DOT__reg_en
                                 [0xaU]));
        tracep->fullBit(oldp+98,(vlTOPp->clk));
        tracep->fullBit(oldp+99,(vlTOPp->reset));
        tracep->fullSData(oldp+100,(vlTOPp->din),16);
        tracep->fullSData(oldp+101,(vlTOPp->regs[0]),16);
        tracep->fullSData(oldp+102,(vlTOPp->regs[1]),16);
        tracep->fullSData(oldp+103,(vlTOPp->regs[2]),16);
        tracep->fullSData(oldp+104,(vlTOPp->regs[3]),16);
        tracep->fullSData(oldp+105,(vlTOPp->regs[4]),16);
        tracep->fullSData(oldp+106,(vlTOPp->regs[5]),16);
        tracep->fullSData(oldp+107,(vlTOPp->regs[6]),16);
        tracep->fullSData(oldp+108,(vlTOPp->regs[7]),16);
        tracep->fullSData(oldp+109,(vlTOPp->regs[8]),16);
        tracep->fullSData(oldp+110,(vlTOPp->regs[9]),16);
        tracep->fullSData(oldp+111,(vlTOPp->regs[10]),16);
        tracep->fullBit(oldp+112,(vlTOPp->done));
        tracep->fullSData(oldp+113,(vlTOPp->dout[0]),16);
        tracep->fullSData(oldp+114,(vlTOPp->dout[1]),16);
        tracep->fullSData(oldp+115,(vlTOPp->dout[2]),16);
        tracep->fullSData(oldp+116,(vlTOPp->dout[3]),16);
        tracep->fullSData(oldp+117,(vlTOPp->dout[4]),16);
        tracep->fullSData(oldp+118,(vlTOPp->dout[5]),16);
        tracep->fullSData(oldp+119,(vlTOPp->dout[6]),16);
        tracep->fullSData(oldp+120,(vlTOPp->dout[7]),16);
        tracep->fullSData(oldp+121,(vlTOPp->dout[8]),16);
        tracep->fullSData(oldp+122,(vlTOPp->dout[9]),16);
        tracep->fullSData(oldp+123,(vlTOPp->dout[10]),16);
        tracep->fullBit(oldp+124,(vlTOPp->write));
        tracep->fullBit(oldp+125,(vlTOPp->run));
        tracep->fullBit(oldp+126,(vlTOPp->regen[0]));
        tracep->fullBit(oldp+127,(vlTOPp->regen[1]));
        tracep->fullBit(oldp+128,(vlTOPp->regen[2]));
        tracep->fullBit(oldp+129,(vlTOPp->regen[3]));
        tracep->fullBit(oldp+130,(vlTOPp->regen[4]));
        tracep->fullBit(oldp+131,(vlTOPp->regen[5]));
        tracep->fullBit(oldp+132,(vlTOPp->regen[6]));
        tracep->fullBit(oldp+133,(vlTOPp->regen[7]));
        tracep->fullBit(oldp+134,(vlTOPp->regen[8]));
        tracep->fullBit(oldp+135,(vlTOPp->regen[9]));
        tracep->fullBit(oldp+136,(vlTOPp->regen[10]));
        tracep->fullBit(oldp+137,((vlTOPp->Bitty__DOT__d_out
                                   [0U] == (IData)(vlTOPp->Bitty__DOT__mux_out))));
        tracep->fullBit(oldp+138,(vlTOPp->Bitty__DOT__carry_in));
    }
}
