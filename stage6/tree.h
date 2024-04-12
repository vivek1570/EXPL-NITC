#ifndef TREE_H
#define TREE_H  

#include<stdio.h>

#define tNUM 0
#define tVAR 1
#define tADD 2
#define tSUB 3
#define tMUL 4
#define tDIV 5
#define tREAD 6
#define tWRITE 7
#define tASSIGN 8
#define tCONNECT 9
#define tINT 10
#define tIF 11
#define tWHILE 12
#define tBOOL 13
#define tLT 14
#define tLE 15
#define tGT 16
#define tGE 17
#define tEQ 18
#define tNE 19
#define tCONTINUE 20
#define tBREAK 21
#define tMSG 22
#define tSTR 23
#define tARRAY 24
#define tMOD 25
#define tARRAY2D 26
#define tFunconnect 27
#define tFunction 28
#define tReturn 29
#define tAND 30
#define tOR 31
#define tALLOC 32
#define tFREE 33
#define tField 34
#define tInitial 35
#define tNullEq 36
#define tNullNe 37
#define tNullAs 38


typedef struct tnode {
    int val;        // value of a number for NUM nodes.
    struct Typetable* type;       // type of variable
    char* varname;  // name of a variable for ID nodes
    int nodetype;   // information about non-leaf nodes - read/write/connector/+/* etc.
    struct Gsymbol *Gentry;
    struct tnode *left,*right,*third;  // left and right branches
}tnode;


//for storing types throughout the code and in function also
struct typi{
    struct Typetable* type;
    struct typi *next;
};

/*Create a node tnode*/
int getReg();
void freeReg();
int getLabel();
int freeAllReg();

void reset_all();

void initial(FILE* fp);
void endcode(FILE* fp);

struct tnode* createTree(int val, struct Typetable* type, char* c,int nodetype, struct tnode *l, struct tnode *r,struct tnode*t);

int codeGen(FILE *fp,struct tnode*root);

void pushArguments(FILE *fp,struct tnode*root);

void popArguments(FILE *fp,struct tnode*root);

void printRead(FILE* fp,int addr);

void printWrite(FILE* fp,int regNum);

int getVaraddr(FILE*fp, tnode*root);

void prefix(struct tnode*root);

#endif