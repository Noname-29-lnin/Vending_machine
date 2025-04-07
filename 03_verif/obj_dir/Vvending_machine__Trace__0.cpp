// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvending_machine__Syms.h"


void Vvending_machine___024root__trace_chg_0_sub_0(Vvending_machine___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vvending_machine___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root__trace_chg_0\n"); );
    // Init
    Vvending_machine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvending_machine___024root*>(voidSelf);
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vvending_machine___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vvending_machine___024root__trace_chg_0_sub_0(Vvending_machine___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->i_clk));
    bufp->chgBit(oldp+1,(vlSelf->i_rst_n));
    bufp->chgBit(oldp+2,(vlSelf->i_nickle));
    bufp->chgBit(oldp+3,(vlSelf->i_dime));
    bufp->chgBit(oldp+4,(vlSelf->i_quarter));
    bufp->chgBit(oldp+5,(vlSelf->o_soda));
    bufp->chgCData(oldp+6,(vlSelf->o_change),3);
    bufp->chgCData(oldp+7,(vlSelf->vending_machine__DOT__state),4);
    bufp->chgCData(oldp+8,(vlSelf->vending_machine__DOT__nstate),4);
}

void Vvending_machine___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root__trace_cleanup\n"); );
    // Init
    Vvending_machine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvending_machine___024root*>(voidSelf);
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
