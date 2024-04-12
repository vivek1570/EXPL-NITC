#include<string.h>
#include<stdio.h>
#include "tree.h"
#include "symbol.h"
#include "type.h"

int stackc=-1;
int stack1[20];
int stack2[20];
int stackb=-1;

int reg=-1;
int label=0;

void reset_all()
{
    reg=-1;
    label=0;
    stackb=-1;
    stackc=-1;
}

int getLabel()
{
    int curr=label;
    label++;
    return curr;
}

int getReg() {
    if(reg < 20)
        return ++reg;
    printf("out of registers\n");
    exit(1);
}
void freeReg() {
    if(reg >= 0)
        reg--;
}
int freeAllReg() {
    reg = -1;
}

//vf table settting

void vftSet(FILE *fp)
{
    int c=getReg();
    int cl=4096+((1+classhead->Class_index)*8);
    fprintf(fp,"MOV R%d,%d\n",c,-1);
    for(int i=4096;i<cl;i++)
    {
        fprintf(fp,"MOV [%d],R%d\n",i,c);
    }
    struct Classtable *clas=classhead;
    while(clas!=NULL)
    {
        int c1=4096+clas->Class_index*8;
        struct Memberfunclist*temp=clas->Vfuncptr;
        while(temp!=NULL)
        {
            fprintf(fp,"MOV R%d,F%d\n",c,temp->Flabel);
            fprintf(fp,"MOV [%d],R%d\n",c1+temp->Funcposition,c);
            temp=temp->Next;
        }
        clas=clas->Next;
    }
    freeReg();
}

void initial(FILE * fp)
{
    fprintf(fp, "0\n2056\n0\n0\n0\n0\n0\n0\n");
    fprintf(fp, "PUSH R0\n");
    fprintf(fp, "CALL MAIN\n");
    // endcode(fp);
}
  
void endcode(FILE* fp)
{
    int r=getReg();
    fprintf(fp,"MOV R%d,\"Exit\"\nPUSH R%d\nCALL 0\nPOP R%d\n",r,r,r);
}

struct tnode* createTree(int val, struct Typetable* type, char* c,int nodetype, struct tnode *l, struct tnode *r,struct tnode*t)
{
    switch(nodetype)
    {
        case tADD:
        case tSUB:
        case tMUL:
        case tDIV:
        case tMOD:
        if(l->type!=r->type &&l->type==TLookup("int") )
        {
            printf("\ntype mismatch error in add \n");
            printf("error at  line:%d\n",lineno);
            exit(1);
        }
        else{
            type=TLookup("int");
        }
        break;
        case tLE:
        case tGE:
        case tGT:
        case tLT:
        case tEQ:   
        case tNE:
        if(l->type!=r->type && l->type==TLookup("bool"))
        {
            printf("\ntype mismatch error in tLe ...\n");
            printf("error at  line:%d\n",lineno);
            exit(1);
        }
        else type=TLookup("bool");
        break;
        case tNullNe:
        type=TLookup("bool");
        break;
        case tNullEq:
        type=TLookup("bool");
        break;
        case tASSIGN:
        if(l->type!=r->type)
        {
            printf("\ntype mismatch error in tassign\n");
            printf("error at  line:%d\n",lineno);
            exit(1);
        }
        break;
        case tIF:
        case tWHILE:
        if(l->type!=TLookup("bool"))
        {
            printf("\ntype mismatch error in tbool\n");
            printf("error at  line:%d\n",lineno);
            exit(1);
        }
        break;
        case tARRAY:
        type=l->type;
        break;
        case tARRAY2D:
        type=l->type;
        break;
        case tAND:
        if(l->type!=r->type)
        {
            printf("type error in tAND \n");
            printf("error at  line:%d\n",lineno);
            exit(1);
        }
        type=l->type;
        break;
        case tOR:
        //not added the tOR code in there
        if(l->type!=r->type)
        {
            printf("type error in tAND \n");
            printf("error at  line:%d\n",lineno);
            exit(1);
        }
        type=l->type;
        break;
        case tALLOC:
        if(l->type==NULL)
        {
            printf("talloc type is null\n");
            printf("error at  line:%d\n",lineno);
            exit(1);
        }
        if(l->type==TLookup("int") || l->type==TLookup("str"))
        {
            printf("udt type error\n");
            printf("error at  line:%d\n",lineno);
            exit(1);
        }
        break;
    }
    struct tnode* temp;
    temp=(struct tnode*)malloc(sizeof(struct tnode));    
    temp->val=val;
    temp->type=type;
    temp->varname=c;
    temp->nodetype=nodetype;
    temp->Ctype=NULL;
    temp->Gentry=NULL;
    temp->left=l;
    temp->right=r;
    temp->third=t;
}


