# Functional Verification Report

Project: Parameterized Synchronous FIFO

Verified Features

✔ Reset initializes FIFO to empty state.
✔ Data is written correctly when wr_en = 1.
✔ Data is read correctly when rd_en = 1.
✔ FIFO maintains First-In First-Out order.
✔ Full flag asserts when FIFO becomes full.
✔ Empty flag asserts when FIFO becomes empty.
✔ Write operation is blocked when FIFO is full.
✔ Read operation is blocked when FIFO is empty.

Result:
PASS