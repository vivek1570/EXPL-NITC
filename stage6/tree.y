%{
    #include<stdio.h>
    #include<stdlib.h>
    #include "type.h"
    #include "global.h"
    #include "tree.h"
    #include "tree.c"
    #include "symbol.h"
    #include "symbol.c"
    #include "type.c"
    #include<string.h>
    FILE *targetFile;
    extern FILE *yyin;
    int yylex(void);
    extern char* yytext;
    void yyerror(char const *s);
    %}
    
    %union{
        struct tnode *node;
    }

    %token<node> NUM PLUS MINUS MUL DIV  WRITE READ EOL ASSIGN ID IF then Else Return AND OR
    %token<node>  LE GE LT GT NE EQ MSG MOD 
    %token<node> DECL ENDDECL INT STR COMMA MAIN START END ENDIF endwhile WHILE DO BREAK CONTINUE 
    %token<node> TYPE ENDTYPE ALLOC FREE INITIALIZE Nullptr

    %left EQ LE GE LT GT NE
    %left PLUS MINUS
    %left MUL DIV
    %left MOD AND OR
    %right ASSIGN

    
    %type <node> expr Program Stmt Slist InputStmt OutputStmt AsgStmt Ifstmt Whilestmt BreakStmt ContStmt VAR 

    %type <node> FdefBlock Fdef MainBlock ArgList Body GdeclBlock GdeclList GidList Gid 

    %type <node> ParamList LdeclBlock  LDecList LDecl ReturnStmt AllocStmt FreeStmt InitialStmt

    %type <node> TypeDefBlock TypeDefList TypeDef TypeName FieldDeclList FieldDecl PType FTypeName

    %type <node> FIELD 


    
   
    
    %%
    //Main building blocks-------------------------

    Program:TypeDefBlock GdeclBlock FdefBlock MainBlock 
                        {
                            printf("Done!!\n");
                            if(_global_pt)printSTable();
                        }
            | TypeDefBlock GdeclBlock MainBlock 
                        {
                            printf("Done!!\n");
                             if(_global_pt)printSTable();
                        }
            |TypeDefBlock MainBlock   
                        {  
                            printf("Done!!\n");
                        };
    

    //User defined type declarations-----------------------

    TypeDefBlock  : TYPE TypeDefList ENDTYPE
                        {
                            if(_type_pt)printTypeTable();
                        }
              |         {}
              ;

    TypeDefList   : TypeDefList TypeDef{}
                | TypeDef{}
                ;

    TypeDef       : ID '{' FieldDeclList '}'   
                        { 
                            if(TLookup($1->varname)!=NULL)
                            {
                                printf("type %s aldready declared\n",$1->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            Tptr = TInstall($1->varname,1,fieldHead);
                            struct Fieldlist*temp=fieldHead;
                            while(temp!=NULL)
                            {
                                if(temp->type==NULL)
                                {
                                if(strcmp(temp->curr_type,$1->varname)==0) temp->type=Tptr;
                                else {printf("type '%s' is not defined function =%s\n",temp->curr_type,$1->varname);
                                printf("error at  line:%d\n",lineno-2);
                                exit(1);
                                }
                                }
                                temp=temp->next;
                            }
                            fieldHead=NULL;
                            field_index=0;
                        }
                ;
/* 
here we have there is problem ie, if the type is
marklist{
    int a;
}
linked{
    int var1;
    linked var2;
    typo var3;
}

here both var3 and var2 get types have in fields have null in filedsblck but 
those have null in field block we are uppdating later so it need to consider

*/

    FieldDeclList : FieldDeclList FieldDecl
                        {
                            
                        }
                | FieldDecl 
                        {
                        }
                ;

    FieldDecl    : TypeName ID EOL
                        {
                            struct Fieldlist*temp=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
                            struct Typetable*curr=NULL;
                            if(FLookup(fieldHead,$2->varname)!=NULL)
                            {
                                printf("field '%s' redeclare error in type '%s'\n",$2->varname,typename);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            temp->name=strdup($2->varname);
                            temp->fieldIndex=field_index;
                            field_index++;
                            curr=TLookup(typename);
                            temp->type=curr;
                            temp->curr_type=strdup(typename);
                            temp->next=fieldHead;
                            fieldHead=temp;
                        }

    TypeName     : INT
                        {
                        typename="int";
                        }
                | STR 
                        {
                        typename="str";
                        }
                | ID 
                        {
                        $$=$1;typename=$1->varname;
                        }      
                        //TypeName for user-defined types
                ;


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

    Gdecl:TypeName GidList EOL{};

    GidList:GidList COMMA Gid  {};
            | Gid{}
            ;

    Gid: ID
                        {
                            if(Lookup($1->varname)==NULL)
                            {
                                struct Typetable *type_ptr=TLookup(typename);
                                struct Gsymbol * temp= Install($1->varname,type_ptr,1,NULL,-1);
                            }
                            else{
                                printf("redclare error of %s\n",$1->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                        }
        | ID '['NUM']'
                        {
                            if(Lookup($1->varname)==NULL)
                            {
                                struct Typetable *type_ptr=TLookup(typename);
                                struct paramstruct *curr=(struct paramstruct*)malloc(sizeof(struct paramstruct));
                                struct Gsymbol *temp=Install($1->varname,type_ptr,$3->val,curr,-1);
                            }
                            else{
                                printf("redclare error of the array %s\n",$1->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                        }
        |ID '('ParamList')'
                        {
                            if(Lookup($1->varname)==NULL)
                            {
                                struct Typetable *type_ptr=TLookup(typename);
                                struct Gsymbol *temp=Install($1->varname,type_ptr,-1,paramlist,flabel);
                            }
                            else{
                                printf("The function redeclaration error %s\n",$1->varname);
                                paramlist=NULL;
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            flabel=flabel+1;
                            paramtemp=paramlist;
                            paramlist=NULL;
                        }
                        ;

    // _function_building blocks----------------------------

    FdefBlock:FdefBlock Fdef
                        {
                            $$=createTree(-1,NULL,NULL,tFunconnect,$1,$2,NULL);
                        }
            |Fdef
                        {
                            $$=createTree(-1,NULL,NULL,tFunconnect,$1,NULL,NULL);
                        }
                        ;

    Fdef: FTypeName ID'('ParamList ')' '{' LdeclBlock Body'}'
                        {
                            /* type checking in function */
                            if(Lookup($2->varname)==NULL)
                            {
                                printf("function '%s' is not defined \n",$2->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            if(Lookup($2->varname)->type!=TLookup(ftypename))
                            {
                                printf("Type mismatch error in function '%s'\n ",$2->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            int c=checkparam(paramlist,$2->varname);
                            if(c==-1)
                            {
                                paramlist=NULL;
                                printf("error has occured \n");
                                printf("error at  line:%d\n",lineno);
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

    Param : PType ID
                        {
                            
                                struct paramstruct *temp=(struct paramstruct*)malloc(sizeof(struct paramstruct));
                                temp->name=strdup($2->varname);
                                struct Typetable *type_ptr=TLookup(ptypename);
                                temp->type=type_ptr;
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
                                        printf("error at  line:%d\n",lineno);
                                        exit(1);
                                    }
                                }
                        }
                        ;
    PType    : INT
                        {
                        ptypename="int";
                        }
                | STR 
                        {
                        ptypename="str";
                        }
                | ID 
                        {
                        $$=$1;ptypename=$1->varname;
                        }      
                        //TypeName for user-defined types
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
                        }|{}
                        ;

    FTypeName : INT
                        {
                        ftypename="int";
                        _in_func=1;
                        }
                | STR 
                        {
                        ftypename="str";
                        _in_func=1;
                        }
                | ID 
                        {
                        $$=$1;ftypename=$1->varname;
                        _in_func=1;
                        }      
                        //TypeName for user-defined types
                ;


    LdeclBlock : DECL LDecList ENDDECL{} 
                | DECL ENDDECL{};

    LDecList :LDecList LDecl{}; 
                | LDecl{};

    LDecl : TypeName IdList EOL {};

    IdList :IdList COMMA ID 
                        {
                            if(TLookup(typename)==NULL)
                            {
                                printf("type %s is not found\n",typename);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            if(LLookup($3->varname)==NULL){
                                lnum++;
                                struct Typetable *type=TLookup(typename);
                                LInstall($3->varname,type,lnum);
                                }
                            else {
                                lnum=0;
                                printf("Redeclaraton error in %s\n",$3->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                                }
                        }
                | ID        
                        {
                            if(TLookup(typename)==NULL)
                            {
                                printf("type %s is not found\n",typename);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            if(LLookup($1->varname)==NULL)
                            {
                                lnum++;
                                struct Typetable *type=TLookup(typename);
                                LInstall($1->varname,type,lnum);
                            }
                            else {
                                lnum=0;
                                printf("Redeclaraton error in %s\n",$1->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                                }
                        };
    // return statement can have      Body:START Slist Stmt END ;             
    Body:START Slist END 
                        {
                            $$=$2;
                        };
    |START END{};

    Slist:Slist Stmt 
                        {
                            $$=createTree(-1,NULL,NULL,tCONNECT,$1,$2,NULL);
                        };
    | Stmt
                        {
                            $$=$1;
                        };

    Stmt:  InputStmt {$$=$1;}
          |OutputStmt{$$=$1;}
          |AsgStmt{ $$=$1;}
          |Ifstmt{$$=$1;}
          |Whilestmt{ $$=$1;}
          |BreakStmt { $$=$1;}
          |ContStmt {$$=$1;}
          |ReturnStmt{$$=$1;}
          |AllocStmt{$$=$1;}
          |FreeStmt{$$=$1;}
          |InitialStmt{$$=$1;}
          ;
          /* |IDalloc{$$=$1;}
          |Fieldalloc{$$=$1;}
          |IDfree{$$=$1;}
          |Fieldfree{$$=$1;}

          | ID ASGN ALLOC'(' ')'EOL
          | FIELD ASGN ALLOC'(' ')' EOL
          | FREE '(' ID ')' EOL
          | FREE '(' FIELD ')' EOL */
    
    ReturnStmt:Return expr EOL {$$=createTree(-1,NULL,NULL,tReturn,$2,NULL,NULL);}
                | Return EOL {$$=createTree(-1,NULL,NULL,tReturn,NULL,NULL,NULL);};
          
    BreakStmt: BREAK EOL {$$=createTree(-1,NULL,NULL,tBREAK,NULL,NULL,NULL);};

    ContStmt: CONTINUE EOL {$$=createTree(-1,NULL,NULL,tCONTINUE,NULL,NULL,NULL);};

    InputStmt:  READ '(' expr ')' EOL {$$=createTree(-1,NULL,NULL,tREAD,$3,NULL,NULL);};

    OutputStmt: WRITE '(' expr ')' EOL {$$=createTree(-1,NULL,NULL,tWRITE,$3,NULL,NULL);};
    
    AsgStmt: expr ASSIGN expr EOL { $$=createTree(-1,NULL,NULL,tASSIGN,$1,$3,NULL);}|
            expr ASSIGN Nullptr EOL {$$=createTree(-1,NULL,NULL,tNullAs,$1,NULL,NULL);};

    Ifstmt: IF '(' expr ')' then Slist Else Slist ENDIF EOL {$$=createTree(-1,NULL,NULL,tIF,$3,$6,$8);}
        | IF '(' expr ')' then Slist ENDIF EOL {$$=createTree(-1,NULL,NULL,tIF,$3,$6,NULL);};

    Whilestmt: WHILE '(' expr ')' DO Slist endwhile EOL {$$=createTree(-1,NULL,NULL,tWHILE,$3,$6,NULL);};

    AllocStmt:expr ASSIGN ALLOC '(' ')' EOL{$$=createTree(-1,NULL,NULL,tALLOC,$1,NULL,NULL);};

    FreeStmt:FREE '('expr')' EOL{$$=createTree(-1,NULL,NULL,tFREE,$3,NULL,NULL);}; 

    InitialStmt:expr ASSIGN INITIALIZE '('')'EOL {$$=createTree(-1,TLookup("int"),NULL,tInitial,$1,NULL,NULL);
                //in temp.lib it is limited to 1020
                };


    expr:expr PLUS expr {$$=createTree(-1,NULL,"+",tADD,$1,$3,NULL);}|
         expr MINUS expr {$$=createTree(-1,NULL,"-",tSUB,$1,$3,NULL);}|
         expr MUL expr {$$=createTree(-1,NULL,"*",tMUL,$1,$3,NULL);}|
         expr DIV expr{$$=createTree(-1,NULL,"/",tDIV,$1,$3,NULL);}|
         expr LE expr {$$=createTree(-1,NULL,NULL,tLE,$1,$3,NULL);}|
         expr GE expr {$$=createTree(-1,NULL,NULL,tGE,$1,$3,NULL);}|
         expr LT expr {$$=createTree(-1,NULL,NULL,tLT,$1,$3,NULL);}|
         expr GT expr {$$=createTree(-1,NULL,NULL,tGT,$1,$3,NULL);}|
         expr NE expr {$$=createTree(-1,NULL,NULL,tNE,$1,$3,NULL);}|
         expr EQ expr {$$=createTree(-1,NULL,NULL,tEQ,$1,$3,NULL);}|
         expr MOD expr {$$=createTree(-1,NULL,NULL,tMOD,$1,$3,NULL);}|
         expr AND expr {$$=createTree(-1,NULL,NULL,tAND,$1,$3,NULL);}|
         expr OR expr {$$=createTree(-1,NULL,NULL,tOR,$1,$3,NULL);}|
         expr NE Nullptr {$$=createTree(-1,NULL,NULL,tNullNe,$1,NULL,NULL);}|
         expr EQ Nullptr {$$=createTree(-1,NULL,NULL,tNullEq,$1,NULL,NULL);}|
         NUM { $1->type=TLookup("int");$$=$1;}|
         MSG {$1->type=TLookup("str");$$=$1;}|
         VAR{$$=$1;}|
         '(' expr ')'	{$$ = $2;}|
         ID '(' ')'
                        {
                            $1->Gentry=Lookup($1->varname);
                            if($1->Gentry==NULL)
                            {
                                printf("Function '%s' not declared!",$1->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            struct typi*temp=typ_head;
                            if(temp!=NULL)
                            {
                                printf("error in number of argu. in function %s\n",$1->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }

                            $1->type=$1->Gentry->type;
                            $$=createTree(-1,$1->type,$1->varname,tFunction,NULL,NULL,NULL);
                        }
         |
         ID '(' ArgList ')'
                        {
                            $1->Gentry=Lookup($1->varname);
                            if($1->Gentry==NULL)
                            {
                                printf("Function '%s' not declared!",$1->varname);
                                printf("error at  line:%d\n",lineno);
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
                                                        printf("error at  line:%d\n",lineno);
                                                        exit(1);                                                                            
                                                        }
                                                        temp=typ_head;curr=temp1->paramlist;
                                                        while(curr!=NULL)
                                                        {   
                                                            if(temp==NULL)
                                                            {
                                                                printf("error,full arguments are not passed in fucntion %s\n",$1->varname);
                                                                printf("error at  line:%d\n",lineno);
                                                                exit(1);
                                                            }
                                                            if(curr->type!=temp->type) 
                                                            {
                                                            printf("argument type error in '%s'\n",$1->varname);
                                                            printf("error at  line:%d\n",lineno);
                                                            exit(1);
                                                            }
                                                            curr=curr->next;
                                                            temp=temp->next;
                                                        }
                                                        
                            typ_head=NULL;
                            $1->type=$1->Gentry->type;
                            $$=createTree(-1,$1->type,$1->varname,tFunction,$3,NULL,NULL);
                        }
            |FIELD{$$=$1;}
            ;

    FIELD : ID '.' ID {
                    //both are in symbol.c
                    typeAssgn($1);
                    fieldTypeAssgn($3,$1->type->fields);
                    $$=createTree(-1,$3->type,NULL,tField,$1,$3,NULL);}
          | FIELD '.' ID  {
            $$=insertField($1,$3);  //in type.c file
            }
          ;

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
                        }
                        ;

     //!!!! modify with type assgn function                   
    VAR: ID
                        {
                        if(LLookup($1->varname)==NULL && Lookup($1->varname)==NULL)
                        {
                            printf("Variable '%s' not declared!", $1->varname);
                            printf("error at  line:%d\n",lineno);
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
                        if($1->Gentry->paramlist!=NULL)
                        {
                            printf("assg to arr without index\n");
                            printf("error at  line:%d\n",lineno);
                            exit(1);
                        }
                        $1->type=$1->Gentry->type;
                        }
                            $$=$1;
                        }
        |ID '[' expr ']'
                        {
                            if($3->type!=TLookup("int"))
                            {
                                printf("array index is not int");
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            if(LLookup($1->varname)==NULL && Lookup($1->varname)==NULL)
                            {
                                printf("array not %s declared",$1->varname);
                                printf("error at  line:%d\n",lineno);
                                exit(1);
                            }
                            if(LLookup($1->varname)!=NULL)
                            {
                               $1->Gentry=NULL;
                                $1->type=TLookup(typename);
                            }
                            else {
                            $1->Gentry=Lookup($1->varname);
                            $1->type=$1->Gentry->type;
                            }
                            $$=createTree(-1,$1->type,NULL,tARRAY,$1,$3,NULL);
                        }
                        ;
    %%

/* by printing lineno  we can get in which line the error has occured */

void yyerror(char const *s)
{
    printf("yyerror %s",s);
    printf("line number=%d\n",lineno);
}



int main() {
  targetFile=fopen("targetFile.xsm","w");
  if(targetFile==NULL)
  {
    printf("file error\n");
  }
  yyin=fopen("input_l","r");
  TypeTableCreate();
  yyparse();
  if(targetFile!=NULL)
  fclose(targetFile);
  return 0;
}
