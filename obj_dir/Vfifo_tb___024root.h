// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfifo_tb.h for the primary calling header

#ifndef VERILATED_VFIFO_TB___024ROOT_H_
#define VERILATED_VFIFO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vfifo_tb___024unit;


class Vfifo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfifo_tb___024root final {
  public:
    // CELLS
    Vfifo_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ fifo_tb__DOT__clk;
    CData/*0:0*/ fifo_tb__DOT__rst;
    CData/*0:0*/ fifo_tb__DOT__wr_en;
    CData/*0:0*/ fifo_tb__DOT__rd_en;
    CData/*7:0*/ fifo_tb__DOT__wr_data;
    CData/*7:0*/ fifo_tb__DOT__rd_data;
    CData/*7:0*/ fifo_tb__DOT__write_fifo__Vstatic__data;
    CData/*7:0*/ fifo_tb__DOT__expected_data;
    CData/*3:0*/ fifo_tb__DOT__DUT__DOT__wr_ptr;
    CData/*3:0*/ fifo_tb__DOT__DUT__DOT__rd_ptr;
    CData/*4:0*/ fifo_tb__DOT__DUT__DOT__count;
    CData/*0:0*/ fifo_tb__DOT__DUT__DOT__write_enable;
    CData/*0:0*/ fifo_tb__DOT__DUT__DOT__read_enable;
    CData/*4:0*/ __Vdly__fifo_tb__DOT__DUT__DOT__count;
    CData/*3:0*/ __Vdly__fifo_tb__DOT__DUT__DOT__rd_ptr;
    CData/*7:0*/ __VdlyVal__fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem__v0;
    CData/*3:0*/ __VdlyDim0__fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem__v0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*7:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__rd_data__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__rd_en__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__wr_data__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__wr_en__0;
    CData/*0:0*/ __Vtrigprevexpr_h090031a4__1;
    CData/*0:0*/ __Vtrigprevexpr_h09012033__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__rst__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ fifo_tb__DOT__pass_count;
    IData/*31:0*/ fifo_tb__DOT__fail_count;
    IData/*31:0*/ fifo_tb__DOT__i;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*7:0*/, 16> fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc39456c2__0;
    VlTriggerScheduler __VtrigSched_hcca597a2__0;

    // INTERNAL VARIABLES
    Vfifo_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vfifo_tb___024root(Vfifo_tb__Syms* symsp, const char* namep);
    ~Vfifo_tb___024root();
    VL_UNCOPYABLE(Vfifo_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
