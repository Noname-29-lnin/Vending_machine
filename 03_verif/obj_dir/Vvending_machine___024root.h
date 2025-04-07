// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvending_machine.h for the primary calling header

#ifndef VERILATED_VVENDING_MACHINE___024ROOT_H_
#define VERILATED_VVENDING_MACHINE___024ROOT_H_  // guard

#include "verilated.h"


class Vvending_machine__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvending_machine___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rst_n,0,0);
    VL_IN8(i_nickle,0,0);
    VL_IN8(i_dime,0,0);
    VL_IN8(i_quarter,0,0);
    VL_OUT8(o_soda,0,0);
    VL_OUT8(o_change,2,0);
    CData/*3:0*/ vending_machine__DOT__state;
    CData/*3:0*/ vending_machine__DOT__nstate;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vvending_machine__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvending_machine___024root(Vvending_machine__Syms* symsp, const char* v__name);
    ~Vvending_machine___024root();
    VL_UNCOPYABLE(Vvending_machine___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
