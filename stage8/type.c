#include "type.h"

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void TypeTableCreate()
{
    struct Typetable*temp=(struct Typetable*)malloc(sizeof(struct Typetable));
    temp->name=(char *)malloc(strlen("int")+1);
    strcpy(temp->name,"int");
    temp->fields=NULL;
    temp->size=1;
    temp->next=typeHead;
    typeHead=temp;

    struct Typetable*temp1=(struct Typetable*)malloc(sizeof(struct Typetable));
    temp1->name=(char *)malloc(strlen("str")+1);
    strcpy(temp1->name,"str");
    temp1->fields=NULL;
    temp1->size=1;
    temp1->next=typeHead;
    typeHead=temp1;
    
    struct Typetable*temp2=(struct Typetable*)malloc(sizeof(struct Typetable));
    temp2->name=(char *)malloc(strlen("bool")+1);
    strcpy(temp2->name,"bool");
    temp2->fields=NULL;
    temp2->size=1;
    temp2->next=typeHead;
    typeHead=temp2;
    
    struct Typetable*temp3=(struct Typetable*)malloc(sizeof(struct Typetable));
    temp3->name=(char *)malloc(strlen("void")+1);
    strcpy(temp3->name,"void");
    temp3->fields=NULL;
    temp3->size=1;
    temp3->next=typeHead;
    typeHead=temp3;
}

void printTypeTable()
{
    struct Typetable*temp=typeHead;
    while(temp!=NULL)
    {
        printf("name=%s\n",temp->name);
        printf("size=%d\n",temp->size);
        printf("the fields=>\n");
        struct Fieldlist*curr=temp->fields;
        while(curr!=NULL)
        {
            printf("name=%s\n",curr->name);
            printf("type=%s\n",curr->type->name);
            printf("field_index=%d\n",curr->fieldIndex);
            curr=curr->next;
        }
        printf("--------------------\n\n");
        temp=temp->next;
    }
}

struct Typetable* TLookup(char *name)
{
    struct Typetable*temp=typeHead;
    while(temp!=NULL)
    {
        if(strcmp(temp->name,name)==0)
            return temp;
        temp=temp->next;
    }
    return NULL;
}

struct Typetable* TInstall(char *name,int size, struct Fieldlist *fields)
{
    struct Typetable*temp=(struct Typetable*)malloc(sizeof(struct Typetable));
    temp->name=strdup(name);
    temp->size=size;
    temp->fields=fields;
    temp->next=typeHead;
    typeHead=temp;
    return temp;
}

//here the field lookup has been changed to for struct Fieldlist

struct Fieldlist* FLookup(struct Fieldlist *fields, char *name)
{
    struct Fieldlist*temp=fields;
    while(temp!=NULL)
    {
        if(strcmp(temp->name,name)==0)
            return temp;
        temp=temp->next;
    }
    return NULL;
}

// need to be checked again

int GetSize(struct Typetable * type)
{
    return type->size;
}



struct tnode* insertField(struct tnode*field, struct tnode *id) {
    struct tnode *last, *iterator = field;
    struct Fieldlist *fieldList;
    while(iterator->right->right != NULL) {
        iterator = iterator->right;
    }
    last = iterator->right;
    fieldList = FLookup(last->type->fields,id->varname);

    if(
            fieldList == NULL ||
            last->type == TLookup("int") ||
            last->type == TLookup("str")) {
        printf("Un-declared Field Variable '%s' access\n", id->varname);
        exit(1);
    }
   
    id->type = fieldList->type;
    iterator->right =createTree(-1,last->type,NULL,tField,last,id,NULL);
    field->type = id->type;
    return field;
}

//for OEXPL Fuctions

struct Classtable* CInstall(char *name,char *parent_class_name){
    struct Classtable *temp=(struct Classtable*)malloc(sizeof(struct Classtable));
    temp->Name=strdup(name);
    temp->Class_index=class_index;
    class_index++;
    temp->Fieldcount=0;
        temp->Vfuncptr=NULL;
    if(parent_class_name==NULL)
    {
        temp->Parentptr=NULL;
        temp->Memberfield=NULL;
    }
    else
    {
    temp->Parentptr=CLookup(parent_class_name);
    temp->Memberfield=temp->Parentptr->Memberfield;
    }
    temp->Methodcount=0;
    temp->Next=classhead;
    classhead=temp;
    return temp;
}

struct Classtable * reverseList(struct Classtable * head) {
        struct Classtable*curr=NULL;
        while(head!=NULL)
        {
            struct Classtable *temp1=head->Next;
            head->Next=curr;
            curr=head;
            head=temp1;
        }
        return curr;
    }

struct Classtable* CLookup(char *name)
{
    struct Classtable *temp=classhead;
    while(temp!=NULL)
    {
        if(strcmp(name,temp->Name)==0)
        return temp;
        temp=temp->Next;
    }
    return NULL;
}

