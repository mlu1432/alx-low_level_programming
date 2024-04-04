# C - Makefiles: A Step-by-Step Guide

1. Basic Makefile
Goal: Compile a simple C program with no variables.

Makefile (1-Makefile):

makefile

all:
    gcc main.c school.c -o school

2. Introducing Variables
Goal: Use variables for the compiler and source files.

Makefile (2-Makefile):

3. Expanding with Object Files
Goal: Introduce object files to optimize compilation, avoiding recompilation of unchanged sources.

Makefile (3-Makefile):

4. Comprehensive Rules
Goal: Add rules for cleaning temporary files and forcing recompilation.

Makefile (4-Makefile):

5. Advanced Makefile with Compiler Flags
Goal: Incorporate compiler flags for strict code standards and ensure Makefile functionality under various constraints.

Makefile (5-Makefile):

6. Island Perimeter (Python Exercise)
Goal: Implement a Python function to calculate the perimeter of an island in a grid.

File: 5-island_perimeter.py

7. Robust Makefile
Goal: Create a Makefile with full specifications, including cleaning rules and recompilation requirements.

Makefile (100-Makefile):