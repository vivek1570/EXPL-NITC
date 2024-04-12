#include<stdio.h>

struct lnode {
    char* name;
    int lineNo;
    struct lnode *next;
};

struct lnode *head = NULL;

void createlnode(char* Lname, int lineNo) {
    struct lnode *label = (struct lnode*)malloc(sizeof(struct lnode));
    label->name = Lname;
    int x=(lineNo-9)*2;
    x+=2056;
    label->lineNo =x;
    label->next = head;
    head= label;
}

int lltake(char *Lname) {
    struct lnode *ptr = head;
    while(ptr != NULL) {
        if(strcmp(ptr->name, Lname) == 0)
            return ptr->lineNo;
        ptr = ptr->next;
    }
    return -1;
}


// decl
//     int num[5];
//     int i;
// enddecl

// begin
//     i=0;
//     while(i<5) do
//     num[i]=i+10;
//     i=i+1;
//     endwhile;
//     i=0;
//     while(i<5) do
//     write(num[i]);
//     i=i+1;
//     endwhile;
// end;



