%{
#include "y.tab.h"
#include "tree.h"
#include<stdio.h>
#include<stdlib.h>
%}

%%

"begin" {return begin;}
"end" {return END;}
"write" {return WRITE;} 
"read" {return READ;}
[0-9]+ {
    yylval.node=createTree(atoi(yytext),tINT,NULL,tNUM,NULL,NULL);
    return NUM;
}
"="  {return ASSIGN;}
[a-z]+ {
    yylval.node=createTree(-1,tINT,yytext,tVAR,NULL,NULL);
    return ID;
}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}
[ \t] {}
[' '] {}
[()] {return *yytext;}
[\n] {}
";" {return EOL;}

%%

int yywrap(void)
{
    return 1;
}