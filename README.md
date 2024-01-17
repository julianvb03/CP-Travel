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
│   └── Chapter#2
├── Estructuras_Algoritmos
│   ├── Chapter#1
│   └── Chapter#2
└── LICENSE
```

# How to Use

## Compilation

The repository includes a generic Makefile for compiling and testing code. The Makefile supports two main online judge platforms: UVA and Kattis.

To compile a solution, use the following command:

```bash
make compile t=[u/k] n=[problem_number]
```

**Where:**

&emsp;**t** specifies the type of problem (u for UVA, k for Kattis).
&emsp;**n** is the problem number.

# Testing

You can test the compiled programs against predefined input and output files. The Makefile includes rules for running and testing both UVA and Kattis solutions.

## For UVA problems:

```bash
make run_uva
```

## For Kattis problems:

```bash
make run_kattis
```

## Cleaning Up

```bash
make clean
```