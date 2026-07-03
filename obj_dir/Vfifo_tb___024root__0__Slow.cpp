// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"

void Vfifo_tb___024root___timing_ready(Vfifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vfifo_tb___024root___eval_static(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_static\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_data__0 
        = vlSelfRef.fifo_tb__DOT__rd_data;
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_en__0 
        = vlSelfRef.fifo_tb__DOT__rd_en;
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_data__0 
        = vlSelfRef.fifo_tb__DOT__wr_data;
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_en__0 
        = vlSelfRef.fifo_tb__DOT__wr_en;
    vlSelfRef.__Vtrigprevexpr_h090031a4__1 = (0x10U 
                                              == (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count));
    vlSelfRef.__Vtrigprevexpr_h09012033__1 = (0U == (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count));
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0 
        = vlSelfRef.fifo_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__rst__0 
        = vlSelfRef.fifo_tb__DOT__rst;
    Vfifo_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vfifo_tb___024root___eval_final(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_final\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfifo_tb___024root___eval_phase__stl(Vfifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vfifo_tb___024root___eval_settle(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_settle\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vfifo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb\\fifo_tb.v", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vfifo_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vfifo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vfifo_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vfifo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vfifo_tb___024root___eval_phase__stl(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__stl\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vfifo_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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
    return (__VstlExecute);
}

bool Vfifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vfifo_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( fifo_tb.rd_data)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( fifo_tb.rd_en)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( fifo_tb.wr_data)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( fifo_tb.wr_en)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( (5'h10 == fifo_tb.DUT.count))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( (5'h0 == fifo_tb.DUT.count))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge fifo_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge fifo_tb.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(negedge fifo_tb.rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfifo_tb___024root___ctor_var_reset(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___ctor_var_reset\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->fifo_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3436647066906983536ull);
    vlSelf->fifo_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5905268014475821339ull);
    vlSelf->fifo_tb__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1384146367724459340ull);
    vlSelf->fifo_tb__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14368826268811908699ull);
    vlSelf->fifo_tb__DOT__wr_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13380387125480576830ull);
    vlSelf->fifo_tb__DOT__rd_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13661825344459562342ull);
    vlSelf->fifo_tb__DOT__write_fifo__Vstatic__data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7672444889256586227ull);
    vlSelf->fifo_tb__DOT__pass_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12200139714482639347ull);
    vlSelf->fifo_tb__DOT__fail_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11546862754412838048ull);
    vlSelf->fifo_tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5314357979980574131ull);
    vlSelf->fifo_tb__DOT__expected_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5196281088788945658ull);
    vlSelf->fifo_tb__DOT__DUT__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3978894283784872941ull);
    vlSelf->fifo_tb__DOT__DUT__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13464936128139229274ull);
    vlSelf->fifo_tb__DOT__DUT__DOT__count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6657632746414999609ull);
    vlSelf->fifo_tb__DOT__DUT__DOT__write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12037578136074577553ull);
    vlSelf->fifo_tb__DOT__DUT__DOT__read_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7107444420168369014ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1258877013989980112ull);
    }
    vlSelf->__Vdly__fifo_tb__DOT__DUT__DOT__count = 0;
    vlSelf->__Vdly__fifo_tb__DOT__DUT__DOT__rd_ptr = 0;
    vlSelf->__VdlyVal__fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rd_en__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__wr_en__0 = 0;
    vlSelf->__Vtrigprevexpr_h090031a4__1 = 0;
    vlSelf->__Vtrigprevexpr_h09012033__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
