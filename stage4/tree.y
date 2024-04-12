%{
    #include<stdio.h>
    #include<stdlib.h>
    #include "tree.h"
    #include "tree.c"
    #include "symbol.h"
    #include "symbol.c"
    #include<string.h>
    FILE *targetFile;
    extern FILE *yyin;
    int yylex(void);
    extern char* yytext;
    int type;
    int yyerror(char const *s);
    %}

    %union{
        struct tnode *node;
    }

    %token <node> NUM PLUS MINUS MUL DIV  WRITE READ EOL ASSIGN ID IF then Else ENDIF endwhile WHILE DO BREAK CONTINUE
    %token <node> LE GE LT GT NE EQ MSG MOD

    %type<node> expr Program Stmt Slist InputStmt OutputStmt AsgStmt Ifstmt Whilestmt BreakStmt ContStmt VAR 

    %token DECL ENDDECL INT STR COMMA 

    %type Declarations DeclList Decl Type VarList

    
    %left EQ LE GE LT GT NE
    %left PLUS MINUS
    %left MUL DIV
    %left MOD
    %right ASSIGN
    
    %%

    Program: Declarations Slist
    {
        printf("\nDone!!!\n");
        /* printSTable(); */
        prefix($2);
        initial(targetFile);
        codeGen(targetFile,$2);
        endcode(targetFile);
        printf("codeGen completed\n");
        printf("\n-------------------------------------------------------------\n");
    }| Declarations {
        printf("\nEmpty program\n");
        printSTable();
        exit(0);
    };

    Declarations : DECL DeclList ENDDECL|
     DECL ENDDECL

    DeclList : DeclList Decl | Decl

    Decl : Type VarList EOL 

    Type : INT {
        type=tINT;
    }|STR {
        type=tSTR;
    };

    VarList : VarList COMMA ID
    {
        if(Lookup($3->varname)==NULL)
        {
            Install($3->varname,type,1);
        }
        else{
            printf("Redeclare error\n");
            exit(1);
        }
    }
     | ID
     {
        if(Lookup($1->varname)==NULL)
        {
            Install($1->varname,type,1);
        }
        else{
            printf("Redeclare error\n");
            exit(1);
        }
     }|VarList COMMA ID '[' NUM ']'
     {
        if(Lookup($3->varname)==NULL)
        {
            Install($3->varname,type,$5->val);
        }
        else{
            printf("There is a redeclaration error\n");
            exit(1);
        }
     }|ID '[' NUM ']'
     {
        if(Lookup($1->varname)==NULL)
        {
            Install($1->varname,type,$3->val);
        }
        else{
            printf("There is a redeclaration error\n");
            exit(1);
        }
     }|
     ID '[' NUM ']''['NUM']'
     {
        if(Lookup($1->varname)==NULL)
        {
            int x=($3->val)*($6->val);
            Install($1->varname,type,x);
        }
        else{
            printf("There is a redeclaration error\n");
            exit(1);
        }
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

    InputStmt:  READ '(' expr ')' EOL {$$=createTree(-1,-1,NULL,tREAD,$3,NULL,NULL);};

    OutputStmt: WRITE '(' expr ')' EOL {$$=createTree(-1,-1,NULL,tWRITE,$3,NULL,NULL);};
    
    AsgStmt: expr ASSIGN expr EOL { $$=createTree(-1,-1,NULL,tASSIGN,$1,$3,NULL);};

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
         expr MOD expr {$$=createTree(-1,-1,NULL,tMOD,$1,$3,NULL);}|
         NUM {$$=$1;}|
         MSG {$$=$1;}|
         VAR{$$=$1;};

    VAR: ID{
         $1->Gentry=Lookup($1->varname);
         if($1->Gentry==NULL)
         {
            printf("Variable '%s' not declared!", $1->varname);
            exit(1);
         }
         $1->type=$1->Gentry->type;
            $$=$1;}|
        ID '[' expr ']'
        {
            if($3->type!=tINT)
            {
                printf("array index is not int");
                exit(1);
            }
            $1->Gentry=Lookup($1->varname);
            if($1->Gentry==NULL)
            {
                printf("array not %s declared",$1->varname);
                exit(1);
            }
            $1->type=$1->Gentry->type;
            $$=createTree(-1,$1->type,NULL,tARRAY,$1,$3,NULL);
        }
        |
        ID '[' expr ']''['expr ']'
        {
            if($3->type!=tINT || $6->type!=tINT)
            {
                printf("array index is not int");
                exit(1);
            }
            $1->Gentry=Lookup($1->varname);
            if($1->Gentry==NULL)
            {
                printf("array not %s declared",$1->varname);
                exit(1);
            }
            $1->type=$1->Gentry->type;
            $$=createTree(-1,$1->type,NULL,tARRAY2D,$1,$3,$6);
        };
        
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