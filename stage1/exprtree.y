%{
 #include <stdlib.h>
 #include <stdio.h>
 #include "exprtree.h"
 #include "exprtree.c"
 int yylex(void);
 FILE* targetFile;
 extern FILE* yyin;
%}

%union{
 struct tnode *no;

}
%type <no> expr NUM program END
%token NUM PLUS MINUS MUL DIV END space
%left PLUS MINUS
%left MUL DIV

%%

program : expr END {
    $$ = $2;
    fprintf(targetFile,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\nMOV SP, 4121\n",0,2056,0,0,0,0,1,0);
    int x=codeGen(targetFile,$1);
    printWrite(targetFile);
    printExit(targetFile);
    exit(0);
   }
  ;

expr : PLUS space expr space expr  {$$ = makeOperatorNode('+',$3,$5);}
  | MINUS space expr space expr   {$$ = makeOperatorNode('-',$3,$5);}
  | MUL space expr space expr {$$ = makeOperatorNode('*',$3,$5);}
  | DIV space expr space expr {$$ = makeOperatorNode('/',$3,$5);}
  | '(' expr ')'  {$$ = $2;}
  | NUM   {$$ = $1;}
  ;

%%

yyerror(char const *s)
{
    printf("yyerror %s",s);
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
