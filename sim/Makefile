TOP ?= tb_gpu_top

RTL=../rtl
TB=../tb

VERILATOR_FLAGS = -Wall -Wno-UNUSED -Wno-DECLFILENAME -Wno-fatal --timing --trace -sv \
	-I$(RTL) --top-module $(TOP)

# default: run the top-level smoke test
all: run

build:
	verilator $(VERILATOR_FLAGS) --binary \
		$(TB)/$(TOP).sv \
		$(RTL)/gpu_top.sv \
		$(RTL)/fetch_engine.sv \
		$(RTL)/matrix_core.sv \
		$(RTL)/skid_buffer.sv

run: build
	./obj_dir/V$(TOP)

# run the matrix_core unit test
run_core:
	$(MAKE) clean
	$(MAKE) TOP=tb_matrix_core run

# run the skid_buffer unit test
run_skid:
	$(MAKE) clean
	$(MAKE) TOP=tb_skid_buffer run

# run the fetch_engine unit test
run_fetch:
	$(MAKE) clean
	$(MAKE) TOP=tb_fetch_engine run

# run the gpu_top unit test
run_top:
	$(MAKE) clean
	$(MAKE) TOP=tb_gpu_top run

clean:
	rm -rf obj_dir *.vcd
