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


typedef struct tnode {
    int val;        // value of a number for NUM nodes.
    int type;       // type of variable
    char* varname;  // name of a variable for ID nodes
    int nodetype;   // information about non-leaf nodes - read/write/connector/+/* etc.
    struct tnode *left,*right;  // left and right branches
}tnode;

/*Create a node tnode*/
int getReg();
void freeReg();

struct tnode* createTree(int val, int type, char* c,int nodetype, struct tnode *l, struct tnode *r);

int codeGen(FILE *fp,struct tnode*root);

void printRead(FILE* fp,int addr);

void printWrite(FILE* fp,int regNum);

int getVaraddr(struct tnode*root);

int codeGen(FILE*fp,struct tnode*root);

void infix2prefix(struct tnode*root);

void calculate(struct tnode*root,int *ptr);

int compute(struct tnode* root);