#!/bin/bash

# set -e
# Run Lex
lex tree.l

# Run Yacc
yacc -d tree.y

# Compile using GCC
gcc lex.yy.c y.tab.c -o output_executable

# Run the compiled program
./output_executable
