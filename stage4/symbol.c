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



// |
//      ID '[' NUM ']' '['NUM']'
//      {
//         if(Lookup($1->varname)==NULL)
//         {
//             int n1=$3->val;
//             int n2=$6->val;
//             Install($1->varname,type,n1*n2);
//         }
//         else{
//             printf("There is a redeclaration error\n");
//             exit(1);
//         }
//      };|
//      VarList COMMA ID '[' NUM ']''[' NUM ']'
//      {
//         if(Lookup($3->varname)==NULL)
//         {
//             int n3=$5->val;
//             int n4=$8->val;
//             Install($3->varname,type,(n3*n4));
//         }
//         else{
//             printf("There is a redeclaration error\n");
//             exit(1);
//         }
//      }


// |
//         VAR '[' expr ']' '['expr']'
//         {
//             if($3->type!=tINT || $6->type!=tINT)
//             {
//                 printf("2D array index is not correct");
//                 exit(1);
//             }
//             $$=createTree(-1,type,NULL,tARRAY2D,$1,$3,$6);
//         }