void printRead(FILE* fp,int addr)
{
    int r=getReg();
    fprintf(fp,"MOV R%d,\"Read\"\nPUSH R%d\nMOV R%d,-1\nPUSH R%d\nMOV R%d,R%d\nPUSH R%d\nADD SP,2\nCALL 0\nSUB SP,5\n",r,r,r,r,r,addr,r);
    freeReg();
}
void printWrite(FILE* fp,int regNum)
{
    int r=getReg();
  fprintf(fp, "MOV R%d, \"Write\"\nPUSH R%d\nMOV R%d, -2\nPUSH R%d\nMOV R%d,R%d\nPUSH R%d\nADD SP,2\nCALL 0\nSUB SP,5\n", r, r, r, r, r, regNum, r);
    freeReg();
}


void pushArguments(FILE *fp,struct tnode*root)
{
    int r;
    while(root!=NULL)
    {
        r=codeGen(fp,root);
        fprintf(fp,"PUSH R%d\n",r);
        freeReg();
        root=root->third;
    }
}

void popArguments(FILE *fp,struct tnode*root)
{
    int r=getReg();
    while(root!=NULL)
    {
        fprintf(fp,"POP R%d\n",r);
        root=root->third;
    }
    freeReg();
}


/* get var will always return reg  with have adress associate with it*/

int getVaraddr(FILE*fp,struct tnode*root)
{
    int x;
    if(root->nodetype==tVAR)
    {
        x=getReg();
        struct Lsymbol*temp=LLookup(root->varname);
        if(temp==NULL)
        fprintf(fp,"MOV R%d,%d\n",x,root->Gentry->binding);
        else{
            fprintf(fp,"MOV R%d,BP\n",x);
            fprintf(fp,"ADD R%d,%d\n",x,temp->binding);
        }
        return x;
    }
    else if(root->nodetype==tARRAY){
        x=codeGen(fp,root->right);
        fprintf(fp,"ADD R%d,%d\n",x,root->left->Gentry->binding);
        return x;
    }
    else if(root->nodetype==tARRAY2D)
    {
        x=codeGen(fp,root->left);
        int y=codeGen(fp,root->right);
        fprintf(fp,"MUL R%d,R%d\n",x,y);
        fprintf(fp,"ADD R%d,%d\n",x,root->left->Gentry->binding);
    }
    else if(root->nodetype==tField &&root->left->nodetype==tSELF)
    {
        x=getReg();
        if(root->right->nodetype==tVAR)
        {
            fprintf(fp,"MOV R%d,BP\n",x);
            fprintf(fp,"ADD R%d,%d\n",x,-3);
            fprintf(fp,"MOV R%d,[R%d]\n",x,x);
            struct Memberfieldlist*temp=Class_Flookup(Cptr,root->right->varname);
            fprintf(fp,"ADD R%d,%d\n",x,temp->Fieldindex);
            return x;
        }
        else{
            x=getReg();
            fprintf(fp,"MOV R%d,BP\n",x);
            fprintf(fp,"ADD R%d,%d\n",x,-3);
            fprintf(fp,"MOV R%d,[R%d]\n",x,x);
            struct Memberfieldlist*temp=Class_Flookup(Cptr,root->right->left->varname);
            fprintf(fp,"ADD R%d,%d\n",x,temp->Fieldindex);
            root=root->right;
            while(root->right->nodetype==tField)
            {
                struct Fieldlist* curr=FLookup(root->left->type->fields,root->right->left->varname);
                fprintf(fp,"MOV R%d,[R%d]\n",x,x);
                fprintf(fp,"ADD R%d,%d\n",x,curr->fieldIndex);
                root=root->right;
            }
            struct Fieldlist* curr=FLookup(root->left->type->fields,root->right->varname);
            fprintf(fp,"MOV R%d,[R%d]\n",x,x);
            fprintf(fp,"ADD R%d,%d\n",x,curr->fieldIndex);
            return x;
        }
        
    }
    else if(root->nodetype==tField && root->left->nodetype!=tSELF)
    {
        x=getReg();
        struct Lsymbol*temp=LLookup(root->left->varname);
        if(temp==NULL)
        {
            fprintf(fp,"MOV R%d,%d\n",x,root->left->Gentry->binding);
        }
        else{
            fprintf(fp,"MOV R%d,BP\n",x);
            fprintf(fp,"ADD R%d,%d\n",x,temp->binding);
        }
        if(Lookup(root->left->varname) && Lookup(root->left->varname)->Ctype!=NULL && root->right->nodetype==tField)
        root=root->right;
        while(root->right->nodetype==tField)
        {
            struct Fieldlist* curr=FLookup(root->left->type->fields,root->right->left->varname);
            fprintf(fp,"MOV R%d,[R%d]\n",x,x);
            fprintf(fp,"ADD R%d,%d\n",x,curr->fieldIndex);
            root=root->right;
        }
        if(root->left->type!=NULL)
        {        
        fprintf(fp,"MOV R%d,[R%d]\n",x,x);
        fprintf(fp,"ADD R%d,%d\n",x,FLookup(root->left->type->fields,root->right->varname)->fieldIndex);
        return x;
        }
        else{
            fprintf(fp,"MOV R%d,[R%d]\n",x,x);
            struct Classtable *classi=Lookup(root->left->varname)->Ctype;
            struct Memberfieldlist*temp=Class_Flookup(classi,root->right->varname);
            fprintf(fp,"ADD R%d,%d\n",x,temp->Fieldindex);
            return x;
        }
    }
    else return -1;
}

