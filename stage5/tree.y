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
    struct paramstruct*paramlist=NULL;
    int flabel=0;
    struct typi* typ_head=NULL;
    struct paramstruct*paramtemp=NULL;
    int lnum=0;
    int argnum=-2;
    int _local_pt=0;
    int _prefix_pt=0;
    int _global_pt=0;
    int _codegen_pt=1;
    extern int lineno;
    int _in_func=0;
    %}

    %union{
        struct tnode *node;
    }

    %token<node> NUM PLUS MINUS MUL DIV  WRITE READ EOL ASSIGN ID IF then Else Return AND OR
    %token<node>  LE GE LT GT NE EQ MSG MOD 
    %token<node> DECL ENDDECL INT STR COMMA MAIN START END ENDIF endwhile WHILE DO BREAK CONTINUE

    %left EQ LE GE LT GT NE
    %left PLUS MINUS
    %left MUL DIV
    %left MOD AND OR
    %right ASSIGN

    
    %type <node> expr Program Stmt Slist InputStmt OutputStmt AsgStmt Ifstmt Whilestmt BreakStmt ContStmt VAR 

    %type <node> FdefBlock Fdef MainBlock ArgList Body GdeclBlock GdeclList GidList Gid Type FType

    %type <node> ParamList LdeclBlock  LDecList LDecl ReturnStmt


    
   
    
    %%
    //Main building blocks-------------------------

    Program:GdeclBlock FdefBlock MainBlock 
                        {
                            printf("Done!!\n");
                            if(_global_pt)printSTable();
                            /* if(_codegen_pt) endcode(targetFile); */
                        };
            | GdeclBlock MainBlock 
                        {
                            printf("Done!!\n");
                             if(_global_pt)printSTable();
                            /* if(_codegen_pt) endcode(targetFile); */
                        };
            |MainBlock   
                        {  
                            printf("done!!\n");
                            /* if(_codegen_pt) endcode(targetFile); */
                        };

    //Global declaration----------------------------

    GdeclBlock: DECL GdeclList ENDDECL
                        {
                            initial(targetFile);
                            reset_local();
                            argnum=-2;
                        };
                | DECL ENDDECL
                        {
                            initial(targetFile);
                            reset_local();
                            argnum=-2;
                        }
                        ;

    GdeclList:GdeclList Gdecl{};
            | Gdecl{}
            ;

    Gdecl:Type GidList EOL{};

    GidList:GidList COMMA Gid  {};
            | Gid{}
            ;

    Gid: ID
                        {
                            if(Lookup($1->varname)==NULL)
                            Install($1->varname,type,1,NULL,-1);
                            else{
                                printf("redclare error of %s\n",$1->varname);
                                exit(1);
                            }
                        }
        | ID '['NUM']'
                        {
                            if(Lookup($1->varname)==NULL)
                            Install($1->varname,type,$3->val,NULL,-1);
                            else{
                                printf("redclare error of the array %s\n",$1->varname);
                                exit(1);
                            }
                        }
        |ID '('ParamList')'
                        {
                            if(Lookup($1->varname)==NULL)
                            Install($1->varname,type,-1,paramlist,flabel);
                            else{
                                printf("The function redeclaration error %s\n",$1->varname);
                                paramlist=NULL;
                                exit(1);
                            }
                            flabel=flabel+1;
                            paramtemp=paramlist;
                            paramlist=NULL;
                            /* struct paramstruct *curr=paramlist;
                            while(curr!=NULL)
                            {
                                struct paramstruct *temp=curr;
                                curr=curr->next;
                                free(temp->name);
                                free(temp);
                            } */
                        }
                        ;

    // _function_building blocks----------------------------

    FdefBlock:FdefBlock Fdef
                        {
                            $$=createTree(-1,-1,NULL,tFunconnect,$1,$2,NULL);
                        }
            |Fdef
                        {
                            $$=createTree(-1,-1,NULL,tFunconnect,$1,NULL,NULL);
                        }
                        ;

    Fdef: FType ID'('ParamList ')' '{' LdeclBlock Body'}'
                        {
                            /* type checking in function */
                            if(Lookup($2->varname)==NULL)
                            {
                                printf("function '%s' is not defined \n",$2->varname);
                                exit(1);
                            }
                            if(Lookup($2->varname)->type!=type)
                            {
                                printf("Type mismatch error in function '%s'\n ",$2->varname);
                                exit(1);
                            }
                            int c=checkparam(paramlist,$2->varname);
                            if(c==-1)
                            {
                                paramlist=NULL;
                                printf("error has occured \n");
                                exit(1);
                            }

                                                    //code generation part
                                                    if(_codegen_pt)
                                                    {                                                   
                                                    struct Gsymbol *temp=Lookup($2->varname);
                                                    fprintf(targetFile,"F%d:\n",temp->flabel);
                                                    fprintf(targetFile,"PUSH BP\n");
                                                    fprintf(targetFile,"MOV BP,SP\n");
                                                    struct Lsymbol*curr=getLocal();
                                                    while(curr!=NULL)
                                                    {
                                                        if(curr->binding>0)
                                                        {
                                                            fprintf(targetFile,"PUSH R0\n");
                                                        }
                                                        curr=curr->next;
                                                    } 
                                                    /* reset_all(); */
                                                    codeGen(targetFile,$8);
                                                    }
                            //for testing
                            if(_prefix_pt)
                            {
                            printf("The ast of %s -----------\n",$2->varname);
                            prefix($8);
                            printf("\n\n");
                            }
                            if(_local_pt)
                            {
                            printf("function=%s\n",$2->varname);
                            print_local();
                            printf("\n\n");
                            }

                                                    //reseting of all local and argument lists
                                                    paramlist=NULL;
                                                    reset_local();
                                                    argnum=-2;
                                                    lnum=0;
                        }
                        ;

    ParamList : ParamList COMMA Param {};| Param{};
                |  {} ;

    Param : Type ID
                        {
                            
                                struct paramstruct *temp=(struct paramstruct*)malloc(sizeof(struct paramstruct));
                                temp->name=strdup($2->varname);
                                temp->type=type;
                                temp->next=paramlist;
                                paramlist=temp;
                                if(_in_func)
                                {
                                    if(LLookup(temp->name)==NULL)
                                    {
                                        argnum--;
                                        LInstall(temp->name,temp->type,argnum);
                                    }
                                    else{
                                        argnum=-2;
                                        printf("redeclaration error in  %s\n",temp->name);
                                        printf("line no=%d\n",lineno);
                                        exit(1);
                                    }
                                }
                        }
                        ;

    MainBlock:INT MAIN '('')' '{' LdeclBlock Body '}'
                        {
                            //codegeneration part
                            if(_codegen_pt)
                            {
                            fprintf(targetFile,"MAIN:\n");
                            fprintf(targetFile,"PUSH BP\n");
                            fprintf(targetFile,"MOV BP,SP\n");
                            struct Lsymbol*curr=getLocal();
                            while(curr!=NULL)
                            {
                                if(curr->binding>0)
                                {
                                    fprintf(targetFile,"PUSH R0\n");
                                }
                                curr=curr->next;
                            } 
                            /* reset_all(); */
                            codeGen(targetFile,$7);
                            }

                                            //for testing
                                            if(_prefix_pt)
                                            {
                                            printf("The ast of Main -----------\n");
                                            prefix($7);
                                            }
                                            if(_local_pt)
                                            {
                                            printf("function= MAIN\n");
                                            print_local();
                                            printf("\n\n");
                                            }

                            //1.free memory of Gtable and Local table and AST
                            //reseting of all local and argument lists
                            paramlist=NULL;
                            reset_local();
                            argnum=-2;
                            lnum=0;
                        }
                        ;

    Type : INT 
                        {
                        type=tINT;
                        };
        | STR           { type=tSTR;};

    FType : INT 
                        {
                        type=tINT;
                        _in_func=1;
                        };
        | STR           { type=tSTR;
                        _in_func=1;
                        };


    LdeclBlock : DECL LDecList ENDDECL{} 
                | DECL ENDDECL{};

    LDecList :LDecList LDecl{}; 
                | LDecl{};

    LDecl : Type IdList EOL {};

    IdList :IdList COMMA ID 
                        {
                            if(LLookup($3->varname)==NULL){
                                lnum++;
                                LInstall($3->varname,type,lnum);
                                }
                            else {
                                lnum=0;
                                printf("Redeclaraton error in %s\n",$3->varname);exit(1);
                                }
                        }
                | ID        
                        {
                            if(LLookup($1->varname)==NULL)
                            {
                                lnum++;
                                LInstall($1->varname,type,lnum);
                            }
                            else {
                                lnum=0;
                                printf("Redeclaraton error in %s\n",$1->varname);
                                exit(1);
                                }
                        };
    Body:START Slist END 
                        {
                            $$=$2;
                        };
    |START END{};

    Slist:Slist Stmt 
                        {
                            $$=createTree(-1,-1,NULL,tCONNECT,$1,$2,NULL);
                        };
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
          ContStmt {$$=$1;}|
          ReturnStmt{$$=$1;};
    
    ReturnStmt:Return expr EOL {$$=createTree(-1,-1,NULL,tReturn,$2,NULL,NULL);}
                | Return EOL {$$=createTree(-1,-1,NULL,tReturn,NULL,NULL,NULL);};
          
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
         expr AND expr {$$=createTree(-1,-1,NULL,tAND,$1,$3,NULL);}|
         expr OR expr {$$=createTree(-1,-1,NULL,tOR,$1,$3,NULL);}|
         NUM {$$=$1;}|
         MSG {$$=$1;}|
         VAR{$$=$1;}|
         '(' expr ')'	{$$ = $2;}|
         ID '(' ')'
                        {
                            $1->Gentry=Lookup($1->varname);
                            if($1->Gentry==NULL)
                            {
                                printf("Function '%s' not declared!",$1->varname);
                                exit(1);
                            }
                            struct typi*temp=typ_head;
                            if(temp!=NULL)
                            {
                                printf("error in number of argu. in function %s\n",$1->varname);
                                exit(1);
                            }

                            $1->type=$1->Gentry->type;
                            $$=createTree(-1,type,$1->varname,tFunction,NULL,NULL,NULL);
                        };
         |
         ID '(' ArgList ')'
                        {
                            $1->Gentry=Lookup($1->varname);
                            if($1->Gentry==NULL)
                            {
                                printf("Function '%s' not declared!",$1->varname);
                                exit(1);
                            }

                                                        //type check in argument list of a funtion and the arguments passed to a function also
                                                        struct typi*temp=typ_head;
                                                        struct Gsymbol*temp1=Lookup($1->varname);
                                                        struct paramstruct *curr=temp1->paramlist;
                                                        int x=0,y=0;
                                                        while(temp!=NULL){temp=temp->next;x++;}
                                                        while(curr!=NULL){curr=curr->next;y++;}
                                                        if(x!=y)
                                                        {printf("number of arguments not correct in function '%s'\n",$1->varname);
                                                        exit(1);                                                                            
                                                        }
                                                        temp=typ_head;curr=temp1->paramlist;
                                                        while(curr!=NULL)
                                                        {   
                                                            if(temp==NULL)
                                                            {
                                                                printf("error,full arguments are not passed in fucntion %s\n",$1->varname);
                                                                exit(1);
                                                            }
                                                            if(curr->type!=temp->type) 
                                                            {
                                                            printf("argument type error in '%s'\n",$1->varname);
                                                            exit(1);
                                                            }
                                                            curr=curr->next;
                                                            temp=temp->next;
                                                        }
                                                        
                            typ_head=NULL;
                            $1->type=$1->Gentry->type;
                            $$=createTree(-1,$1->type,$1->varname,tFunction,$3,NULL,NULL);
                        };
    ArgList:ArgList COMMA expr 
                        {
                            struct typi*temp=(struct typi*)malloc(sizeof(struct typi));
                            temp->type=$3->type;
                            temp->next=typ_head;
                            typ_head=temp;
                            $3->third=$1;
                            $$=$3;
                        }
        | expr
                        {
                            struct typi*temp=(struct typi*)malloc(sizeof(struct typi));
                            temp->type=$1->type;
                            temp->next=typ_head;
                            typ_head=temp;
                            $$=$1;
                        };
    VAR: ID
                        {
                        if(LLookup($1->varname)==NULL && Lookup($1->varname)==NULL)
                        {
                            printf("Variable '%s' not declared!", $1->varname);
                            exit(1);
                        }
                        if(LLookup($1->varname)!=NULL)
                        {
                            $1->Gentry=NULL;
                            struct Lsymbol*temp=LLookup($1->varname);
                            $1->type=temp->type;
                        }
                        else {
                        $1->Gentry=Lookup($1->varname);
                        $1->type=$1->Gentry->type;
                        }
                            $$=$1;
                        };
        |ID '[' expr ']'
                        {
                            if($3->type!=tINT)
                            {
                                printf("array index is not int");
                                exit(1);
                            }
                            if(LLookup($1->varname)==NULL && Lookup($1->varname)==NULL)
                            {
                                printf("array not %s declared",$1->varname);
                                exit(1);
                            }
                            if(LLookup($1->varname)!=NULL)
                            {
                               $1->Gentry=NULL;
                                $1->type=type;
                            }
                            else {
                            $1->Gentry=Lookup($1->varname);
                            $1->type=$1->Gentry->type;
                            }
                            $$=createTree(-1,$1->type,NULL,tARRAY,$1,$3,NULL);
                        };
    %%

/* by printing lineno  we can get in which line the error has occured */

int yyerror(char const *s)
{
    printf("yyerror %s",s);
    printf("line number=%d\n",lineno);
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
  if(targetFile!=NULL)
  fclose(targetFile);
  return 0;
}
