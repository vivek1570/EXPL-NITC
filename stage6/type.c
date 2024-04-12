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