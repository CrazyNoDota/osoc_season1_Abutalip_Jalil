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
        tracep->declBit(c+99,"clk", false,-1);
        tracep->declBit(c+100,"reset", false,-1);
        tracep->declBus(c+101,"din", false,-1, 15,0);
        tracep->declBit(c+102,"done", false,-1);
        tracep->declBit(c+99,"Bitty clk", false,-1);
        tracep->declBit(c+100,"Bitty reset", false,-1);
        tracep->declBus(c+101,"Bitty din", false,-1, 15,0);
        tracep->declBit(c+102,"Bitty done", false,-1);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+1+i*1,"Bitty d_out", true,(i+0), 15,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+60+i*1,"Bitty d_in", true,(i+0), 15,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBit(c+37+i*1,"Bitty reg_en", true,(i+0));}}
        tracep->declBus(c+71,"Bitty mux_sel", false,-1, 2,0);
        tracep->declBus(c+72,"Bitty mux_out", false,-1, 15,0);
        tracep->declBit(c+103,"Bitty carry_in", false,-1);
        tracep->declBus(c+73,"Bitty alu_sel", false,-1, 3,0);
        tracep->declBit(c+74,"Bitty mode", false,-1);
        tracep->declBit(c+75,"Bitty carry_out", false,-1);
        tracep->declBit(c+48,"Bitty compare", false,-1);
        tracep->declBus(c+76,"Bitty alu_out", false,-1, 15,0);
        tracep->declBit(c+104,"Bitty run", false,-1);
        tracep->declBit(c+99,"Bitty regC clk", false,-1);
        tracep->declBit(c+49,"Bitty regC enable", false,-1);
        tracep->declBus(c+77,"Bitty regC in", false,-1, 15,0);
        tracep->declBus(c+12,"Bitty regC out", false,-1, 15,0);
        tracep->declBit(c+99,"Bitty regS clk", false,-1);
        tracep->declBit(c+50,"Bitty regS enable", false,-1);
        tracep->declBus(c+78,"Bitty regS in", false,-1, 15,0);
        tracep->declBus(c+13,"Bitty regS out", false,-1, 15,0);
        tracep->declBit(c+99,"Bitty reg0 clk", false,-1);
        tracep->declBit(c+51,"Bitty reg0 enable", false,-1);
        tracep->declBus(c+79,"Bitty reg0 in", false,-1, 15,0);
        tracep->declBus(c+14,"Bitty reg0 out", false,-1, 15,0);
        tracep->declBit(c+99,"Bitty reg1 clk", false,-1);
        tracep->declBit(c+52,"Bitty reg1 enable", false,-1);
        tracep->declBus(c+80,"Bitty reg1 in", false,-1, 15,0);
        tracep->declBus(c+15,"Bitty reg1 out", false,-1, 15,0);
        tracep->declBit(c+99,"Bitty reg2 clk", false,-1);
        tracep->declBit(c+53,"Bitty reg2 enable", false,-1);
        tracep->declBus(c+81,"Bitty reg2 in", false,-1, 15,0);
        tracep->declBus(c+16,"Bitty reg2 out", false,-1, 15,0);
        tracep->declBit(c+99,"Bitty reg3 clk", false,-1);
        tracep->declBit(c+54,"Bitty reg3 enable", false,-1);
        tracep->declBus(c+82,"Bitty reg3 in", false,-1, 15,0);
        tracep->declBus(c+17,"Bitty reg3 out", false,-1, 15,0);
        tracep->declBit(c+99,"Bitty reg4 clk", false,-1);
        tracep->declBit(c+55,"Bitty reg4 enable", false,-1);
        tracep->declBus(c+83,"Bitty reg4 in", false,-1, 15,0);
        tracep->declBus(c+18,"Bitty reg4 out", false,-1, 15,0);
        tracep->declBit(c+99,"Bitty reg5 clk", false,-1);
        tracep->declBit(c+56,"Bitty reg5 enable", false,-1);
        tracep->declBus(c+84,"Bitty reg5 in", false,-1, 15,0);
        tracep->declBus(c+19,"Bitty reg5 out", false,-1, 15,0);
        tracep->declBit(c+99,"Bitty reg6 clk", false,-1);
        tracep->declBit(c+57,"Bitty reg6 enable", false,-1);
        tracep->declBus(c+85,"Bitty reg6 in", false,-1, 15,0);
        tracep->declBus(c+20,"Bitty reg6 out", false,-1, 15,0);
        tracep->declBit(c+99,"Bitty reg7 clk", false,-1);
        tracep->declBit(c+58,"Bitty reg7 enable", false,-1);
        tracep->declBus(c+86,"Bitty reg7 in", false,-1, 15,0);
        tracep->declBus(c+21,"Bitty reg7 out", false,-1, 15,0);
        tracep->declBit(c+99,"Bitty reg_inst clk", false,-1);
        tracep->declBit(c+59,"Bitty reg_inst enable", false,-1);
        tracep->declBus(c+87,"Bitty reg_inst in", false,-1, 15,0);
        tracep->declBus(c+22,"Bitty reg_inst out", false,-1, 15,0);
        tracep->declBus(c+23,"Bitty mux1 reg0", false,-1, 15,0);
        tracep->declBus(c+24,"Bitty mux1 reg1", false,-1, 15,0);
        tracep->declBus(c+25,"Bitty mux1 reg2", false,-1, 15,0);
        tracep->declBus(c+26,"Bitty mux1 reg3", false,-1, 15,0);
        tracep->declBus(c+27,"Bitty mux1 reg4", false,-1, 15,0);
        tracep->declBus(c+28,"Bitty mux1 reg5", false,-1, 15,0);
        tracep->declBus(c+29,"Bitty mux1 reg6", false,-1, 15,0);
        tracep->declBus(c+30,"Bitty mux1 reg7", false,-1, 15,0);
        tracep->declBus(c+71,"Bitty mux1 sel", false,-1, 2,0);
        tracep->declBus(c+72,"Bitty mux1 out", false,-1, 15,0);
        tracep->declBit(c+103,"Bitty alu1 carry_in", false,-1);
        tracep->declBus(c+31,"Bitty alu1 in_a", false,-1, 15,0);
        tracep->declBus(c+72,"Bitty alu1 in_b", false,-1, 15,0);
        tracep->declBus(c+73,"Bitty alu1 sel", false,-1, 3,0);
        tracep->declBit(c+74,"Bitty alu1 mode", false,-1);
        tracep->declBit(c+75,"Bitty alu1 carry_out", false,-1);
        tracep->declBit(c+48,"Bitty alu1 compare", false,-1);
        tracep->declBus(c+76,"Bitty alu1 alu_out", false,-1, 15,0);
        tracep->declBus(c+88,"Bitty alu1 temp_a_out", false,-1, 15,0);
        tracep->declBus(c+89,"Bitty alu1 temp_l_out", false,-1, 15,0);
        tracep->declBit(c+90,"Bitty alu1 arithmetic_carry_out", false,-1);
        tracep->declBit(c+103,"Bitty alu1 myArithUnit carry_in", false,-1);
        tracep->declBus(c+31,"Bitty alu1 myArithUnit in_a", false,-1, 15,0);
        tracep->declBus(c+72,"Bitty alu1 myArithUnit in_b", false,-1, 15,0);
        tracep->declBus(c+73,"Bitty alu1 myArithUnit sel", false,-1, 3,0);
        tracep->declBit(c+90,"Bitty alu1 myArithUnit carry_out", false,-1);
        tracep->declBus(c+88,"Bitty alu1 myArithUnit alu_out", false,-1, 15,0);
        tracep->declBus(c+31,"Bitty alu1 myLogicUnit in_a", false,-1, 15,0);
        tracep->declBus(c+72,"Bitty alu1 myLogicUnit in_b", false,-1, 15,0);
        tracep->declBus(c+73,"Bitty alu1 myLogicUnit sel", false,-1, 3,0);
        tracep->declBus(c+89,"Bitty alu1 myLogicUnit alu_out", false,-1, 15,0);
        tracep->declBit(c+99,"Bitty ControlUnit1 clk", false,-1);
        tracep->declBit(c+100,"Bitty ControlUnit1 reset", false,-1);
        tracep->declBus(c+101,"Bitty ControlUnit1 instruction", false,-1, 15,0);
        tracep->declBit(c+104,"Bitty ControlUnit1 run", false,-1);
        tracep->declBus(c+73,"Bitty ControlUnit1 alu_sel", false,-1, 3,0);
        tracep->declBus(c+71,"Bitty ControlUnit1 mux_sel", false,-1, 2,0);
        tracep->declBit(c+74,"Bitty ControlUnit1 mode", false,-1);
        tracep->declBit(c+32,"Bitty ControlUnit1 en_s", false,-1);
        tracep->declBit(c+33,"Bitty ControlUnit1 en_c", false,-1);
        tracep->declBit(c+91,"Bitty ControlUnit1 en_0", false,-1);
        tracep->declBit(c+92,"Bitty ControlUnit1 en_1", false,-1);
        tracep->declBit(c+93,"Bitty ControlUnit1 en_2", false,-1);
        tracep->declBit(c+94,"Bitty ControlUnit1 en_3", false,-1);
        tracep->declBit(c+95,"Bitty ControlUnit1 en_4", false,-1);
        tracep->declBit(c+96,"Bitty ControlUnit1 en_5", false,-1);
        tracep->declBit(c+97,"Bitty ControlUnit1 en_6", false,-1);
        tracep->declBit(c+98,"Bitty ControlUnit1 en_7", false,-1);
        tracep->declBit(c+34,"Bitty ControlUnit1 en_inst", false,-1);
        tracep->declBit(c+102,"Bitty ControlUnit1 done", false,-1);
        tracep->declBus(c+35,"Bitty ControlUnit1 state", false,-1, 1,0);
        tracep->declBus(c+36,"Bitty ControlUnit1 next_state", false,-1, 1,0);
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
        tracep->fullSData(oldp+1,(vlTOPp->Bitty__DOT__d_out[0]),16);
        tracep->fullSData(oldp+2,(vlTOPp->Bitty__DOT__d_out[1]),16);
        tracep->fullSData(oldp+3,(vlTOPp->Bitty__DOT__d_out[2]),16);
        tracep->fullSData(oldp+4,(vlTOPp->Bitty__DOT__d_out[3]),16);
        tracep->fullSData(oldp+5,(vlTOPp->Bitty__DOT__d_out[4]),16);
        tracep->fullSData(oldp+6,(vlTOPp->Bitty__DOT__d_out[5]),16);
        tracep->fullSData(oldp+7,(vlTOPp->Bitty__DOT__d_out[6]),16);
        tracep->fullSData(oldp+8,(vlTOPp->Bitty__DOT__d_out[7]),16);
        tracep->fullSData(oldp+9,(vlTOPp->Bitty__DOT__d_out[8]),16);
        tracep->fullSData(oldp+10,(vlTOPp->Bitty__DOT__d_out[9]),16);
        tracep->fullSData(oldp+11,(vlTOPp->Bitty__DOT__d_out[10]),16);
        tracep->fullSData(oldp+12,(vlTOPp->Bitty__DOT____Vcellout__regC__out),16);
        tracep->fullSData(oldp+13,(vlTOPp->Bitty__DOT____Vcellout__regS__out),16);
        tracep->fullSData(oldp+14,(vlTOPp->Bitty__DOT____Vcellout__reg0__out),16);
        tracep->fullSData(oldp+15,(vlTOPp->Bitty__DOT____Vcellout__reg1__out),16);
        tracep->fullSData(oldp+16,(vlTOPp->Bitty__DOT____Vcellout__reg2__out),16);
        tracep->fullSData(oldp+17,(vlTOPp->Bitty__DOT____Vcellout__reg3__out),16);
        tracep->fullSData(oldp+18,(vlTOPp->Bitty__DOT____Vcellout__reg4__out),16);
        tracep->fullSData(oldp+19,(vlTOPp->Bitty__DOT____Vcellout__reg5__out),16);
        tracep->fullSData(oldp+20,(vlTOPp->Bitty__DOT____Vcellout__reg6__out),16);
        tracep->fullSData(oldp+21,(vlTOPp->Bitty__DOT____Vcellout__reg7__out),16);
        tracep->fullSData(oldp+22,(vlTOPp->Bitty__DOT____Vcellout__reg_inst__out),16);
        tracep->fullSData(oldp+23,(vlTOPp->Bitty__DOT__d_out
                                   [2U]),16);
        tracep->fullSData(oldp+24,(vlTOPp->Bitty__DOT__d_out
                                   [3U]),16);
        tracep->fullSData(oldp+25,(vlTOPp->Bitty__DOT__d_out
                                   [4U]),16);
        tracep->fullSData(oldp+26,(vlTOPp->Bitty__DOT__d_out
                                   [5U]),16);
        tracep->fullSData(oldp+27,(vlTOPp->Bitty__DOT__d_out
                                   [6U]),16);
        tracep->fullSData(oldp+28,(vlTOPp->Bitty__DOT__d_out
                                   [7U]),16);
        tracep->fullSData(oldp+29,(vlTOPp->Bitty__DOT__d_out
                                   [8U]),16);
        tracep->fullSData(oldp+30,(vlTOPp->Bitty__DOT__d_out
                                   [9U]),16);
        tracep->fullSData(oldp+31,(vlTOPp->Bitty__DOT__d_out
                                   [0U]),16);
        tracep->fullBit(oldp+32,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_s));
        tracep->fullBit(oldp+33,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_c));
        tracep->fullBit(oldp+34,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_inst));
        tracep->fullCData(oldp+35,(vlTOPp->Bitty__DOT__ControlUnit1__DOT__state),2);
        tracep->fullCData(oldp+36,(vlTOPp->Bitty__DOT__ControlUnit1__DOT__next_state),2);
        tracep->fullBit(oldp+37,(vlTOPp->Bitty__DOT__reg_en[0]));
        tracep->fullBit(oldp+38,(vlTOPp->Bitty__DOT__reg_en[1]));
        tracep->fullBit(oldp+39,(vlTOPp->Bitty__DOT__reg_en[2]));
        tracep->fullBit(oldp+40,(vlTOPp->Bitty__DOT__reg_en[3]));
        tracep->fullBit(oldp+41,(vlTOPp->Bitty__DOT__reg_en[4]));
        tracep->fullBit(oldp+42,(vlTOPp->Bitty__DOT__reg_en[5]));
        tracep->fullBit(oldp+43,(vlTOPp->Bitty__DOT__reg_en[6]));
        tracep->fullBit(oldp+44,(vlTOPp->Bitty__DOT__reg_en[7]));
        tracep->fullBit(oldp+45,(vlTOPp->Bitty__DOT__reg_en[8]));
        tracep->fullBit(oldp+46,(vlTOPp->Bitty__DOT__reg_en[9]));
        tracep->fullBit(oldp+47,(vlTOPp->Bitty__DOT__reg_en[10]));
        tracep->fullBit(oldp+48,((vlTOPp->Bitty__DOT__d_out
                                  [0U] == (IData)(vlTOPp->Bitty__DOT__mux_out))));
        tracep->fullBit(oldp+49,(vlTOPp->Bitty__DOT__reg_en
                                 [1U]));
        tracep->fullBit(oldp+50,(vlTOPp->Bitty__DOT__reg_en
                                 [0U]));
        tracep->fullBit(oldp+51,(vlTOPp->Bitty__DOT__reg_en
                                 [2U]));
        tracep->fullBit(oldp+52,(vlTOPp->Bitty__DOT__reg_en
                                 [3U]));
        tracep->fullBit(oldp+53,(vlTOPp->Bitty__DOT__reg_en
                                 [4U]));
        tracep->fullBit(oldp+54,(vlTOPp->Bitty__DOT__reg_en
                                 [5U]));
        tracep->fullBit(oldp+55,(vlTOPp->Bitty__DOT__reg_en
                                 [6U]));
        tracep->fullBit(oldp+56,(vlTOPp->Bitty__DOT__reg_en
                                 [7U]));
        tracep->fullBit(oldp+57,(vlTOPp->Bitty__DOT__reg_en
                                 [8U]));
        tracep->fullBit(oldp+58,(vlTOPp->Bitty__DOT__reg_en
                                 [9U]));
        tracep->fullBit(oldp+59,(vlTOPp->Bitty__DOT__reg_en
                                 [0xaU]));
        tracep->fullSData(oldp+60,(vlTOPp->Bitty__DOT__d_in[0]),16);
        tracep->fullSData(oldp+61,(vlTOPp->Bitty__DOT__d_in[1]),16);
        tracep->fullSData(oldp+62,(vlTOPp->Bitty__DOT__d_in[2]),16);
        tracep->fullSData(oldp+63,(vlTOPp->Bitty__DOT__d_in[3]),16);
        tracep->fullSData(oldp+64,(vlTOPp->Bitty__DOT__d_in[4]),16);
        tracep->fullSData(oldp+65,(vlTOPp->Bitty__DOT__d_in[5]),16);
        tracep->fullSData(oldp+66,(vlTOPp->Bitty__DOT__d_in[6]),16);
        tracep->fullSData(oldp+67,(vlTOPp->Bitty__DOT__d_in[7]),16);
        tracep->fullSData(oldp+68,(vlTOPp->Bitty__DOT__d_in[8]),16);
        tracep->fullSData(oldp+69,(vlTOPp->Bitty__DOT__d_in[9]),16);
        tracep->fullSData(oldp+70,(vlTOPp->Bitty__DOT__d_in[10]),16);
        tracep->fullCData(oldp+71,(vlTOPp->Bitty__DOT__mux_sel),3);
        tracep->fullSData(oldp+72,(vlTOPp->Bitty__DOT__mux_out),16);
        tracep->fullCData(oldp+73,(vlTOPp->Bitty__DOT__alu_sel),4);
        tracep->fullBit(oldp+74,(vlTOPp->Bitty__DOT__mode));
        tracep->fullBit(oldp+75,(vlTOPp->Bitty__DOT__carry_out));
        tracep->fullSData(oldp+76,(vlTOPp->Bitty__DOT__alu_out),16);
        tracep->fullSData(oldp+77,(vlTOPp->Bitty__DOT__d_in
                                   [1U]),16);
        tracep->fullSData(oldp+78,(vlTOPp->Bitty__DOT__d_in
                                   [0U]),16);
        tracep->fullSData(oldp+79,(vlTOPp->Bitty__DOT__d_in
                                   [2U]),16);
        tracep->fullSData(oldp+80,(vlTOPp->Bitty__DOT__d_in
                                   [3U]),16);
        tracep->fullSData(oldp+81,(vlTOPp->Bitty__DOT__d_in
                                   [4U]),16);
        tracep->fullSData(oldp+82,(vlTOPp->Bitty__DOT__d_in
                                   [5U]),16);
        tracep->fullSData(oldp+83,(vlTOPp->Bitty__DOT__d_in
                                   [6U]),16);
        tracep->fullSData(oldp+84,(vlTOPp->Bitty__DOT__d_in
                                   [7U]),16);
        tracep->fullSData(oldp+85,(vlTOPp->Bitty__DOT__d_in
                                   [8U]),16);
        tracep->fullSData(oldp+86,(vlTOPp->Bitty__DOT__d_in
                                   [9U]),16);
        tracep->fullSData(oldp+87,(vlTOPp->Bitty__DOT__d_in
                                   [0xaU]),16);
        tracep->fullSData(oldp+88,(vlTOPp->Bitty__DOT__alu1__DOT__temp_a_out),16);
        tracep->fullSData(oldp+89,(vlTOPp->Bitty__DOT__alu1__DOT__temp_l_out),16);
        tracep->fullBit(oldp+90,(vlTOPp->Bitty__DOT__alu1__DOT__arithmetic_carry_out));
        tracep->fullBit(oldp+91,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_0));
        tracep->fullBit(oldp+92,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_1));
        tracep->fullBit(oldp+93,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_2));
        tracep->fullBit(oldp+94,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_3));
        tracep->fullBit(oldp+95,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_4));
        tracep->fullBit(oldp+96,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_5));
        tracep->fullBit(oldp+97,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_6));
        tracep->fullBit(oldp+98,(vlTOPp->Bitty__DOT____Vcellout__ControlUnit1__en_7));
        tracep->fullBit(oldp+99,(vlTOPp->clk));
        tracep->fullBit(oldp+100,(vlTOPp->reset));
        tracep->fullSData(oldp+101,(vlTOPp->din),16);
        tracep->fullBit(oldp+102,(vlTOPp->done));
        tracep->fullBit(oldp+103,(vlTOPp->Bitty__DOT__carry_in));
        tracep->fullBit(oldp+104,(vlTOPp->Bitty__DOT__run));
    }
}
