#ifndef SYMBOL_H
#define SYMBOL_H

#include<stdio.h>

struct Gsymbol *symbol=NULL;
int bind=4096;

struct Gsymbol {
    char* name;       // name of the variable
    int type;         // type of the variable
    int size;         // size of the type of the variable
    int binding;      // stores the static memory address allocated to the variable
    struct Gsymbol *next;
};




struct Gsymbol *Lookup(char * name);
void Install(char *name, int type, int size);

void printSTable();

#endif