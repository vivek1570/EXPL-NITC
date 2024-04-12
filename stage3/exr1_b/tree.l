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
"if" {return IF;}
"then" {return then;}
"else" {return Else;}
"endif" {return ENDIF;}
"while" {return WHILE;}
"endwhile" {return endwhile;}
"do" {return DO;}
"<" {return LT;}
">" {return GT;}
"<=" {return LE;}
">=" {return GE;}
"==" {return EQ;}
"!=" {return NE;}

[0-9]+ {
    return NUM;
}
"="  {return ASSIGN;}
[a-z]+ {
    yylval.node=createTree(-1,tINT,yytext,tVAR,NULL,NULL,NULL);
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