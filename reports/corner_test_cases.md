# Corner Test Cases

This document summarizes the corner test cases executed to validate the robustness of the Parameterized Synchronous FIFO under boundary and exceptional operating conditions.

---

## CT01 – FIFO Full Condition

### Objective
Verify that the FIFO correctly asserts the `full` flag when it reaches maximum capacity.

### Procedure
- Continuously write `DEPTH` data values into the FIFO.

### Expected Result
- `full = 1`
- No additional writes are accepted.

### Status
✅ PASS

---

## CT02 – Write When FIFO Full (Overflow Protection)

### Objective
Verify that additional write operations are blocked when the FIFO is full.

### Procedure
- Fill the FIFO completely.
- Attempt one extra write operation.

### Expected Result
- Write request is ignored.
- FIFO contents remain unchanged.
- `full` remains asserted.

### Status
✅ PASS

---

## CT03 – FIFO Empty Condition

### Objective
Verify that the FIFO correctly asserts the `empty` flag after all stored data has been read.

### Procedure
- Read all available data from the FIFO.

### Expected Result
- `empty = 1`
- FIFO contains no valid data.

### Status
✅ PASS

---

## CT04 – Read When FIFO Empty (Underflow Protection)

### Objective
Verify that read operations are blocked when the FIFO is empty.

### Procedure
- Empty the FIFO completely.
- Attempt one additional read operation.

### Expected Result
- No invalid data is returned.
- FIFO remains empty.
- `empty` remains asserted.

### Status
✅ PASS

---

## CT05 – Simultaneous Read and Write

### Objective
Verify correct FIFO operation when both `wr_en` and `rd_en` are asserted during the same clock cycle.

### Procedure
- Assert both write enable and read enable simultaneously.

### Expected Result
- One data word is written.
- One data word is read.
- FIFO count remains unchanged.

### Status
✅ PASS

---

## CT06 – Reset During Active Operation

### Objective
Verify that an active reset correctly clears the FIFO while read/write operations are in progress.

### Procedure
- Perform multiple write operations.
- Assert reset.
- Release reset.

### Expected Result
- FIFO is cleared.
- Read and write pointers reset.
- FIFO counter resets.
- `empty = 1`
- `full = 0`

### Status
✅ PASS

---

# Summary

| Corner Test Case | Result |
|------------------|--------|
| CT01 – FIFO Full Condition | ✅ PASS |
| CT02 – Write When FIFO Full | ✅ PASS |
| CT03 – FIFO Empty Condition | ✅ PASS |
| CT04 – Read When FIFO Empty | ✅ PASS |
| CT05 – Simultaneous Read & Write | ✅ PASS |
| CT06 – Reset During Active Operation | ✅ PASS |

---

## Conclusion

All six corner test cases were executed successfully. The FIFO correctly handled boundary conditions, protected against overflow and underflow, supported simultaneous read/write operations, and recovered correctly after reset, demonstrating reliable functionality under exceptional operating scenarios.
