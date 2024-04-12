#ifndef TYPE_H
#define TYPE_H

#include<stdio.h>

struct Typetable *typeHead=NULL;

struct Typetable{
    char *name;                 //type name
    int size;                   //size of the type
    struct Fieldlist *fields;   //pointer to the head of fields list
    struct Typetable *next;     // pointer to the next type table entry
};

struct Fieldlist{
  char *name;              //name of the field
  int fieldIndex;          //the position of the field in the field list
  char *curr_type;          // the type it where declared
  struct Typetable *type;  //pointer to type table entry of the field's type
  struct Fieldlist *next;  //pointer to the next field
};


void TypeTableCreate();

struct Typetable* TLookup(char *name);

struct Typetable* TInstall(char *name,int size, struct Fieldlist *fields);

struct Fieldlist* FLookup(struct Fieldlist *fields, char *name);

int GetSize(struct Typetable * type);

void printTypeTable();


#endif

