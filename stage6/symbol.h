#ifndef SYMBOL_H
#define SYMBOL_H

#include<stdio.h>

struct Gsymbol *symbol=NULL;
int bind=4096;
struct Lsymbol *local=NULL;



struct Gsymbol{
    char *name;               //name of the variable or function
    struct Typetable *type;   //pointer to the Typetable entry of variable type/return type of the function
    struct Classtable *Ctype;  //THIS FIELD IS REQUIRED ONLY FOR OEXPL
    int size;                 //size of an array. (The sizes of all other variables in 1)
    int binding;              //stores memory address allocated to the variable
    struct paramstruct *paramlist;//pointer to the head of argument list in case of functions
    struct ASTNode *fbinding; //pointer to the root of the abstract syntax tree of the function
                            //In case of compiler, the call address must be stored in fbinding
    int flabel;
    struct Gsymbol *next;     //points to the next Global Symbol Table entry
};


struct paramstruct{
    char *name;
    struct Typetable *type;
    struct paramstruct *next;
};


struct Lsymbol {
    char* name;       // name of the variable
    struct Typetable *type;   //pointer to the Typetable entry of variable type
    // int size;         // size of the type of the variable
    int binding;      // stores the static memory address allocated to the variable
    struct Lsymbol *next;
};


struct Gsymbol *Lookup(char * name);
struct Gsymbol * Install(char *name, struct Typetable *type, int size,struct paramstruct* param,int flabel);

int checkparam(struct paramstruct*para,char *name);

struct Lsymbol* LInstall(char *name,struct Typetable *type,int num);
struct Lsymbol* LLookup(char *name);
struct Lsymbol* getLocal();

void typeAssgn(struct tnode* node);
void fieldTypeAssgn(struct tnode*node1,struct Fieldlist *fields);

void reset_local();
void print_local();

void printSTable();

#endif