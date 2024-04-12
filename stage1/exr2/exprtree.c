int reg=0;



int getreg(){
    int r=reg;
    reg++;
    if(r>20)
    {
        printf("out of registers\n");
        exit(1);
    }
    return r;
}

void freereg()
{
    reg--;
    if(reg<0)
    {
        reg=0;
    }
}

struct tnode* makeLeafNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = malloc(sizeof(char));
    *(temp->op) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

void infix(struct tnode *t)
{
    if(t!=NULL)
    {
        if(t->op==NULL)
        printf("%d ",t->val);
        else printf("%c ",*(t->op));
        infix(t->left);
        infix(t->right);
    }
}
void postfix(struct tnode *t)
{
    if(t!=NULL)
    {
        infix(t->left);
        infix(t->right);
        if(t->op==NULL)
        printf("%d ",t->val);
        else printf("%c ",*(t->op));
    }
}

// int codeGen1(FILE *fp,struct tnode *t)
// {
//     if(t!=NULL)
//     {
//         int i=codeGen1(fp,t->left);
//         int j=codeGen1(fp,t->right);
//         if(t->op==NULL)
//         {

//         }
//     }
// }

int evaluate(struct tnode *t){
    if(t->op == NULL)
    {
        return t->val;
    }
    else{
        switch(*(t->op)){
            case '+' : return evaluate(t->left) + evaluate(t->right);
                       break;
            case '-' : return evaluate(t->left) - evaluate(t->right);
                       break;
            case '*' : return evaluate(t->left) * evaluate(t->right);
                       break;
            case '/' : return evaluate(t->left) / evaluate(t->right);
                       break;
        }
    }
}

int codeGen(FILE* fp,struct tnode*t)
{
    int r,r1,r2;
    if(t->op!=NULL){
        switch (*(t->op))
        {
        case '+':
            r1=codeGen(fp,t->left);r2=codeGen(fp,t->right);
            fprintf(fp,"ADD R%d,R%d\n",r1,r2);
            freereg();
            return r1;
            break;
        case '-':
            r1=codeGen(fp,t->left);r2=codeGen(fp,t->right);
            fprintf(fp,"SUB R%d,R%d\n",r1,r2);
            freereg();
            return r1;
            break;
        case '*':
            r1=codeGen(fp,t->left);r2=codeGen(fp,t->right);
            fprintf(fp,"MUL R%d,R%d\n",r1,r2);
            freereg();
            return r1;
            break;
        case '/':
            r1=codeGen(fp,t->left);r2=codeGen(fp,t->right);
            fprintf(fp,"DIV R%d,R%d\n",r1,r2);
            freereg();
            return r1;
            break;
        default:
            break;
        }
    }
    else
    {
        r=getreg();
        fprintf(fp,"MOV R%d,%d\n",r,t->val);
        return r;
    }
}

void printExit(FILE* fp)
{
    fprintf(fp,"MOV R1,\"Exit\"\nPUSH R1\nCALL 0\nPOP R0\n");
}

void printWrite(FILE* fp)
{
    fprintf(fp,"MOV R1,\"Write\"\nPUSH R1\nMOV R1,-2\nPUSH R1\nPUSH R0\nPUSH R1\nPUSH R1\nCALL 0\nPOP R0\nPOP R1\nPOP R1\nPOP R1\nPOP R1\n");
}