t ?= u
n ?= 1

UVA_DIR := $(shell pwd)/UVA
KATTIS_DIR := $(shell pwd)/Kattis

COMPILER := g++
CFLAGS :=

UVA_SRC := $(UVA_DIR)/Uva-$(n).cpp
UVA_EXEC := $(UVA_DIR)/a.out
KATTIS_SRC := $(KATTIS_DIR)/Kattis-$(n).cpp
KATTIS_EXEC := $(KATTIS_DIR)/a.out

.PHONY: compile_uva
compile_uva:
	@$(COMPILER) $(CFLAGS) $(UVA_SRC) -o $(UVA_EXEC)

.PHONY: compile_kattis
compile_kattis:
	@$(COMPILER) $(CFLAGS) $(KATTIS_SRC) -o $(KATTIS_EXEC)

compile: $(if $(filter $(t),u),compile_uva, $(if $(filter $(t),k),compile_kattis))

.PHONY: run_uva
run_uva:
	@($(UVA_EXEC) < input.txt) > output.txt; diff output.txt output_expected.txt

.PHONY: runu 
runu:
	@$(UVA_EXEC)

.PHONY: run_kattis
run_kattis:
	@$((KATTIS_EXEC) < input.txt) > output.txt; diff output.txt output_expected.txt

.PHONY: runk
runk:
	@$(KATTIS_EXEC)

.PHONY: clean
clean:
	@rm -f $(UVA_DIR)/*.o $(UVA_DIR)/*.out
	@rm -f $(KATTIS_DIR)/*.o $(KATTIS_DIR)/*.out
