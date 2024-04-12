#include "symbol.h"
#include<stdio.h>
#include<string.h>


struct Gsymbol *Lookup(char * name)
{
    struct Gsymbol*temp=symbol;
    while(temp!=NULL)
    {
        if(strcmp(temp->name,name)==0)
            return temp;
        temp=temp->next;
    }
    return NULL;
}
void Install(char *name, int type, int size)
{
    struct Gsymbol *temp=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
    temp->name=strdup(name);
    temp->type=type;
    temp->size=size;
    temp->binding=bind;
    bind+=size;
    temp->next=symbol;
    symbol=temp;
}



void printSTable()
{
    struct Gsymbol* temp=symbol;
        while(temp!=NULL)
        {
            printf("Name=%s\n",temp->name);
            printf("Type=%d\n",temp->type);
            printf("Size=%d\n",temp->size);
            printf("Binding=%d\n",temp->binding);
            temp=temp->next;
            printf("\n");
        }
}
        