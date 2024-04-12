%option noyywrap
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "label.c"
int line = 1;
int parse=0;
FILE*target;
int flagline=0;
char*tempstr;
%}

identifier [a-zA-Z0-9]+

%%

\".*\"                          {
                                    if(parse)
                                        fprintf(target, "%s", yytext);
                                }
{identifier}:                   {
                                    if(parse) {
                                        flagline = 1;
                                    } else {
                                        tempstr = (char*)malloc(yyleng - 1);
                                        yyless(yyleng-1);
                                        strcpy(tempstr, yytext);
                                        createlnode(tempstr, line);line--;
                                    }
                                }
"CALL 0"                        {
                                    if(parse)
                                        fprintf(target, "%s", yytext);
                                }
"CALL "{identifier}             {
                                    if(parse)
                                        fprintf(target, "CALL %d", lltake(yytext + 5));

                                }
"JMP "{identifier}              {
                                    if(parse)
                                        fprintf(target, "JMP %d", lltake(yytext + 4));
                                }
"JNZ R"[0-9]+[,]{identifier}    {
                                    if(parse) {
                                        if(yytext[6] == ',') 
                                            fprintf(
                                                target,
                                                "JNZ  R%c, %d",
                                                yytext[5],
                                                lltake(yytext + 7)
                                            );
                                        else
                                            fprintf(
                                                target,
                                                "JNZ  R%c%c, %d",
                                                yytext[5],
                                                yytext[6],
                                                lltake(yytext + 8)
                                            );
                                    }
                                }
"JZ R"[0-9]+[,]{identifier}     {
                                    if(parse) {
                                        if(yytext[5] == ',') 
                                            fprintf(
                                                target,
                                                "JZ  R%c, %d",
                                                yytext[4],
                                                lltake(yytext + 6)
                                            );
                                        else
                                            fprintf(
                                                target,
                                                "JZ  R%c%c, %d",
                                                yytext[4],
                                                yytext[5],
                                                lltake(yytext + 7)
                                            );
                                    }
                                }
\n                              {
                                    if(parse) {
                                        if(flagline)
                                            flagline = 0;
                                        else
                                            fprintf(target, "\n");
                                    } else {
                                        line++;
                                    }
                                }
.                               {
                                    if(parse)
                                        fprintf(target, "%s", yytext);
                                }

%%



int main() {
    yyin = fopen("targetFile.xsm", "r");
    if (!yyin) {
        printf("File opne error\n");
        return 0;
    }

    yylex();

    parse=1;

    if(parse)
    {
    rewind(yyin);
    target=fopen("output.xsm","w");
    yylex();
    }

    fclose(yyin);
    return 0;
}
