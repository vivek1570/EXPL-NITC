#include "symbol.h"
#include "type.h"
#include<stdio.h>
#include<string.h>

void typeAssgn(struct tnode*node)
{
    if(LLookup(node->varname)==NULL && Lookup(node->varname)==NULL)
    {
        printf("Variable '%s' not declared!", node->varname);
        printf("error at  line:%d\n",lineno);
        exit(1);
    }
    if(LLookup(node->varname)!=NULL)
    {
        node->Gentry=NULL;
        struct Lsymbol*temp=LLookup(node->varname);
        node->type=temp->type;
    }
    else {
    node->Gentry=Lookup(node->varname);
    node->type=node->Gentry->type;
    }
}

void fieldTypeAssgn(struct tnode*node1,struct Fieldlist *fields)
{
    struct Fieldlist*temp=fields;
    while(temp!=NULL)
    {
        if(strcmp(temp->name,node1->varname)==0)
        {
            node1->type=temp->type;
            break;
        }
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("field '%s' is not existing in type def  ",node1->varname);
        printf("error at  line:%d\n",lineno);
        exit(1);
    }
}

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
struct Gsymbol * Install(char *name, struct Typetable *type , int size,struct paramstruct* param,int flabel)
{
    struct Gsymbol *temp=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
    temp->name=strdup(name);
    temp->type=type;
    temp->size=size;
    if(flabel==-1)
    {
    temp->binding=bind;
    bind+=size;
    }
    else temp->binding=-1;
    temp->flabel=flabel;
    flabel=flabel+1;
    temp->paramlist=param;
    temp->Ctype=NULL;
    temp->fbinding=NULL;
    temp->next=symbol;
    symbol=temp;
    return temp;
}

int checkparam(struct paramstruct*para,char *name)
{
    /*
    Type checks:
    1.fucntion is present in global table or not
    2.number of argum. in function is same as in glbal table
    3.all arguments are same as in global table
    */

    struct Gsymbol *temp=Lookup(name);
    if(temp==NULL)
    {
        printf("function '%s' is not globaly declared\n",name);
        return -1;
    }
    struct paramstruct *curr=temp->paramlist;
    int x=0;
    while(curr!=NULL)
    {
        x++;
        curr=curr->next;
    }
    
    //asume that global is correct
    int y=0;
    struct paramstruct*df=para;
    while(df!=NULL)
    {
        y++;
        df=df->next;
    }
     if(x!=y)
    {
        printf("some parameters are missing in %s\n",name);
        return -1;
    }
    curr=temp->paramlist;
    while(curr!=NULL)
    {
        struct paramstruct*df=para;
        while(df!=NULL)
        {
            if(strcmp(df->name,curr->name)==0)
            {
                if(df->type!=curr->type)
                {
                    printf("type mismatch error in argument %s\n",df->name);
                    return -1;
                }
                break;
            }
            else{
                df=df->next;
            }
        }
        if(df==NULL)
        {
            printf("Function %s has not declared %s\n",name,curr->name);
            return -1;
        }
        curr=curr->next;
    }
    return 1;
}


struct Lsymbol* LLookup(char *name)
{
    struct Lsymbol*temp=local;
    while(temp!=NULL)
    {
        if(strcmp(temp->name,name)==0)
            return temp;
        temp=temp->next;
    }
    return NULL;
}

struct Lsymbol* LInstall(char *name,struct Typetable* type,int num)
{
    struct Lsymbol*temp=(struct Lsymbol*)malloc(sizeof(struct Lsymbol));
    temp->name=strdup(name);
    temp->type=type;
    temp->binding= num; 
    temp->next=local;
    local=temp;
}

struct Lsymbol *getLocal()
{
    return local;
}

void print_local()
{
    struct Lsymbol*temp=local;
    while(temp!=NULL)
    {
        printf("name=%s\n",temp->name);
        printf("type=%s\n",temp->type->name);
        printf("binding=%d\n",temp->binding);
        temp=temp->next;
    }
}

void reset_local()
{
    local=NULL;
}

void printSTable()
{
    struct Gsymbol* temp=symbol;
        while(temp!=NULL)
        {
            printf("Name=%s\n",temp->name);
            printf("Type=%s\n",temp->type->name);
            printf("Size=%d\n",temp->size);
            printf("Binding=%d\n",temp->binding);
            printf("flabel=%d\n",temp->flabel);
            if(temp->flabel!=-1)
            {
                struct paramstruct*curr=temp->paramlist;
                printf("The para list---------------\n");
                while(curr!=NULL)
                {
                    printf("name=%s\n",curr->name);
                    printf("The type=%s\n",curr->type->name);
                    curr=curr->next;
                }
                printf("\n");
            }
            temp=temp->next;
            printf("\n");
        }
}
