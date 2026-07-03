// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfifo_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfifo_tb::Vfifo_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfifo_tb__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vfifo_tb::Vfifo_tb(const char* _vcname__)
    : Vfifo_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfifo_tb::~Vfifo_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfifo_tb___024root___eval_debug_assertions(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vfifo_tb___024root___eval_static(Vfifo_tb___024root* vlSelf);
void Vfifo_tb___024root___eval_initial(Vfifo_tb___024root* vlSelf);
void Vfifo_tb___024root___eval_settle(Vfifo_tb___024root* vlSelf);
void Vfifo_tb___024root___eval(Vfifo_tb___024root* vlSelf);

void Vfifo_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfifo_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfifo_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfifo_tb___024root___eval_static(&(vlSymsp->TOP));
        Vfifo_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vfifo_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfifo_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfifo_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vfifo_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vfifo_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfifo_tb___024root___eval_final(Vfifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vfifo_tb::final() {
    contextp()->executingFinal(true);
    Vfifo_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfifo_tb::hierName() const { return vlSymsp->name(); }
const char* Vfifo_tb::modelName() const { return "Vfifo_tb"; }
unsigned Vfifo_tb::threads() const { return 1; }
void Vfifo_tb::prepareClone() const { contextp()->prepareClone(); }
void Vfifo_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vfifo_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vfifo_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vfifo_tb___024root__trace_init_top(Vfifo_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vfifo_tb___024root__trace_decl_types(tracep);
    Vfifo_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfifo_tb___024root__trace_register(Vfifo_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfifo_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfifo_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 38);
    Vfifo_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
