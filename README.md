# Parameterized Synchronous FIFO

## Project Overview

This project implements a **Parameterized Synchronous FIFO (First-In First-Out)** using Verilog HDL. The FIFO supports configurable data width and depth through parameters, making it reusable for different digital design applications.

The project was designed, simulated, verified, synthesized, and documented using an industry-oriented RTL design workflow.

---

## Features

- Parameterized Data Width
- Parameterized FIFO Depth
- Synchronous Read/Write Operation
- Circular Buffer Architecture
- FIFO Counter
- Write Pointer
- Read Pointer
- Full Detection Logic
- Empty Detection Logic
- Overflow Protection
- Underflow Protection
- Modular RTL Design

---

## Project Structure

```
Parameterized_Synchronous_FIFO
│
├── rtl/
│   ├── fifo_top.v
│   ├── fifo_memory.v
│   ├── fifo_counter.v
│   ├── write_pointer.v
│   ├── read_pointer.v
│   ├── write_control.v
│   ├── read_control.v
│   ├── full_logic.v
│   └── empty_logic.v
│
├── tb/
│   └── fifo_tb.v
│
├── reports/
│   ├── verification_report.md
│   └── synthesis_report.md
│
├── schematics/
│   ├── fifo_rtl.png
│   ├── fifo_gate_level.png
│   ├── fifo_rtl.dot
│   └── fifo_gate_level.dot
│
├── synthesis/
│   └── fifo_top_netlist.v
│
├── waveforms/
│   └── fifo_tb.vcd
│
├── images/
│
├── README.md
└── LICENSE
```

---

## Design Flow

1. Requirement Analysis
2. Block Diagram
3. RTL Design
4. Lint Verification (Verilator)
5. Testbench Development
6. Functional Simulation (Icarus Verilog)
7. Waveform Analysis (GTKWave)
8. Directed Verification
9. Corner Case Verification
10. Randomized Stress Testing
11. RTL Schematic Generation (Yosys)
12. Logic Synthesis (Yosys)
13. Gate-Level Schematic Generation
14. Documentation

---

## Verification Summary

### Directed Test Cases

- Reset Verification
- Single Write
- Single Read
- Multiple Sequential Writes
- Multiple Sequential Reads
- Alternating Read/Write
- Continuous Writes
- Continuous Reads
- FIFO Full Condition
- Write When FIFO Full
- FIFO Empty Condition
- Read When FIFO Empty
- Pointer Wrap-around & Mixed Operations

**Total Directed Test Cases : 13**

---

### Corner Test Cases

- Reset During Active Operation
- Fill → Empty → Fill Again
- Continuous Simultaneous Read & Write
- Full → Not Full → Full Transition
- Empty → Not Empty → Empty Transition
- Long Stress Operation

**Total Corner Test Cases : 6**

---

### Randomized Verification

- 100 Random Transactions
- Random Write Operations
- Random Read Operations
- Random Simultaneous Read/Write
- Random Idle Cycles

---

## Verification Statistics

| Verification Type | Count |
|-------------------|------:|
| Directed Test Cases | 13 |
| Corner Test Cases | 6 |
| Random Stress Test | 100 Transactions |

---

## Tools Used

| Tool | Purpose |
|------|---------|
| Verilog HDL | RTL Design |
| Verilator | Lint Checking |
| Icarus Verilog | Simulation |
| GTKWave | Waveform Analysis |
| Yosys | RTL Schematic & Synthesis |
| Graphviz | RTL & Gate-Level Diagram Generation |

---

## Generated Outputs

- RTL Schematic
- Gate-Level Schematic
- Gate-Level Netlist
- Waveform (.vcd)
- Verification Report
- Synthesis Report

---

## Results

- RTL Design Completed Successfully
- Lint Passed
- Functional Simulation Passed
- Directed Test Cases Executed
- Corner Test Cases Executed
- Randomized Stress Testing Completed
- RTL Schematic Generated
- Gate-Level Netlist Generated
- Gate-Level Schematic Generated

---

## Future Improvements

- Self-checking Testbench
- Scoreboard-based Verification
- SystemVerilog Assertions (SVA)
- Functional Coverage
- UVM-based Verification Environment
- Asynchronous FIFO Implementation

---

## Author

**Korrapati Hemanjana Kumari**

B.Tech Electronics and Communication Engineering (ECE)

Interested in RTL Design, Digital Design, SystemVerilog, Design Verification, and VLSI.

---

## License

This project is released under the MIT License.