void find_label(struct tnode*lef,struct tnode*rig,FILE *fp)
{
    int funpo,x;
    if(lef->nodetype==tSELF)
    {

        funpo=Class_Mlookup(Cptr,rig->varname)->Funcposition;
        x=getReg();
        fprintf(fp,"MOV R%d,BP\n",x);
        fprintf(fp,"ADD R%d,%d\n",x,-4);
        fprintf(fp,"MOV R%d,[R%d]\n",x,x);
        fprintf(fp,"ADD R%d,%d\n",x,funpo);
        fprintf(fp,"MOV R%d,[R%d]\n",x,x);
        fprintf(fp,"CALL R%d\n",x);
        freeReg();
    }
    else
    {
        if(lef->nodetype==tField)
        funpo=Class_Mlookup(Class_Flookup(Cptr,lef->right->varname)->Ctype,rig->varname)->Funcposition;
        else
        funpo=Class_Mlookup(Lookup(lef->varname)->Ctype,rig->varname)->Funcposition;
        x=getVaraddr(fp,lef);
        fprintf(fp,"ADD R%d,%d\n",x,1);
        fprintf(fp,"MOV R%d,[R%d]\n",x,x);
        fprintf(fp,"ADD R%d,%d\n",x,funpo);
        fprintf(fp,"MOV R%d,[R%d]\n",x,x);
        fprintf(fp,"CALL R%d\n",x);
        freeReg();
    }
}

/*
push for obj.fun() we getting the address from the Lookup itself but for 
self we need to get it from the stack and -3 for self and -4 for vft
==>  in push_self both the self and vfts are pushing
*/

