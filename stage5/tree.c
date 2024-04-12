#include<string.h>
#include<stdio.h>
#include "tree.h"
#include "symbol.h"

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

void initial(FILE * fp)
{
    fprintf(fp, "0\n2056\n0\n0\n0\n0\n0\n0\n");
    fprintf(fp, "MOV SP, %d\n", bind-1);
    fprintf(fp,"MOV BP,4096\n");
    fprintf(fp, "PUSH R0\n");
    fprintf(fp, "CALL MAIN\n");
    endcode(fp);
}
  
void endcode(FILE* fp)
{
    int r=getReg();
    fprintf(fp,"MOV R%d,\"Exit\"\nPUSH R%d\nCALL 0\nPOP R%d\n",r,r,r);
}

struct tnode* createTree(int val, int type, char* c,int nodetype, struct tnode *l, struct tnode *r,struct tnode*t)
{
    switch(nodetype)
    {
        case tADD:
        case tSUB:
        case tMUL:
        case tDIV:
        case tMOD:
        if(l->type!=r->type &&l->type==tINT )
        {
            printf("\ntype mismatch error in add \n");
            exit(0);
        }
        else{
            type=tINT;
        }
        break;
        case tLE:
        case tGE:
        case tGT:
        case tLT:
        case tEQ:   
        case tNE:
        if(l->type!=r->type && l->type==tBOOL)
        {
            printf("\ntype mismatch error in tLe ...\n");
            exit(0);
        }
        else type=tBOOL;
        break;
        case tASSIGN:
        if(l->type!=r->type)
        {
            printf("\ntype mismatch error in tassign\n");
            exit(0);
        }
        break;
        case tIF:
        case tWHILE:
        if(l->type!=tBOOL)
        {
            printf("\ntype mismatch error in tbool\n");
            exit(0);
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
            exit(1);
        }
        type=l->type;
        break;
        case tOR:
        //not added the tOR code in there
        if(l->type!=r->type)
        {
            printf("type error in tAND \n");
            exit(1);
        }
        type=l->type;
        break;
    }
    struct tnode* temp;
    temp=(struct tnode*)malloc(sizeof(struct tnode));    
    temp->val=val;
    temp->type=type;
    temp->varname=c;
    temp->nodetype=nodetype;
    temp->Gentry=NULL;
    temp->left=l;
    temp->right=r;
    temp->third=t;
}


void printRead(FILE* fp,int addr)
{
    int r=getReg();
    fprintf(fp,"MOV R%d,\"Read\"\nPUSH R%d\nMOV R%d,-1\nPUSH R%d\nMOV R%d,R%d\nPUSH R%d\nPUSH R%d\nPUSH R%d\nCALL 0\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\n",r,r,r,r,r,addr,r,r,r,r,r,r,r,r);
    freeReg();
}
void printWrite(FILE* fp,int regNum)
{
    int r=getReg();
  fprintf(fp, "MOV R%d, \"Write\"\nPUSH R%d\nMOV R%d, -2\nPUSH R%d\nMOV R%d,R%d\nPUSH R%d\nPUSH R%d\nPUSH R%d\nCALL 0\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\n", r, r, r, r, r, regNum, r, r, r, r, r, r, r, r);
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
    else return -1;
}

int codeGen(FILE*fp,struct tnode*root)
{
    int r,varAddr,sourceReg,destReg,label1,label2,label3,f,status;
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
        fprintf(fp,"RET\n");
        return -1;
    default:
    printf("\ncode gen have some errors %d\n",root->nodetype);
    exit(0);
    }
}
const char *token_names[] = {
    "tNUM", "tVAR", "tADD", "tSUB", "tMUL", "tDIV", "tREAD", "tWRITE",
    "tASSIGN", "tCONNECT", "tINT", "tIF", "tWHILE", "tBOOL", "tLT",
    "tLE", "tGT", "tGE", "tEQ", "tNE", "tCONTINUE", "tBREAK", "tMSG",
    "tSTR", "tARRAY", "tMOD", "tARRAY2D", "tFunconnect", "tFunction","tReturn","tAND","tOR"
};


void prefix(struct tnode*root)
{
    if(root!=NULL)
    {
        printf("%s ",token_names[root->nodetype]);
        // if(root->nodetype==tMSG)
        // {
        //     printf("str=%s\n",root->varname);
        // }
        // if(root->nodetype==tNUM)
        // printf("val=%d\n",root->val);
        prefix(root->left);
        prefix(root->right);
        prefix(root->third);
    }
}




