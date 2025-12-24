# TinyGPU — an efficient GPU system (Tiny matrix engine)

TinyGPU is a small, streaming “GPU-like” compute block designed around a **matrix–vector multiply** data path. A host programs base addresses for weights and inputs, triggers a RUN, and the design fetches bytes from memory, streams them into a compute core, and streams back a vector of accumulated results.

At its default parameters (`MAT_DIM=4`), it computes:

\[
\mathbf{y} = \mathbf{W}\mathbf{x}
\]

where `W` is a 4×4 matrix of 8-bit values, `x` is a 4-element 8-bit vector, and `y` is a 4-element 16-bit output vector.

---

## Key ideas

- **Valid/ready streaming everywhere** (host ↔ fetch ↔ core ↔ result)
- **Decoupled fetch + compute** via a **1-deep skid buffer**
- **Simple programming model**: set base addresses, then RUN
- **Parameterizable** data widths and matrix dimension

---

## Top-level architecture

### `gpu_top`
Wires together:
- `fetch_engine` (memory address generation + response buffering)
- `matrix_core` (loads W, streams X while accumulating, then flushes results)

Exports:
- Host control: `start`, `op_code`, `cfg_data`
- Memory interface: `m_req_*` and `m_rsp_*`
- Output stream: `result_vld/result_rdy/result_data`
- Status: `busy`

### `fetch_engine`
- Stores CSR base registers:
  - `reg_w_base` (weights base)
  - `reg_x_base` (input vector base)
- Issues reads for:
  - **W**: `MAT_DIM*MAT_DIM` beats
  - **X**: `MAT_DIM` beats
- Uses `MAX_INFLIGHT=1` plus a **skid buffer** to avoid overflow
- Tracks completion by counting beats actually consumed by the core (`src_fire`)

### `skid_buffer`
A 1-deep buffer that guarantees the streaming contract when the downstream stalls.

### `matrix_core`
A simple FSM:
- `S_LOAD_W`: load `W_DEPTH` bytes into `w_mem`
- `S_LOAD_X`: for each incoming `x[i]`, update all row accumulators:
  - `acc[r] += W[r,i] * x[i]`
- `S_FLUSH`: stream out `MAT_DIM` accumulated results

---

## Streaming contract (valid/ready)

All streaming channels follow:
1. Transfer occurs only when `valid && ready` on the rising clock edge.
2. `valid` must not depend combinationally on `ready`.
3. Once `valid=1`, `valid` and `data` remain stable until handshake completes.

---

## Memory layout

Given base addresses programmed by the host:

- **Weights (W)** at `W_BASE`:
  - `W_DEPTH = MAT_DIM * MAT_DIM` consecutive addresses
  - Address = `W_BASE + w_idx`
- **Input vector (X)** at `X_BASE`:
  - `X_DEPTH = MAT_DIM` consecutive addresses
  - Address = `X_BASE + x_idx`

Each memory response returns one `DATA_WIDTH` beat (default: 8 bits).

---

## Host programming model

`op_code` (2 bits):
- `2'b00` — `SET_W_BASE` (`reg_w_base <= cfg_data`)
- `2'b01` — `SET_X_BASE` (`reg_x_base <= cfg_data`)
- `2'b10` — `RUN` (start the fetch + compute pipeline)

Typical sequence:
1. Pulse `start` with `op_code=SET_W_BASE`, `cfg_data=W_BASE`
2. Pulse `start` with `op_code=SET_X_BASE`, `cfg_data=X_BASE`
3. Pulse `start` with `op_code=RUN`
4. Wait for `result_vld`, handshake with `result_rdy` to read `MAT_DIM` outputs  
   (`busy` stays high while fetch/core are active)

---

## Parameters (from `params.svh` / `bronco_params`)

Defaults:
- `DATA_WIDTH = 8`  (input data width)
- `ACC_WIDTH  = 16` (accumulator/output width)
- `ADDR_WIDTH = 8`  (memory address width)
- `MAT_DIM    = 4`  (matrix dimension)
- `W_DEPTH    = MAT_DIM * MAT_DIM`
- `X_DEPTH    = MAT_DIM`

---

## Notes / current limitations

- `fetch_engine` is configured for **single in-flight** request (`MAX_INFLIGHT=1`), relying on the skid buffer to safely handle backpressure.
- The core currently implements a **dense matrix–vector multiply** (not tiled, not multi-issue).

---

## Modules

- `gpu_top.sv` — top-level integration
- `fetch_engine.sv` — memory read sequencing + CSR base regs
- `skid_buffer.sv` — 1-deep backpressure buffer
- `matrix_core.sv` — load/accumulate/flush compute core
- `params.svh` — shared parameter package (`bronco_params`)
