#ifndef TYPE_H
#define TYPE_H

#include "global.h"
#include "tree.h"


#include<stdio.h>

struct Typetable *typeHead=NULL;
struct Classtable *classhead=NULL;
int class_index=0;
int funclass=0;

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

//for OEXPL Specifications and definitions
struct Classtable {
  char *Name;                           //name of the class
 struct Memberfieldlist *Memberfield;        //pointer to Fieldlist
 struct Memberfunclist *Vfuncptr;      //pointer to Memberfunclist
 struct Classtable *Parentptr;         //pointer to the parent's class table
 int Class_index;                      //position of the class in the virtual function table
 int Fieldcount;                       //count of fields
   int Methodcount;                      //count of methods
 struct Classtable *Next;              //pointer to next class table entry
};

struct Memberfieldlist{
 char *Name;   //name of the field
 int Fieldindex;   //position of the field
 struct Typetable *Type;  //pointer to typetable
 struct Classtable *Ctype; //pointer to the class containing the field
 struct Memberfieldlist *Next;  //pointer to next fieldlist entry
};

struct Memberfunclist {
  char *Name;                      //name of the member function in the class
 struct Typetable *Type;          //pointer to typetable
 struct paramstruct *paramlist;   //pointer to the head of the formal parameter list
 int Funcposition;                //position of the function in the class table
  int Flabel;                      //A label for identifying the starting address of the function's code in the memory
 struct Memberfunclist *Next;     //pointer to next Memberfunclist entry
};


void TypeTableCreate();

struct Typetable* TLookup(char *name);

struct Typetable* TInstall(char *name,int size, struct Fieldlist *fields);

struct Fieldlist* FLookup(struct Fieldlist *fields, char *name);

int GetSize(struct Typetable * type);

void printTypeTable();


//for OEXPL Specifications and definitions

struct Classtable* CInstall(char *name,char *parent_class_name);

// Creates a class table entry of given 'name' and extends the fields and the methods of parent class and returns a pointer to the newly created class entry.

struct Classtable* CLookup(char *name);

// Search for a class table entry with the given 'name', if exists, return pointer to class table entry else return NULL.

void Class_Finstall(struct Classtable *cptr, char *type_name, char *name,int field_index);

// Installs the field into the given class table entry which is given as an argument.

void Class_Minstall(struct Classtable *cptr, char *name, struct Typetable *type, struct paramstruct *Paramlist,int funpos);

// Installs the method into the given class table entry which is given as an argument.

struct Memberfunclist* Class_Mlookup(struct Classtable* Ctype,char* Name);

// Search through the VFunclist of the class using Ctype that is being parsed and return pointer to the entry in the list with function name as Name. Returns NULL if entry is not found.

struct Memberfieldlist* Class_Flookup(struct Classtable* Ctype,char* Name);

// Search through the Memberfield of the current class using Ctype that is being parsed and return pointer to the entry in the list with variable name as Name. Returns NULL if entry is not found.

void printClasstable();



#endif

