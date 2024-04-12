%{
    #include<stdio.h>
    #include<stdlib.h>
    FILE *targetFile;
    extern FILE *yyin;
    int line;
    int yylex(void);
    extern char* yytext;
%}


%token Label MAIN OTHER


%%

Program:A|B{
    line++;
};
A:Label|MAIN {
    printf("%s \n",yytext);
};

B:OTHER;


%%

int yyerror(char const *s)
{
    printf("An yyerror occured %s\n",s);
    return 0;
}

int main()
{
  line=0;
  targetFile=fopen("output.xsm","w");
  if(targetFile==NULL)
  {
    printf("file error\n");
  }
  yyin=fopen("targetFile.xsm","r");
  yyparse();
  fclose(targetFile);
  return 0;
}