void push_self(FILE*fp,struct tnode*root)
{
   if(root->left->nodetype==tSELF)
    {
        //push vft
        int x=getReg();
        fprintf(fp,"MOV R%d,BP\n",x);
        fprintf(fp,"ADD R%d,%d\n",x,-4);
        fprintf(fp,"MOV R%d,[R%d]\n",x,x);
        // fprintf(fp,"MOV [R%d],R%d\n",x,x);
        fprintf(fp,"PUSH R%d\n",x);
        freeReg();
        //for pushing self
        x=getReg();
        fprintf(fp,"MOV R%d,BP\n",x);
        fprintf(fp,"ADD R%d,%d\n",x,-3);
        fprintf(fp,"MOV R%d,[R%d]\n",x,x);
        // fprintf(fp,"MOV [R%d],R%d\n",x,x);
        fprintf(fp,"PUSH R%d\n",x);
        freeReg();
    }
    else{
        int x=getVaraddr(fp,root->left);
        int y=getReg();
        fprintf(fp,"MOV R%d,R%d\n",y,x);
        fprintf(fp,"ADD R%d,%d\n",y,1);
        fprintf(fp,"MOV R%d,[R%d]\n",y,y);
        fprintf(fp,"PUSH R%d\n",y);
        freeReg();
        fprintf(fp,"MOV R%d,[R%d]\n",x,x);
        // have a look at this when get some errors
        // fprintf(fp,"MOV [R%d],R%d\n",x,x);
        fprintf(fp,"PUSH R%d\n",x);
        freeReg();
    }

    //  if(root->left->nodetype==tField)
    // {
    //     int x=getVaraddr(fp,root->left);
    //     fprintf(fp,"MOV R%d,[R%d]\n",x,x);
    //     // fprintf(fp,"MOV [R%d],R%d\n",x,x);
    //     fprintf(fp,"PUSH R%d\n",x);
    //     freeReg();
    // }
    // else 
}

