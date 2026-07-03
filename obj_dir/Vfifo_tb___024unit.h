// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfifo_tb.h for the primary calling header

#ifndef VERILATED_VFIFO_TB___024UNIT_H_
#define VERILATED_VFIFO_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfifo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfifo_tb___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vfifo_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vfifo_tb___024unit();
    ~Vfifo_tb___024unit();
    void ctor(Vfifo_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vfifo_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
