// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__2(Vfifo_tb___024root* vlSelf);

void Vfifo_tb___024root___eval_initial(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.fifo_tb__DOT__pass_count = 0U;
        vlSelfRef.fifo_tb__DOT__fail_count = 0U;
        vlSelfRef.fifo_tb__DOT__expected_data = 0U;
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fifo_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb\\fifo_tb.v", 
                                             40);
        vlSelfRef.fifo_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.fifo_tb__DOT__clk)));
    }
    co_return;
}

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fifo_tb__DOT__rst = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 0U;
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    vlSelfRef.fifo_tb__DOT__wr_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb\\fifo_tb.v", 
                                         53);
    vlSelfRef.fifo_tb__DOT__rst = 0U;
    co_return;
}

void Vfifo_tb___024root____VbeforeTrig_hc39456c2__0(Vfifo_tb___024root* vlSelf, const char* __VeventDescription);
void Vfifo_tb___024root____VbeforeTrig_hcca597a2__0(Vfifo_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__2(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtask_fifo_tb__DOT__write_fifo__0__data;
    __Vtask_fifo_tb__DOT__write_fifo__0__data = 0;
    // Body
    Vfifo_tb___024root____VbeforeTrig_hc39456c2__0(vlSelf, 
                                                   "@(negedge fifo_tb.rst)");
    co_await vlSelfRef.__VtrigSched_hc39456c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.rst)", 
                                                         "tb\\fifo_tb.v", 
                                                         118);
    VL_WRITEF_NX("====================================\n Starting FIFO Directed Test Cases \n====================================\n",0);
    __Vtask_fifo_tb__DOT__write_fifo__0__data = 0x55U;
    vlSelfRef.fifo_tb__DOT__write_fifo__Vstatic__data 
        = __Vtask_fifo_tb__DOT__write_fifo__0__data;
    Vfifo_tb___024root____VbeforeTrig_hcca597a2__0(vlSelf, 
                                                   "@(posedge fifo_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcca597a2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb\\fifo_tb.v", 
                                                         63);
    if ((0x10U != (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count))) {
        vlSelfRef.fifo_tb__DOT__wr_en = 1U;
        vlSelfRef.fifo_tb__DOT__wr_data = vlSelfRef.fifo_tb__DOT__write_fifo__Vstatic__data;
    }
    Vfifo_tb___024root____VbeforeTrig_hcca597a2__0(vlSelf, 
                                                   "@(posedge fifo_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcca597a2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb\\fifo_tb.v", 
                                                         71);
    vlSelfRef.fifo_tb__DOT__wr_en = 0U;
    vlSelfRef.fifo_tb__DOT__wr_data = 0U;
    Vfifo_tb___024root____VbeforeTrig_hcca597a2__0(vlSelf, 
                                                   "@(posedge fifo_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcca597a2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb\\fifo_tb.v", 
                                                         83);
    if ((0U != (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count))) {
        vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    }
    Vfifo_tb___024root____VbeforeTrig_hcca597a2__0(vlSelf, 
                                                   "@(posedge fifo_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcca597a2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb\\fifo_tb.v", 
                                                         88);
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb\\fifo_tb.v", 
                                         130);
    VL_WRITEF_NX("====================================\n Simulation Completed \n====================================\n",0);
    VL_FINISH_MT("tb\\fifo_tb.v", 136, "");
    co_return;
}

