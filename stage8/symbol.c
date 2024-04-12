#include "symbol.h"


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
            if(temp->type)
            printf("Type=%s\n",temp->type->name);
            if(temp->Ctype)
            printf("class=%s\n",temp->Ctype->Name);
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


//oexpl type checking in paramlist

int checkparam_class(struct Memberfunclist*funa,struct paramstruct*para)
{
    struct paramstruct *curr=funa->paramlist;
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
        printf("some parameters are missing in %s\n",funa->Name);
        return -1;
    }
    curr=funa->paramlist;
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
            printf("Function %s has not declared %s\n",funa->Name,curr->name);
            return -1;
        }
        curr=curr->next;
    }
    return 1;
}

int selftype(struct Classtable *cptr,struct tnode*node,int in)
{
    if(in==1)
    {
        struct Memberfieldlist *temp=cptr->Memberfield;
    while(temp!=NULL)
    {
        if(strcmp(temp->Name,node->varname)==0)
        return 0;
        temp=temp->Next;
    }
    printf("self can'nt access the field '%s'\n",node->varname);
    return 1;
    }
    struct Memberfunclist *curr=cptr->Vfuncptr;
    while(curr!=NULL)
    {
        if(strcmp(curr->Name,node->varname)==0)
        return 0;
        curr=curr->Next;
    }
    printf("self can'nt access the mem_function '%s'\n",node->varname);
    return 1;
}


int t_c_method(struct tnode *field,struct tnode* id,struct Classtable *Cptr)
{
    struct tnode *last, *iterator = field;
    struct Fieldlist *fieldList;
    while(iterator->right->right != NULL) {
        iterator = iterator->right;
    }
    last = iterator->right;
    id->type= Class_Mlookup(Class_Flookup(Cptr,last->varname)->Ctype,id->varname)->Type;
    field->type=id->type;
    return selftype(Class_Flookup(Cptr,last->varname)->Ctype,id,0);
}

void t_c_field(struct tnode *field,struct tnode*id,struct Classtable *Cptr)
{
    struct tnode *last, *iterator = field;
    struct Fieldlist *fieldList;
    while(iterator->right->right != NULL) {
        iterator = iterator->right;
    }
    last = iterator->right;
    fieldList = FLookup(last->type->fields,id->varname);
    if(fieldList!=NULL)
    return;
    if(Class_Flookup(Class_Flookup(Cptr,last->varname)->Ctype,id->varname)!=NULL)
    {
        printf("self.field.sub_field not accesable\n");
        printf("error at  line:%d\n",lineno);exit(1);
    }
}

void set_id(struct tnode*node)
{
    if(Lookup(node->varname)==NULL)
    {
        printf("'%s' is not declared\n",node->varname);
        printf("error in line number=%d\n",lineno);
        exit(1);
    }
    node->Gentry=Lookup(node->varname);
    
}

void iddotid(struct tnode*node1,struct tnode*node2)
{
    struct Gsymbol*temp=Lookup(node2->varname);
    struct Memberfieldlist *curr=Class_Flookup(temp->Ctype,node1->varname);
    node1->type=curr->Type;
}


int methodOverload(struct Classtable *cptr,char *fName)
{
    struct paramstruct *para=Class_Mlookup(cptr->Parentptr,fName)->paramlist;
    struct paramstruct *curr=Class_Mlookup(cptr,fName)->paramlist;
    while(curr!=NULL && para!=NULL)
    {
        if(curr->type!=para->type)return 0;
        else{curr=curr->next;para=para->next;}
    }
    if(curr!=NULL || para!=NULL) return 0;
    else return 1;
}