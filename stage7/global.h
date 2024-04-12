#ifndef GLOBAL_H
#define GLOBAL_H
#include <stdio.h>

struct paramstruct*paramlist=NULL;
struct typi* typ_head=NULL;
struct paramstruct*paramtemp=NULL;
struct Fieldlist*fieldHead=NULL;
struct Typetable* Tptr=NULL;
struct Classtable* Cptr=NULL;

extern int lineno;

int fieldF=1;
int type;
int flabel=0;
int lnum=0;
int argnum=-2;
int _local_pt=0;
int _prefix_pt=0;
int _global_pt=0;
int _codegen_pt=1;
int _class_pt=0;
int _type_pt=0;
int _in_func=0;
int field_index=0;
char *typename;
char *ptypename;
char *ftypename;

#endif
