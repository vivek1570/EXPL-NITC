#ifndef SYMBOL_H
#define SYMBOL_H

#include<stdio.h>

struct Gsymbol *symbol=NULL;
int bind=4096;
struct Lsymbol *local=NULL;


struct Gsymbol {
    char* name;       // name of the variable
    int type;         // type of the variable
    int size;         // size of the type of the variable
    int binding;      // stores the static memory address allocated to the variable
    struct paramstruct *paramlist;
    int flabel;
    struct Gsymbol *next;
};

struct paramstruct{
    char *name;
    int type;
    struct paramstruct *next;
};


struct Lsymbol {
    char* name;       // name of the variable
    int type;         // type of the variable
    // int size;         // size of the type of the variable
    int binding;      // stores the static memory address allocated to the variable
    struct Lsymbol *next;
};



struct Gsymbol *Lookup(char * name);
void Install(char *name, int type, int size,struct paramstruct* param,int flabel);

int checkparam(struct paramstruct*para,char *name);

struct Lsymbol* LInstall(char *name,int type,int num);
struct Lsymbol* LLookup(char *name);
struct Lsymbol* getLocal();

void reset_local();
void print_local();

void printSTable();

#endif