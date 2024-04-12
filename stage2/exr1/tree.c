int reg=0;

int getReg()
{
    int r=reg;
    reg++;
    if(reg>20)
    {
        printf("out of registers\n");
        exit(1);
    }
    return r;
}

void freeReg()
{
    reg--;
    if(reg<0)
    {
        reg=0;
    }
}

struct tnode* createTree(int val, int type, char* c,int nodetype, struct tnode *l, struct tnode *r)
{
    switch(nodetype)
    {
        case tADD:
        case tSUB:
        case tMUL:
        case tDIV:
        if(l->type!=r->type || l->type!=tINT)
        {
            printf("\ntype mismatch error\n");
            exit(0);
        }
        else{
            type=tINT;
        }
        break;
    }
    struct tnode* temp;
    temp=(struct tnode*)malloc(sizeof(struct tnode));    
    temp->val=val;
    temp->type=type;
    temp->varname=c;
    temp->nodetype=nodetype;
    temp->left=l;
    temp->right=r;
}

void infix2prefix(struct tnode*root)
{
    if(root!=NULL)
    {
        printf("%d ",root->nodetype);
        infix2prefix(root->left);
        infix2prefix(root->right);
    }
}

void printRead(FILE* fp,int addr)
{
    int r=getReg();
    fprintf(fp,"MOV R%d,\"Read\"\nPUSH R%d\nMOV R%d,-1\nPUSH R%d\nMOV R%d,%d\nPUSH R%d\nPUSH R%d\nPUSH R%d\nCALL 0\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\n",r,r,r,r,r,addr,r,r,r,r,r,r,r,r);
    freeReg();
}
void printWrite(FILE* fp,int regNum)
{
    int r=getReg();
  fprintf(fp, "MOV R%d, \"Write\"\nPUSH R%d\nMOV R%d, -2\nPUSH R%d\nMOV R%d,R%d\nPUSH R%d\nPUSH R%d\nPUSH R%d\nCALL 0\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\n", r, r, r, r, r, regNum, r, r, r, r, r, r, r, r);
    freeReg();
}

int getVaraddr(struct tnode*root)
{
    char*symbol=root->varname;
    int x=4096+(symbol[0]-'a');
    return  x;
}

int codeGen(FILE*fp,struct tnode*root)
{
    int r,varAddr,sourceReg,destReg;
    char* varname;
    if(root==NULL) return -1;
    switch (root->nodetype)
    {
    case tCONNECT:
        codeGen(fp,root->left);
        codeGen(fp,root->right);
        return -1;
    case tREAD:
        if(root->left==NULL)
        {
            printf("\nInvalid read statement\n");
            exit(0);
        }
        varname=root->left->varname;
        varAddr=4096+(varname[0]-'a');
        printRead(fp,varAddr);
        return -1;
    case tWRITE:
    int r=codeGen(fp,root->left);
    printWrite(fp,r);
    return -1;
    case tNUM:
     r=getReg();
     fprintf(fp,"MOV R%d,%d\n",r,root->val);
     return r;
    case tVAR:
    r=getReg();
    varname=root->varname;
    varAddr=4096+(varname[0]-'a');
    fprintf(fp,"MOV R%d,[%d]\n",r,varAddr);
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

    case tASSIGN:
        sourceReg=getVaraddr(root->left);
        destReg=codeGen(fp,root->right);
        fprintf(fp,"MOV [%d],R%d\n",sourceReg,destReg);
        return -1;
    default:
    printf("\ncode gen have some errors %d\n",root->nodetype);
    exit(0);
    }
}



int arr[26]={1,2};


void calculate(struct tnode* root,int *ptr)
{
    if(root!=NULL)
    {
        if(root->nodetype==tWRITE)
        {
            *ptr=compute(root->left);
        }
        if(root->nodetype==tASSIGN)
        {
            int x=compute(root->right);
             char *vari=root->left->varname;
            int y=vari[0]-'a';
            arr[y]=x;
        }
        else{
            calculate(root->left,ptr);
            calculate(root->right,ptr);
        }
    }
}

int compute(struct tnode*root)
{
    if(root->nodetype==tNUM)
    return root->val;
    else if(root->nodetype==tVAR)
    {
        char *vari=root->varname;
        int x=vari[0]-'a';
        return arr[x];
    }
    else{
        switch(root->nodetype)
        {
            case tADD:return compute(root->left)+compute(root->right);
            break;
            case tSUB:return compute(root->left)-compute(root->right);
            break;
            case tMUL:return compute(root->left)*compute(root->right);
            break;
            case tDIV:return compute(root->left)/compute(root->right);
            break;
        }
    }
}

