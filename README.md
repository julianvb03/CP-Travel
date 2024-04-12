# Data Structures and Algorithms Study Log

## Overview

This repository serves as a log for my journey in learning and practicing data structures and algorithms. It is structured around exercises and examples from notable texts in the field, including "Introduction to Algorithms, Fourth Edition" and "Competitive Programming Volumes 1 and 2" by Helix Hamin.

## Repository Structure

The repository is organized into two main directories:

- **CP-Volumen1**: Contains chapters and exercises related to Competitive Programming Volume 1.
- **Estructuras_Algoritmos**: Includes exercises and examples focusing on various data structures and algorithms.

Each chapter directory contains problem sets, source code, input/output files, and a dedicated Makefile for compiling and testing the code.

### Directory Structure

```plaintext
.
├── CP-Volumen1
│   ├── Chapter#1
│   │   ├── Chapter1.md
│   │   ├── input.txt
│   │   ├── Kattis
│   │   ├── Makefile
│   │   ├── output_expected.txt
│   │   ├── output.txt
│   │   ├── UVA
│   │   └── Varios
│   └── Chapter#N
├── Estructuras_Algoritmos
│   ├── Chapter#1
│   └── Chapter#N
└── LICENSE
```

## How to Use

### Compilation

The repository is configured with a Makefile that includes default values for the problem type (`t`) and problem number (`n`), which are set to 'u' (UVA) and '1', respectively. These values can be overridden by specifying them when running the make command.

The Makefile is set up to dynamically select source directories and files based on the type of problem (UVA or Kattis). The following is a simplified explanation of the Makefile's compilation process:

- **Directory Configuration**: Automatically determines the working directory paths for UVA and Kattis problem files.
- **Compiler Settings**: Uses `g++` for compiling C++ files.
- **Source and Executable Configuration**: Depending on the problem type (`t`), it selects the appropriate source directory and source file. It compiles the source file into an executable named `a.out` in the same directory.

To compile a solution, use the command:

```bash
make compile t=[u/k] n=[problem_number]
```

**Where:**

- **t** specifies the type of problem (`u` for UVA, `k` for Kattis), default is 'u'.
- **n** is the problem number, default is '1'.

This setup allows for flexible compilation based on the problem source and type, streamlining the process for different problem sets.

### Running Solutions

The Makefile includes several rules for running and testing the compiled solutions, accommodating both detailed checks against expected outputs and quicker execution checks without comparison.

#### Detailed Testing

These commands execute the compiled solution, redirecting `input.txt` as input and comparing the actual output against `output_expected.txt` to verify correctness:

- **For UVA problems:**

  ```bash
  make run_uva
  ```

- **For Kattis problems:**

  ```bash
  make run_kattis
  ```

The outputs are written to `output.txt` and then compared to `output_expected.txt` using the `diff` command. Any differences are displayed, indicating discrepancies from expected results.

#### Quick Testing

For rapid testing without output verification:

- **General execution command (chooses based on `t` variable):**

  ```bash
  make run
  ```

- **Execute UVA solution:**

  ```bash
  make runu
  ```

- **Execute Kattis solution:**

  ```bash
  make runk
  ```

These commands directly run the compiled executable `a.out`, which can be useful for quick checks or debugging.

### Cleaning Up

To remove all compiled and temporary files from both the UVA and Kattis directories, use:

```bash
make clean
```

This command cleans the directories by removing all `.o` and `.out` files, helping maintain a tidy workspace.
