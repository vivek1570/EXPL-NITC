%option noyywrap
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "label.h"
#include "label.c"
int line = 1;
struct lnode *head = NULL;
%}

%%

[A-Z][0-9]*:  {
    createlnode(&head, yytext, line);
    line--;
}
[\n] {
    line++;
}
. {
    // Ignore other characters
}

%%

int main() {
    yyin = fopen("targetFile.xsm", "r");
    if (!yyin) {
        fprintf(stderr, "Error opening file\n");
        return 1;
    }

    yylex();
    struct lnode *pt = head;
    if (head == NULL)
        printf("NULL\n");
    while (pt != NULL) {
    printf("line=%d ", pt->addr);
    printf("label=%.*s ", (int)strlen(pt->labelname) - 1, pt->labelname);
    printf("\n");
    pt = pt->next;
    }
    printf("\nNo of Lines=%d\n", line);

    // Free allocated memory for the nodes
    pt = head;
    while (pt != NULL) {
        struct lnode *temp = pt;
        pt = pt->next;
        free(temp->labelname); // Free the memory for labelname
        free(temp);            // Free the memory for the node
    }

    fclose(yyin);
    return 0;
}
