#define tNUM 0
#define tVAR 1
#define tADD 2
#define tSUB 3
#define tMUL 4
#define tDIV 5
#define tREAD 6
#define tWRITE 7
#define tASSIGN 8
#define tCONNECT 9
#define tINT 10
#define tIF 11
#define tWHILE 12
#define tBOOL 13
#define tLT 14
#define tLE 15
#define tGT 16
#define tGE 17
#define tEQ 18
#define tNE 19


typedef struct tnode {
    int val;        // value of a number for NUM nodes.
    int type;       // type of variable
    char* varname;  // name of a variable for ID nodes
    int nodetype;   // information about non-leaf nodes - read/write/connector/+/* etc.
    struct tnode *left,*right,*third;  // left and right branches
}tnode;

typedef struct lnode {
    int addr;
    char *labelname;
    struct lnode *next;
}lnode;

void createlnode(struct lnode*head,char*c,int line);

/*Create a node tnode*/
int getReg();
void freeReg();
int getLabel();

struct tnode* createTree(int val, int type, char* c,int nodetype, struct tnode *l, struct tnode *r,struct tnode*t);

int codeGen(FILE *fp,struct tnode*root);

void printRead(FILE* fp,int addr);

void printWrite(FILE* fp,int regNum);

int getVaraddr(struct tnode*root);

void prefix(struct tnode*root);