void Class_Finstall(struct Classtable *cptr, char *typename, char *name,int field_index)
{
    if(Class_Flookup(cptr,name)!=NULL)
    {
        printf("redeclare of field '%s' in  class fields in class '%s'\n",name,cptr->Name);
        printf("line no:%d\n",lineno);
        exit(1);
    }
    struct Memberfieldlist *temp=(struct Memberfieldlist*)malloc(sizeof(struct Memberfieldlist));
    temp->Name=strdup(name);
    temp->Fieldindex=field_index;
    temp->Type=TLookup(typename);
    temp->Ctype=CLookup(typename);
    temp->Next=cptr->Memberfield;
    cptr->Memberfield=temp;
}
void Class_Minstall(struct Classtable *cptr, char *name, struct Typetable *type, struct paramstruct *Paramlist,int funcpos)
{
    if(Class_Mlookup(cptr,name)!=NULL)
    {
        struct Memberfunclist *furri=Class_Mlookup(cptr,name);
        furri->Flabel=funclass;
        furri->paramlist=Paramlist;
        flabel--;
        if(methodOverload(cptr,name)==0)
        {
            printf("function overloading is not allowed in class='%s' func='%s'\n",cptr->Name,name);
            printf("line no=%d\n",lineno);
            exit(1);
        }
        return;
    }
    struct Memberfunclist*temp=(struct Memberfunclist*)malloc(sizeof(struct Memberfunclist));
    temp->Name=strdup(name);
    temp->Type=type;
    temp->paramlist=Paramlist;
    temp->Funcposition=funcpos;
    temp->Flabel=funclass;
    cptr->Methodcount=funcpos+1;
    temp->Next=cptr->Vfuncptr;
    cptr->Vfuncptr=temp;
}

struct Memberfunclist* Class_Mlookup(struct Classtable* Ctype,char* Name)
{
    if(Ctype==NULL)return NULL;
    struct Memberfunclist*temp=Ctype->Vfuncptr;
    while(temp!=NULL)
    {
        if(strcmp(temp->Name,Name)==0)
        return temp;
        temp=temp->Next;
    }
    return NULL;
}

struct Memberfieldlist* Class_Flookup(struct Classtable* Ctype,char* Name)
{
    struct Memberfieldlist*temp=Ctype->Memberfield;
    while(temp!=NULL)
    {
        if(strcmp(temp->Name,Name)==0)
        return temp;
        temp=temp->Next;
    }
    return NULL;
}


void printClasstable()
{
    struct Classtable *head=classhead;
    while(head!=NULL)
    {
        printf("CLASS:\n");
        printf("class name=  %s\n",head->Name);
        if(head->Parentptr)  printf("parent name=  %s\n",head->Parentptr->Name);
        printf("class inde= %d\n",head->Class_index);
        printf("fieldcount= %d\n",head->Fieldcount);
        printf("Methodcnt= %d\n",head->Methodcount);
        printf("\n-----------------fields in class---------------\n");
        while(head->Memberfield!=NULL)
        {
            printf("                     Name= %s\n",head->Memberfield->Name);
            printf("                     Fieldindex= %d\n",head->Memberfield->Fieldindex);
            printf("                     Type= %s\n",head->Memberfield->Type->name);
            if(head->Memberfield->Ctype)
            printf("                     class= %s\n\n",head->Memberfield->Ctype->Name);
            head->Memberfield=head->Memberfield->Next;
        }
        struct Memberfunclist*temp=head->Vfuncptr;
        printf("\n-----------------methods in class---------------\n");
        while(temp!=NULL)
        {
            printf("                     Name= %s\n",temp->Name);
            printf("                     type= %s\n",temp->Type->name);
            // printf("paramnumber=%d",temp->paramlist->)
            printf("                     Funposition= %d\n",temp->Funcposition);
            printf("                     Flabel= F%d\n",temp->Flabel);
            temp=temp->Next;
            printf("\n");
        }
        head=head->Next;    
        printf("\n\n");
    }
    printf("\n");

}

void addParent(struct Classtable *cptr)
{
    struct Memberfunclist*curr=cptr->Parentptr->Vfuncptr;
    while(curr!=NULL)
    {
        Class_Minstall(cptr,curr->Name,curr->Type,curr->paramlist,curr->Funcposition);
        struct Memberfunclist* temp=Class_Mlookup(cptr,curr->Name);
        temp->Flabel=Class_Mlookup(cptr->Parentptr,curr->Name)->Flabel;
        curr=curr->Next;
    }
}

void check_cnt(struct Classtable *ptr)
{
    if(ptr->Fieldcount>8)
    {
        printf("class '%s' have more than 8 memberfields\n",ptr->Name);
        printf("error at line=%d\n",lineno);
        exit(1);
    }
    if(ptr->Methodcount>8)
    {
        printf("class '%s' have more than 8 memberfunctions\n",ptr->Name);
        printf("error at line=%d\n",lineno);
        exit(1);
    }
}
void assgClass(struct Classtable *ptr,struct Classtable *ptr1)
{
    struct Classtable *temp=ptr1;
    while(temp!=NULL)
    {
        if(strcmp(ptr->Name,temp->Name)==0) return;
        temp=temp->Parentptr;
    }
    printf("assg to the descended classes only allowed \n");
    printf("error at lineno=%d\n",lineno);
    exit(1);
}