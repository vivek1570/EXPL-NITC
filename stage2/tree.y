%{
    #include<stdio.h>
    #include<stdlib.h>
    #include "tree.h"
    #include "tree.c"
    FILE *targetFile;
    extern FILE *yyin;
    int yylex(void);
    %}


    %union{
        struct tnode *node;
    }

    %token <node> NUM PLUS MINUS MUL DIV begin END WRITE READ EOL ASSIGN ID

    %type<node> expr Program Stmt Slist InputStmt OutputStmt AsgStmt


    %left PLUS MINUS
    %left MUL DIV

    %%

    Program: begin Slist END EOL
    {

        fprintf(targetFile,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\nMOV SP, 4121\n",0,2056,0,0,0,0,1,0);
        int x=codeGen(targetFile,$2);
        int r=getReg();
        fprintf(targetFile,"MOV R%d,\"Exit\"\nPUSH R%d\nCALL 0\nPOP R%d",r,r,r);
        /* infix2prefix($2); */
        int ans=0;
        int *ptr=&ans;
        /* calculate($2,ptr); */
        printf("The value=%d\n",ans);

        printf("\nDone!!\n");   
        exit(0);

    }| begin END EOL{
        printf("\nEmpty program\n");
        exit(0);
    };
    Slist:Slist Stmt 
    {
        $$=createTree(-1,-1,NULL,tCONNECT,$1,$2);
    }
    | Stmt
    {
        $$=$1;
    };

    Stmt: InputStmt {$$=$1;}|
          OutputStmt{$$=$1;}|
          AsgStmt{ $$=$1;};

    InputStmt:  READ '(' ID ')' EOL {$$=createTree(-1,-1,NULL,tREAD,$3,NULL);};

    OutputStmt: WRITE '(' expr ')' EOL {$$=createTree(-1,-1,NULL,tWRITE,$3,NULL);};
    
    AsgStmt: ID ASSIGN expr EOL { $$=createTree(-1,-1,NULL,tASSIGN,$1,$3);};

    expr:expr PLUS expr {$$=createTree(-1,-1,"+",tADD,$1,$3);}|
         expr MINUS expr {$$=createTree(-1,-1,"-",tSUB,$1,$3);}|
         expr MUL expr {$$=createTree(-1,-1,"*",tMUL,$1,$3);}|
         expr DIV expr{$$=createTree(-1,-1,"/",tDIV,$1,$3);}|
         NUM {$$=$1;}|
         ID{$$=$1;};
    %%

int yyerror(char const *s)
{
    printf("yyerror %s",s);
    return 0;
}


int main() {
  targetFile=fopen("targetFile.xsm","w");
  if(targetFile==NULL)
  {
    printf("file error\n");
  }
  yyin=fopen("input_l","r");
  yyparse();
  fclose(targetFile);
  return 0;
}