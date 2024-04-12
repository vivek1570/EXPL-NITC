#include "label.h"
#include <stdlib.h>
#include <string.h>

void createlnode(struct lnode **head, const char *label, int addr) {
    struct lnode *temp;
    temp = (struct lnode *)malloc(sizeof(struct lnode));
    int x=(addr-9)*2;
    x+=2056;
    temp->addr = x;
    temp->labelname = strdup(label);
    temp->next = NULL;

    if (*head == NULL) {
        *head = temp;
    } else {
        struct lnode *ptr = *head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
