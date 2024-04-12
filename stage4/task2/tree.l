%{
#include "y.tab.h"
#include "tree.h"
char *vari;
#include<stdio.h>
#include<stdlib.h>
%}

idi [a-zA-Z_][0-9a-zA-Z_]*
stri \"(\\.|[^\\\"])*\"

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
"continue" {return CONTINUE;}
"break" {return BREAK;}
"do" {return DO;}

"decl" {return DECL;}
"enddecl" {return ENDDECL;}
"int" {return INT;}
"str" {return STR;}


"," {return COMMA;}

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
{idi} {
    vari=(char*)malloc(sizeof(yytext));
    strcpy(vari,yytext);
    yylval.node=createTree(-1,-1,vari,tVAR,NULL,NULL,NULL);
    return ID;
}

{stri} {
    return MSG;
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


