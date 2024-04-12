#!/bin/bash

lex tree.l

yacc -d tree.y

gcc -g lex.yy.c y.tab.c 

gdb --args a.out input_l
