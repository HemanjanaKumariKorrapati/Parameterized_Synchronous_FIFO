// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vfifo_tb__Syms.h"


void Vfifo_tb___024root__trace_chg_0_sub_0(Vfifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfifo_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_chg_0\n"); );
    // Body
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vfifo_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfifo_tb___024root__trace_chg_dtype____0(Vfifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar);

void Vfifo_tb___024root__trace_chg_0_sub_0(Vfifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_chg_0_sub_0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.fifo_tb__DOT__pass_count),32);
        bufp->chgIData(oldp+1,(vlSelfRef.fifo_tb__DOT__fail_count),32);
        bufp->chgCData(oldp+2,(vlSelfRef.fifo_tb__DOT__expected_data),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+3,((0x10U == (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count))));
        bufp->chgBit(oldp+4,((0U == (IData)(vlSelfRef.fifo_tb__DOT__DUT__DOT__count))));
        bufp->chgCData(oldp+5,(vlSelfRef.fifo_tb__DOT__DUT__DOT__rd_ptr),4);
        bufp->chgCData(oldp+6,(vlSelfRef.fifo_tb__DOT__DUT__DOT__count),5);
    }
    bufp->chgBit(oldp+7,(vlSelfRef.fifo_tb__DOT__clk));
    bufp->chgBit(oldp+8,(vlSelfRef.fifo_tb__DOT__rst));
    bufp->chgBit(oldp+9,(vlSelfRef.fifo_tb__DOT__wr_en));
    bufp->chgBit(oldp+10,(vlSelfRef.fifo_tb__DOT__rd_en));
    bufp->chgCData(oldp+11,(vlSelfRef.fifo_tb__DOT__wr_data),8);
    bufp->chgCData(oldp+12,(vlSelfRef.fifo_tb__DOT__rd_data),8);
    bufp->chgCData(oldp+13,(vlSelfRef.fifo_tb__DOT__write_fifo__Vstatic__data),8);
    bufp->chgCData(oldp+14,(vlSelfRef.fifo_tb__DOT__DUT__DOT__wr_ptr),4);
    bufp->chgBit(oldp+15,(vlSelfRef.fifo_tb__DOT__DUT__DOT__write_enable));
    bufp->chgBit(oldp+16,(vlSelfRef.fifo_tb__DOT__DUT__DOT__read_enable));
    Vfifo_tb___024root__trace_chg_dtype____0(vlSelf, bufp, 17, vlSelfRef.fifo_tb__DOT__DUT__DOT__u_fifo_memory__DOT__mem);
}

void Vfifo_tb___024root__trace_chg_dtype____0(Vfifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_chg_dtype____0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),8);
    bufp->chgCData(oldp+8,(__VdtypeVar[8]),8);
    bufp->chgCData(oldp+9,(__VdtypeVar[9]),8);
    bufp->chgCData(oldp+10,(__VdtypeVar[10]),8);
    bufp->chgCData(oldp+11,(__VdtypeVar[11]),8);
    bufp->chgCData(oldp+12,(__VdtypeVar[12]),8);
    bufp->chgCData(oldp+13,(__VdtypeVar[13]),8);
    bufp->chgCData(oldp+14,(__VdtypeVar[14]),8);
    bufp->chgCData(oldp+15,(__VdtypeVar[15]),8);
}

void Vfifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_cleanup\n"); );
    // Body
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
