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
