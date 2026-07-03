# Parameterized Synchronous FIFO

## Objective

Design and verify a parameterized synchronous FIFO using Verilog HDL.

The FIFO stores data in First-In-First-Out order and operates using a single clock.

---

## Features

- Parameterized Data Width
- Parameterized FIFO Depth
- Single Clock
- Synchronous Reset
- Write Enable
- Read Enable
- Full Flag
- Empty Flag
- Parameterized Address Width

---

## Parameters

| Parameter | Description | Default |
|-----------|-------------|---------|
| DATA_WIDTH | Width of each data word | 8 |
| DEPTH | Number of FIFO locations | 16 |
| ADDR_WIDTH | Address width | 4 |

---

## Inputs

clk

rst

wr_en

rd_en

wr_data[DATA_WIDTH-1:0]

---

## Outputs

rd_data[DATA_WIDTH-1:0]

full

empty

---

## Functional Requirements

1. Reset clears FIFO.

2. Write stores data when FIFO is not full.

3. Read retrieves oldest data when FIFO is not empty.

4. FIFO follows First-In-First-Out order.

5. Full flag becomes HIGH when FIFO is completely filled.

6. Empty flag becomes HIGH when FIFO becomes empty.

7. Simultaneous Read and Write should be supported.

---

## Verification Goals

- Reset Operation

- Single Write

- Multiple Writes

- Single Read

- Multiple Reads

- FIFO Order Verification

- Full Condition

- Empty Condition

- Simultaneous Read & Write

- Overflow Protection

- Underflow Protection

---

## Expected Deliverables

RTL Design

Self-checking Testbench

Simulation

Waveforms

RTL Schematic

Gate-Level Schematic

Synthesis Report

GitHub Repository

LinkedIn Post