bool Vfifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vfifo_tb___024root___eval_nba(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_nba\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            vlSelfRef.__VdlySet__fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem__v0 = 0U;
            if (vlSelfRef.fifo_tb__DOT__DUT__DOT__write_enable) {
                vlSelfRef.__VdlyVal__fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem__v0 
                    = vlSelfRef.fifo_tb__DOT__wr_data;
                vlSelfRef.__VdlyDim0__fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem__v0 
                    = vlSelfRef.fifo_tb__DOT__DUT__DOT__wr_ptr;
                vlSelfRef.__VdlySet__fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem__v0 = 1U;
            }
        }
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            CData/*3:0*/ __Vinline_0__nba_sequent__TOP__1___Vdly__fifo_tb__DOT__DUT__DOT__wr_ptr;
            __Vinline_0__nba_sequent__TOP__1___Vdly__fifo_tb__DOT__DUT__DOT__wr_ptr = 0;
            vlSelfRef.__Vdly__fifo_tb__DOT__DUT__DOT__rd_ptr 
                = vlSelfRef.fifo_tb__DOT__DUT__DOT__rd_ptr;
            __Vinline_0__nba_sequent__TOP__1___Vdly__fifo_tb__DOT__DUT__DOT__wr_ptr 
                = vlSelfRef.fifo_tb__DOT__DUT__DOT__wr_ptr;
            vlSelfRef.__Vdly__fifo_tb__DOT__DUT__DOT__count 
                = vlSelfRef.fifo_tb__DOT__DUT__DOT__count;
            if (vlSelfRef.fifo_tb__DOT__rst) {
                vlSelfRef.__Vdly__fifo_tb__DOT__DUT__DOT__rd_ptr = 0U;
                __Vinline_0__nba_sequent__TOP__1___Vdly__fifo_tb__DOT__DUT__DOT__wr_ptr = 0U;
                vlSelfRef.__Vdly__fifo_tb__DOT__DUT__DOT__count = 0U;
            } else {
                if (((IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__read_enable) 
                     & (0U != (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count)))) {
                    vlSelfRef.__Vdly__fifo_tb__DOT__DUT__DOT__rd_ptr 
                        = ((0x0fU == (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__rd_ptr))
                            ? 0U : (0x0000000fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__rd_ptr))));
                }
                if (((IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__write_enable) 
                     & (0x10U != (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count)))) {
                    __Vinline_0__nba_sequent__TOP__1___Vdly__fifo_tb__DOT__DUT__DOT__wr_ptr 
                        = ((0x0fU == (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__wr_ptr))
                            ? 0U : (0x0000000fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__wr_ptr))));
                }
                vlSelfRef.__Vdly__fifo_tb__DOT__DUT__DOT__count 
                    = (0x0000001fU & ((2U == ((((IData)(vlSelfRef.fifo_tb__DOT__wr_en) 
                                                & (0x10U 
                                                   != (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count))) 
                                               << 1U) 
                                              | ((IData)(vlSelfRef.fifo_tb__DOT__rd_en) 
                                                 & (0U 
                                                    != (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count)))))
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count))
                                       : ((1U == ((
                                                   ((IData)(vlSelfRef.fifo_tb__DOT__wr_en) 
                                                    & (0x10U 
                                                       != (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.fifo_tb__DOT__rd_en) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count)))))
                                           ? ((IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count) 
                                              - (IData)(1U))
                                           : (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count))));
            }
            vlSelfRef.fifo_tb__DOT__DUT__DOT__wr_ptr 
                = __Vinline_0__nba_sequent__TOP__1___Vdly__fifo_tb__DOT__DUT__DOT__wr_ptr;
        }
    }
    if ((0x000000000000003fULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            if (VL_UNLIKELY(((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)))))) {
                VL_WRITEF_NX("Time=%0t | wr_en=%b rd_en=%b wr_data=%h rd_data=%h full=%b empty=%b\n",8, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(vlSelfRef.fifo_tb__DOT__wr_en)
                             , '#',1,vlSelfRef.fifo_tb__DOT__rd_en
                             , '#',8,(IData)(vlSelfRef.fifo_tb__DOT__wr_data)
                             , '#',8,vlSelfRef.fifo_tb__DOT__rd_data
                             , '#',1,(0x10U == (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count))
                             , '#',1,(0U == (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count)));
            }
        }
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            if (vlSelfRef.fifo_tb__DOT__DUT__DOT__read_enable) {
                vlSelfRef.fifo_tb__DOT__rd_data = vlSelfRef.fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem
                    [vlSelfRef.fifo_tb__DOT__DUT__DOT__rd_ptr];
            }
            if (vlSelfRef.__VdlySet__fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem__v0) {
                vlSelfRef.fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem[vlSelfRef.__VdlyDim0__fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem__v0;
            }
        }
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            vlSelfRef.fifo_tb__DOT__DUT__DOT__count 
                = vlSelfRef.__Vdly__fifo_tb__DOT__DUT__DOT__count;
            vlSelfRef.fifo_tb__DOT__DUT__DOT__rd_ptr 
                = vlSelfRef.__Vdly__fifo_tb__DOT__DUT__DOT__rd_ptr;
        }
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0x00000000000003c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _act_comb__TOP__0
            vlSelfRef.fifo_tb__DOT__DUT__DOT__read_enable 
                = ((0U != (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count)) 
                   & (IData)(vlSelfRef.fifo_tb__DOT__rd_en));
            vlSelfRef.fifo_tb__DOT__DUT__DOT__write_enable 
                = ((0x10U != (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count)) 
                   & (IData)(vlSelfRef.fifo_tb__DOT__wr_en));
        }
    }
}

