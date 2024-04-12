%{
    #include<stdio.h>
    #include<stdlib.h>
    #include "tree.h"
    #include "tree.c"
    #include<string.h>
    FILE *targetFile;
    extern FILE *yyin;
    int yylex(void);
    extern char* yytext;
    %}


    %union{
        struct tnode *node;
    }

    %token <node> NUM PLUS MINUS MUL DIV begin END WRITE READ EOL ASSIGN ID IF then Else ENDIF endwhile WHILE DO BREAK CONTINUE
    %token <node> LE GE LT GT NE EQ

    %type<node> expr Program Stmt Slist InputStmt OutputStmt AsgStmt Ifstmt Whilestmt BreakStmt ContStmt


    %left PLUS MINUS
    %left MUL DIV
    %nonassoc LE GE LT GT EQ NE

    %%

    Program: begin Slist END EOL
    {
        printf("Done!!\n");
        /* prefix($2); */
        fprintf(targetFile,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\nMOV SP,4121\n",0,2056,0,0,0,0,1,0);
        codeGen(targetFile,$2);
        int r=getReg();
        fprintf(targetFile,"MOV R%d,\"Exit\"\nPUSH R%d\nCALL 0\nPOP R%d",r,r,r);
        printf("\nDone!!\n");   
        exit(0);

    }| begin END EOL{
        printf("\nEmpty program\n");
        exit(0);
    };
    Slist:Slist Stmt 
    {
        $$=createTree(-1,-1,NULL,tCONNECT,$1,$2,NULL);
    }
    | Stmt
    {
        $$=$1;
    };

    Stmt: InputStmt {$$=$1;}|
          OutputStmt{$$=$1;}|
          AsgStmt{ $$=$1;}|
          Ifstmt{$$=$1;}|
          Whilestmt{ $$=$1;}|
          BreakStmt { $$=$1;}|
          ContStmt {$$=$1;};
          
    BreakStmt: BREAK EOL {$$=createTree(-1,-1,NULL,tBREAK,NULL,NULL,NULL);};

    ContStmt: CONTINUE EOL {$$=createTree(-1,-1,NULL,tCONTINUE,NULL,NULL,NULL);};

    InputStmt:  READ '(' ID ')' EOL {$$=createTree(-1,-1,NULL,tREAD,$3,NULL,NULL);};

    OutputStmt: WRITE '(' expr ')' EOL {$$=createTree(-1,-1,NULL,tWRITE,$3,NULL,NULL);};
    
    AsgStmt: ID ASSIGN expr EOL { $$=createTree(-1,-1,NULL,tASSIGN,$1,$3,NULL);};

    Ifstmt: IF '(' expr ')' then Slist Else Slist ENDIF EOL {$$=createTree(-1,-1,NULL,tIF,$3,$6,$8);}
        | IF '(' expr ')' then Slist ENDIF EOL {$$=createTree(-1,-1,NULL,tIF,$3,$6,NULL);};

    Whilestmt: WHILE '(' expr ')' DO Slist endwhile EOL {$$=createTree(-1,-1,NULL,tWHILE,$3,$6,NULL);};

    expr:expr PLUS expr {$$=createTree(-1,-1,"+",tADD,$1,$3,NULL);}|
         expr MINUS expr {$$=createTree(-1,-1,"-",tSUB,$1,$3,NULL);}|
         expr MUL expr {$$=createTree(-1,-1,"*",tMUL,$1,$3,NULL);}|
         expr DIV expr{$$=createTree(-1,-1,"/",tDIV,$1,$3,NULL);}|
         expr LE expr {$$=createTree(-1,-1,NULL,tLE,$1,$3,NULL);}|
         expr GE expr {$$=createTree(-1,-1,NULL,tGE,$1,$3,NULL);}|
         expr LT expr {$$=createTree(-1,-1,NULL,tLT,$1,$3,NULL);}|
         expr GT expr {$$=createTree(-1,-1,NULL,tGT,$1,$3,NULL);}|
         expr NE expr {$$=createTree(-1,-1,NULL,tNE,$1,$3,NULL);}|
         expr EQ expr {$$=createTree(-1,-1,NULL,tEQ,$1,$3,NULL);}|
         NUM {$$=createTree(atoi(yytext),tINT,NULL,tNUM,NULL,NULL,NULL);}|
         ID{
            $$=$1;};
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