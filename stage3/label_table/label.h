#ifndef LABEL_H
#define LABEL_H

struct lnode {
    int addr;
    char *labelname;
    struct lnode *next;
};

void createlnode(struct lnode **head, const char *label, int addr);

#endif
