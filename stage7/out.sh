#!/bin/bash

# Run Lex
lex tree.l

# Run Yacc
yacc -d tree.y

# Compile using GCC
gcc lex.yy.c y.tab.c -o output_executable

# Run the compiled program
./output_executable

# Run Label lex
lex label.l

#Run gcc label
gcc lex.yy.c -o a

#Run execute file
./a.out

#Run xsm 
./xsm -l templib.lib -e output.xsm