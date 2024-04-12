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
void Install(char *name, int type, int size,struct paramstruct* param,int flabel)
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
    temp->next=symbol;
    symbol=temp;
}

int checkparam(struct paramstruct*para,char *name)
{
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

struct Lsymbol* LInstall(char *name,int type,int num)
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
        printf("type=%d\n",temp->type);
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
            printf("Type=%d\n",temp->type);
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
                    printf("The type=%d\n",curr->type);
                    curr=curr->next;
                }
                printf("\n");
            }
            temp=temp->next;
            printf("\n");
        }
}



// void addparam(char *name,int type)
// {
//     struct paramstruct *temp=(struct paramstruct*)malloc(sizeof(struct paramstruct));
//     temp->name=strdup(name);
//     temp->type=type;
//     temp->next=paramlist;
//     paramlist=temp;
// }


// struct paramstruct *lookparam(char *name)
// {
//     struct paramstruct *temp=paramlist;
//     while(temp!=NULL)
//     {
//         if(strcmp(temp->name,name)==0)
//             return temp;
//         temp=temp->next;
//     }
//     return NULL;
// }

// void resetparam()
// {
//     struct paramstruct *curr=paramlist;
//     while(paramlist!=NULL)
//     {
//         struct paramstruct *temp=curr;
//         curr=curr->next;
//         free(temp->name);
//         free(temp);
//     }
// }