void Vfifo_tb___024root___timing_ready(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___timing_ready\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000200ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc39456c2__0.ready("@(negedge fifo_tb.rst)");
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hcca597a2__0.ready("@(posedge fifo_tb.clk)");
    }
}

void Vfifo_tb___024root___timing_resume(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___timing_resume\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc39456c2__0.moveToResumeQueue(
                                                          "@(negedge fifo_tb.rst)");
    vlSelfRef.__VtrigSched_hcca597a2__0.moveToResumeQueue(
                                                          "@(posedge fifo_tb.clk)");
    vlSelfRef.__VtrigSched_hc39456c2__0.resume("@(negedge fifo_tb.rst)");
    vlSelfRef.__VtrigSched_hcca597a2__0.resume("@(posedge fifo_tb.clk)");
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfifo_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vfifo_tb___024root___eval_phase__act(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__act\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h090031a4__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h090031a4__0 = 0;
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h09012033__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h09012033__0 = 0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h090031a4__0 
            = (0x10U == (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count));
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h09012033__0 
            = (0U == (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count));
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((((~ (IData)(vlSelfRef.fifo_tb__DOT__rst)) 
                                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rst__0)) 
                                                           << 9U) 
                                                          | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                             << 8U)) 
                                                         | (((((((IData)(vlSelfRef.fifo_tb__DOT__rst) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rst__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.fifo_tb__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | (((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h09012033__0 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr_h09012033__1)) 
                                                                  << 1U) 
                                                                 | (__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h090031a4__0 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr_h090031a4__1)))) 
                                                             << 4U) 
                                                            | (((((IData)(vlSelfRef.fifo_tb__DOT__wr_en) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_en__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.fifo_tb__DOT__wr_data) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_data__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.fifo_tb__DOT__rd_en) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_en__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.fifo_tb__DOT__rd_data) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_data__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_data__0 
            = vlSelfRef.fifo_tb__DOT__rd_data;
        vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_en__0 
            = vlSelfRef.fifo_tb__DOT__rd_en;
        vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_data__0 
            = vlSelfRef.fifo_tb__DOT__wr_data;
        vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_en__0 
            = vlSelfRef.fifo_tb__DOT__wr_en;
        vlSelfRef.__Vtrigprevexpr_h090031a4__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h090031a4__0;
        vlSelfRef.__Vtrigprevexpr_h09012033__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h09012033__0;
        vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0 
            = vlSelfRef.fifo_tb__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rst__0 
            = vlSelfRef.fifo_tb__DOT__rst;
    }
    Vfifo_tb___024root___timing_ready(vlSelf);
    Vfifo_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vfifo_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vfifo_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vfifo_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((0x0000000000000340ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.fifo_tb__DOT__DUT__DOT__read_enable 
                        = ((0U != (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count)) 
                           & (IData)(vlSelfRef.fifo_tb__DOT__rd_en));
                    vlSelfRef.fifo_tb__DOT__DUT__DOT__write_enable 
                        = ((0x10U != (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count)) 
                           & (IData)(vlSelfRef.fifo_tb__DOT__wr_en));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vfifo_tb___024root___eval_phase__inact(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__inact\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb\\fifo_tb.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vfifo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfifo_tb___024root___eval_phase__nba(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__nba\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vfifo_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vfifo_tb___024root___eval_nba(vlSelf);
        Vfifo_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vfifo_tb___024root___eval(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vfifo_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb\\fifo_tb.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb\\fifo_tb.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vfifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb\\fifo_tb.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vfifo_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vfifo_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vfifo_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vfifo_tb___024root____VbeforeTrig_hc39456c2__0(Vfifo_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root____VbeforeTrig_hc39456c2__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.fifo_tb__DOT__rst)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rst__0)) 
                                  << 9U)));
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rst__0 
        = vlSelfRef.fifo_tb__DOT__rst;
    if ((0x0000000000000200ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc39456c2__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vfifo_tb___024root____VbeforeTrig_hcca597a2__0(Vfifo_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root____VbeforeTrig_hcca597a2__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.fifo_tb__DOT__clk) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0))) 
                                  << 6U)));
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0 
        = vlSelfRef.fifo_tb__DOT__clk;
    if ((0x0000000000000040ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hcca597a2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcca597a2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcca597a2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcca597a2__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vfifo_tb___024root___eval_debug_assertions(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_debug_assertions\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
