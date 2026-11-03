#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

typedef struct intNode {
    unsigned int data;
    intNode* next;
} intNode;

void initList(intNode** head);
void insert(intNode** head, unsigned int value);
int remove(intNode** head);
bool isEmpty(intNode** head);
void freeList(intNode* head);;
#endif