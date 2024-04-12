%{
#include "y.tab.h"
#include "tree.h"
char *vari;
#include<stdio.h>
#include<stdlib.h>
int lineno=1;
%}

idi [a-zA-Z_][0-9a-zA-Z_]*
stri \"(\\.|[^\\\"])*\"

%%

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
"AND" {return AND;}
"OR" {return OR;}
"decl" {return DECL;}
"enddecl" {return ENDDECL;}
"int" {return INT;}
"str" {return STR;}
"main" {return MAIN;}
"begin" {return START;}
"end" {return END;}
"return" {return Return;}


"," {return COMMA;}

"<" {return LT;}
">" {return GT;}
"<=" {return LE;}
">=" {return GE;}
"==" {return EQ;}
"!=" {return NE;}

[0-9]+ {
    yylval.node=createTree(atoi(yytext),tINT,NULL,tNUM,NULL,NULL,NULL);
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
    char *x=strdup(yytext);
    yylval.node=createTree(-1,tSTR,x,tMSG,NULL,NULL,NULL);
    return MSG;
}

"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}  
"/" {return DIV;}
"%" {return MOD;}
[ \t] {}
[' '] {}
[()] {return *yytext;}
[\n] {lineno++;}
";" {return EOL;}
"{" {return *yytext;}
"}" {return *yytext;}


\[ {return *yytext;}
\] {return *yytext;}

%%

int yywrap(void)
{
    return 1;
}


