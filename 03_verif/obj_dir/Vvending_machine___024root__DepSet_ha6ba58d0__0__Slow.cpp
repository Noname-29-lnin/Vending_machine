// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvending_machine.h for the primary calling header

#include "Vvending_machine__pch.h"
#include "Vvending_machine___024root.h"

VL_ATTR_COLD void Vvending_machine___024root___eval_static(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vvending_machine___024root___eval_initial(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
    vlSelf->__Vtrigprevexpr___TOP__i_rst_n__0 = vlSelf->i_rst_n;
}

VL_ATTR_COLD void Vvending_machine___024root___eval_final(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__stl(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vvending_machine___024root___eval_phase__stl(Vvending_machine___024root* vlSelf);

VL_ATTR_COLD void Vvending_machine___024root___eval_settle(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vvending_machine___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../02_rtl/FSM/vending_machine.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vvending_machine___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__stl(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*3:0*/, 128> Vvending_machine__ConstPool__TABLE_hc385ec6f_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vvending_machine__ConstPool__TABLE_he2e0bc16_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vvending_machine__ConstPool__TABLE_h5e927b8f_0;

VL_ATTR_COLD void Vvending_machine___024root___stl_sequent__TOP__0(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->i_quarter) << 6U) 
                    | (((IData)(vlSelf->i_dime) << 5U) 
                       | (((IData)(vlSelf->i_nickle) 
                           << 4U) | (IData)(vlSelf->vending_machine__DOT__state))));
    vlSelf->vending_machine__DOT__nstate = Vvending_machine__ConstPool__TABLE_hc385ec6f_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->vending_machine__DOT__state;
    vlSelf->o_soda = Vvending_machine__ConstPool__TABLE_he2e0bc16_0
        [__Vtableidx2];
    vlSelf->o_change = Vvending_machine__ConstPool__TABLE_h5e927b8f_0
        [__Vtableidx2];
}

VL_ATTR_COLD void Vvending_machine___024root___eval_stl(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vvending_machine___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vvending_machine___024root___eval_triggers__stl(Vvending_machine___024root* vlSelf);

VL_ATTR_COLD bool Vvending_machine___024root___eval_phase__stl(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vvending_machine___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vvending_machine___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__ico(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__act(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_clk or negedge i_rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__nba(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_clk or negedge i_rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvending_machine___024root___ctor_var_reset(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_rst_n = VL_RAND_RESET_I(1);
    vlSelf->i_nickle = VL_RAND_RESET_I(1);
    vlSelf->i_dime = VL_RAND_RESET_I(1);
    vlSelf->i_quarter = VL_RAND_RESET_I(1);
    vlSelf->o_soda = VL_RAND_RESET_I(1);
    vlSelf->o_change = VL_RAND_RESET_I(3);
    vlSelf->vending_machine__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->vending_machine__DOT__nstate = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_rst_n__0 = VL_RAND_RESET_I(1);
}