int codeGen(FILE*fp,struct tnode*root)
{
    int r,varAddr,sourceReg,destReg,label1,label2,label3,f,status,r1;
    char* varname;
    if(root==NULL) return -1;
    switch (root->nodetype)
    {
    case tCONNECT:
        codeGen(fp,root->left);
        codeGen(fp,root->right);
        return -1;
    case tREAD:
        sourceReg=getVaraddr(fp,root->left);
        printRead(fp,sourceReg);
        freeReg();
        return -1;
    case tWRITE:
    int r=codeGen(fp,root->left);
    printWrite(fp,r);
    //reg returnning have the value in it
    freeReg();
    return -1;
    case tNUM:
     r=getReg();
     fprintf(fp,"MOV R%d,%d\n",r,root->val);
     return r;
    case tMSG:
        r=getReg();
        fprintf(fp,"MOV R%d,%s\n",r,root->varname);
        return r;
    case tVAR:
    r=getReg();
    varAddr=getVaraddr(fp,root);
    fprintf(fp,"MOV R%d,[R%d]\n",r,varAddr);
    //var returning an reg contain val
    freeReg();
    return r;
    case tADD:
      sourceReg = codeGen(fp, root->left);
      destReg = codeGen(fp, root->right);
      fprintf(fp, "ADD R%d,R%d\n", sourceReg, destReg);
      freeReg();
      return sourceReg;
    case tSUB:
      sourceReg = codeGen(fp, root->left);
      destReg = codeGen(fp, root->right);
      fprintf(fp, "SUB R%d,R%d\n", sourceReg, destReg);
      freeReg();
      return sourceReg;
    case tMUL:
      sourceReg = codeGen(fp, root->left);
      destReg = codeGen(fp, root->right);
      fprintf(fp, "MUL R%d,R%d\n", sourceReg, destReg);
      freeReg();
      return sourceReg;
    case tDIV:
      sourceReg = codeGen(fp, root->left);
      destReg = codeGen(fp, root->right);
      fprintf(fp, "DIV R%d,R%d\n", sourceReg, destReg);
      freeReg();
      return sourceReg;
    case tMOD:
      sourceReg = codeGen(fp, root->left);
      destReg = codeGen(fp, root->right);
      fprintf(fp, "MOD R%d,R%d\n", sourceReg, destReg);
      freeReg();
      return sourceReg;
    case tGE:
        sourceReg=codeGen(fp,root->left);
        destReg=codeGen(fp,root->right);
        fprintf(fp,"GE R%d,R%d\n",sourceReg,destReg);
        freeReg();
        return sourceReg;
    case tGT:
        sourceReg=codeGen(fp,root->left);
        destReg=codeGen(fp,root->right);
        fprintf(fp,"GT R%d,R%d\n",sourceReg,destReg);
        freeReg();
        return sourceReg;
    case tLE:
        sourceReg=codeGen(fp,root->left);
        destReg=codeGen(fp,root->right);
        fprintf(fp,"LE R%d,R%d\n",sourceReg,destReg);
        freeReg();
        return sourceReg;
    case tLT:
        sourceReg=codeGen(fp,root->left);
        destReg=codeGen(fp,root->right);
        fprintf(fp,"LT R%d,R%d\n",sourceReg,destReg);
        freeReg();
        return sourceReg;
    case tNE:
        sourceReg=codeGen(fp,root->left);
        destReg=codeGen(fp,root->right);
        fprintf(fp,"NE R%d,R%d\n",sourceReg,destReg);
        freeReg();
        return sourceReg;
    case tEQ:
        sourceReg=codeGen(fp,root->left);
        destReg=codeGen(fp,root->right);
        fprintf(fp,"EQ R%d,R%d\n",sourceReg,destReg);
        freeReg();
        return sourceReg;
    case tAND:
        sourceReg=codeGen(fp,root->left);
        destReg=codeGen(fp,root->right);
        fprintf(fp,"MUL R%d,R%d\n",sourceReg,destReg);
        freeReg;
        return sourceReg;
    case tASSIGN:
        sourceReg=getVaraddr(fp,root->left);
        destReg=codeGen(fp,root->right);
        fprintf(fp,"MOV [R%d],R%d\n",sourceReg,destReg);
        
        //asg like obj1=obj2
        if(root->left->Gentry && root->left->Gentry->Ctype)
        {
        // int ef=Lookup(root->right->varname)->Ctype->Class_index;
        destReg=getVaraddr(fp,root->right);
        fprintf(fp,"ADD R%d,1\n",destReg);
        fprintf(fp,"MOV R%d,[R%d]\n",destReg,destReg);
        fprintf(fp,"ADD R%d,%d\n",sourceReg,1);
        fprintf(fp,"MOV [R%d],R%d\n",sourceReg,destReg);
        freeReg();
        }
        freeReg();
        freeReg();
        return -1;
    case tARRAY:
        sourceReg=getVaraddr(fp,root);
        fprintf(fp,"MOV R%d,[R%d]\n",sourceReg,sourceReg);
        return sourceReg;
    case tARRAY2D:
        sourceReg=getVaraddr(fp,root);
        fprintf(fp,"MOV R%d,[R%d]\n",sourceReg,sourceReg);
        return sourceReg;
    case tIF:
        label1=getLabel();
        if(root->third!=NULL)
        label2=getLabel();
        // fprintf(fp,"L%d:\n",label1);
        sourceReg=codeGen(fp,root->left);
        if(root->third!=NULL)
        fprintf(fp,"JZ R%d,L%d\n",sourceReg,label2);
        else
        fprintf(fp,"JZ R%d,L%d\n",sourceReg,label1);

        codeGen(fp,root->right);
        fprintf(fp,"JMP L%d\n",label1);

        if(root->third!=NULL)
        {
            fprintf(fp,"L%d:\n",label2);
            codeGen(fp,root->third);
            fprintf(fp,"JMP L%d\n",label1);
        }

        fprintf(fp,"L%d:\n",label1);
        return -1;
    case tWHILE:
        label1=getLabel();
        label2=getLabel();
        stackb++;
        stackc++;
        stack1[stackc]=label1;
        stack2[stackb]=label2;
        fprintf(fp,"L%d:\n",label1);
        sourceReg=codeGen(fp,root->left);
        fprintf(fp,"JZ R%d,L%d\n",sourceReg,label2);
        codeGen(fp,root->right);
        fprintf(fp,"JMP L%d\n",label1);
        fprintf(fp,"L%d:\n",label2);
        stackb--;
        stackc--;
        return -1;
    case tCONTINUE:
        if(stackc<0)
        {
            printf("Some errors has detected in tCONTINUE\n");
            exit(0);
        }
        printf("stackc=%d and value=%d\n",stackc,stack1[stackc]);
        fprintf(fp,"JMP L%d\n",stack1[stackc]);
        return -1;
    case tBREAK:
        if(stackb<0)
        {
            return -1;
        }
        fprintf(fp,"JMP L%d\n",stack2[stackb]);
        return -1;
    case tFunction:
        for(int i=0;i<=reg;i++)
            fprintf(fp,"PUSH R%d\n",i);
        status=reg;
        freeAllReg();

        pushArguments(fp,root->left); //for pushing argumnets   
        fprintf(fp,"PUSH R0\n"); // space for return value
        struct Gsymbol *terr=Lookup(root->varname);
        fprintf(fp,"CALL F%d\n",terr->flabel); //call the function or return address allocating

        r=status+1;
        fprintf(fp,"POP R%d\n",r); //for return value
        if(status==-1)
        r=getReg();

        popArguments(fp,root->left); //for pop argumnets

        if(status==-1)
         freeReg();
        for (int i = status; i >= 0; i--)
            fprintf(fp, "POP R%d\n", i);
        reg = status;
        r = getReg();
        return r;
    case tReturn:
        r=codeGen(fp,root->left);
        int x=getReg();
        fprintf(fp,"MOV R%d,BP\n",x);
        fprintf(fp,"ADD R%d,-2\n",x);
        fprintf(fp,"MOV [R%d],R%d\n",x,r);
        freeReg();
        freeReg();
        //need to pop all the local variables
        struct Lsymbol*temp=getLocal();
        while(temp!=NULL)
        {
            if(temp->binding >0)
            {
                fprintf(fp,"POP R0\n");
            }
            temp=temp->next;
        }
        // fprintf(fp,"MOV BP,[SP]\n");
        // fprintf(fp,"POP R0\n");
        fprintf(fp,"POP BP\n");
        // if in main there is no need of th return thing
        // if(_in_func==1)
        // {
        //     fprintf(fp,"RET\n");
        //     printf("hello from return\n");
        // }
        return -1;
    case tFieldFun:
         for(int i=0;i<=reg;i++)
            fprintf(fp,"PUSH R%d\n",i);
        status=reg;
        freeAllReg();
        pushArguments(fp,root->right->third); //for pushing argumnets   
        // fprintf(fp,"PUSH R0\n"); //for self
        push_self(fp,root);
        fprintf(fp,"PUSH R0\n"); // space for return value

        find_label(root->left,root->right,fp); //here we call CALL F%d

        r=status+1;
        fprintf(fp,"POP R%d\n",r); //for return value
        if(status==-1)
        r=getReg();
        r = getReg();
        fprintf(fp, "POP R%d\n", r);
        fprintf(fp, "POP R%d\n", r);
        freeReg();
        popArguments(fp,root->right->third); //for pop argumnets

        if(status==-1)
         freeReg();
        for (int i = status; i >= 0; i--)
            fprintf(fp, "POP R%d\n", i);
        reg = status;
        r = getReg();
        return r;

    //alloc() Initial() and free()

    //in alloc we are storing the heap adrres in the stack adress located like BP+i  and then retrive thro getvarAdrr
    case tNEW:
        for(int i=0;i<=reg;i++)
        fprintf(fp,"PUSH R0\n");
        status=reg;
        fprintf(fp,"MOV R0,\"Alloc\"\nPUSH R0\nMOV R0,8\nPUSH R0\nADD SP,2\nPUSH R0\nCALL 0\n");
        varAddr=getVaraddr(fp,root->left);
        r=getReg();
        fprintf(fp,"POP R%d\n",r);
        fprintf(fp,"MOV [R%d],R%d\n",varAddr,r);
        fprintf(fp, "SUB SP,4\n");
        freeReg();
        for (int i = status; i >= 0; i--)
            fprintf(fp, "POP R%d\n", i);
        //for allocating space for vft
        r=getReg();
        int df=CLookup(root->right->varname)->Class_index;
        fprintf(fp,"MOV R%d,%d\n",r,4096+(8*df));
        fprintf(fp,"ADD R%d,%d\n",varAddr,1);
        fprintf(fp,"MOV [R%d],R%d\n",varAddr,r);
        freeReg();
        reg=status;
        break;
    case tALLOC:
        for(int i=0;i<=reg;i++)
        fprintf(fp,"PUSH R0\n");
        status=reg;
        fprintf(fp,"MOV R0,\"Alloc\"\nPUSH R0\nMOV R0,8\nPUSH R0\nADD SP,2\nPUSH R0\nCALL 0\n");
        varAddr=getVaraddr(fp,root->left);
        r=getReg();
        fprintf(fp,"POP R%d\n",r);
        fprintf(fp,"MOV [R%d],R%d\n",varAddr,r);
        fprintf(fp, "SUB SP,4\n");
        freeReg();
        for (int i = status; i >= 0; i--)
            fprintf(fp, "POP R%d\n", i);
        reg=status;
        break;
    // just initialization thing is gona happen
    case tInitial:
        for(int i=0;i<=reg;i++)
           fprintf(fp,"PUSH R0\n");
        status=reg;
        fprintf(fp,"MOV R0,\"Heapset\"\nPUSH R0\nADD SP,4\nCALL 0\n");
        fprintf(fp,"SUB SP,5\n");
        for (int i = status; i >= 0; i--)
                fprintf(fp, "POP R%d\n", i);
        reg=status;
        break;

    //here the first take the adrress to which to freed actualy it will be in the reg  pointed by the varadrre
    // the copy that adree to a reg  "r1"
    case tDELETE:
    case tFREE:
        for(int i=0;i<=reg;i++)
        fprintf(fp,"PUSH R0\n");
        status=reg;
        r1=status+1;
        varAddr=getVaraddr(fp,root->left);
        fprintf(fp,"MOV R%d,[R%d]\n",r1,varAddr);
        
        fprintf(fp,"MOV R0,\"Free\"\nPUSH R0\nPUSH R%d\nADD SP,3\nCALL 0\n",r1);
        fprintf(fp,"SUB SP,5\n");
        for (int i = status; i >= 0; i--)
                fprintf(fp, "POP R%d\n", i);
        reg=status;
        break;

    //for nullptr
    case tNullAs:
        varAddr=getVaraddr(fp,root->left);
        r1=getReg();
        fprintf(fp,"MOV R%d,-1\n",r1);
        fprintf(fp,"MOV [R%d],R%d\n",varAddr,r1);
        freeReg();
        freeReg();
        break;
    case tNullEq:
        varAddr=getVaraddr(fp,root->left);
        r=getReg();
        fprintf(fp,"MOV R%d,[R%d]\n",varAddr,varAddr);
        fprintf(fp,"MOV R%d,-1\n",r);
        fprintf(fp,"EQ R%d,R%d\n",varAddr,r);
        freeReg();
        return varAddr;
    case tNullNe:
        varAddr=getVaraddr(fp,root->left);
        r=getReg();
        fprintf(fp,"MOV R%d,[R%d]\n",varAddr,varAddr);
        fprintf(fp,"MOV R%d,-1\n",r);
        fprintf(fp,"NE R%d,R%d\n",varAddr,r);
        freeReg();
        return varAddr;
    case tField:
        r=getReg();
        varAddr=getVaraddr(fp,root);
        fprintf(fp,"MOV R%d,[R%d]\n",r,varAddr);
        //var returning an reg contain val
        freeReg();
        break;
    default:
    printf("\ncode gen have some errors %d\n",root->nodetype);
    exit(0);
    }
}
const char *token_names[] = {
    "tNUM", "tVAR", "tADD", "tSUB", "tMUL", "tDIV", "tREAD", "tWRITE",
    "tASSIGN", "tCONNECT", "tINT", "tIF", "tWHILE", "tBOOL", "tLT",
    "tLE", "tGT", "tGE", "tEQ", "tNE", "tCONTINUE", "tBREAK", "tMSG",
    "tSTR", "tARRAY", "tMOD", "tARRAY2D", "tFunconnect", "tFunction","tReturn","tAND","tOR",
    "tALLOC","tFREE","tField","tInitial","tNullEq","tNullNe","tNullAs","tSELF","tFieldFun","tINIT","tNEW","tDELETE"
};

void prefix(struct tnode*root)
{
    if(root!=NULL)
    {
        printf("%s ",token_names[root->nodetype]);
        // if(root->type==NULL)
        // printf("NUlli\n");
        // else
        // printf("type=%s\n",root->type->name);
        prefix(root->left);
        prefix(root->right);
        prefix(root->third);
    }
}




