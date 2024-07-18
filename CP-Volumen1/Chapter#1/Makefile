# Default values for variables
t ?= u
n ?= 1

# Directory configuration
PWD := $(shell pwd)
UVA_DIR := $(PWD)/UVA
KATTIS_DIR := $(PWD)/Kattis

# Compiler settings
COMPILER := g++
CFLAGS :=

# Source and executable configuration based on problem type
SRC_DIR := $(if $(filter $(t),u),$(UVA_DIR),$(if $(filter $(t),k),$(KATTIS_DIR)))
SRC := $(SRC_DIR)/$(if $(filter $(t),u),Uva,Kattis)-$(n).cpp
EXEC := $(SRC_DIR)/a.out

# Compile rule for both UVA and Kattis
.PHONY: compile
compile:
	@$(COMPILER) $(CFLAGS) $(SRC) -o $(EXEC)

# Run rules
.PHONY: run_uva run_kattis
run_uva:
	@($(EXEC) < input.txt) > output.txt; diff output.txt output_expected.txt

run_kattis:
	@($(EXEC) < input.txt) > output.txt; diff output.txt output_expected.txt

# Simplified run rules without diff for quick tests
.PHONY: runu runk
runu runk:
	@$(EXEC)

# Clean rule for both UVA and Kattis directories
.PHONY: clean
clean:
	@rm -f $(UVA_DIR)/*.o $(UVA_DIR)/*.out
	@rm -f $(KATTIS_DIR)/*.o $(KATTIS_DIR)/*.out

# General run rule that delegates based on the 't' variable
.PHONY: run
run: $(if $(filter $(t),u),run_uva, $(if $(filter $(t),k),run_kattis))
