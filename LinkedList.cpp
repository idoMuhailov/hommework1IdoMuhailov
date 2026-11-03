#include "LinkedList.h"
#include <iostream>

/*
initializes rge list
input:
	head: a pointer to the head
output: none
*/
void initList(intNode** head)
{
	*head = nullptr;
}

/*
inserts a node at the heads place
input: 
	head: a pointer to the head
	value: the value of the new node
*/
void insert(intNode** head, unsigned int value)
{
	intNode* newNode = new intNode();
	newNode->data = value;
	newNode->next = *head;
	*head = newNode;
}

/*
removes a node at the heads place
input:
	head: a pointer to the head
output: the value of the node removed
*/
int remove(intNode** head)
{
	int value = -1;
	if (!isEmpty(head))
	{
		intNode* temp = *head;
		value = temp->data;

		*head = (*head)->next;
		delete temp;
	}
	return value;

}

/*
cjecks if the list is empty
input:
	head: a pointer to the head
output:true if  empty else false
*/
bool isEmpty(intNode** head)
{
	bool flag = false;
	if (!*head)
	{
		flag = true;
	}
	return false;
}

/*
frees the list
inpuut:
	head: a pointer to the head
output: none
*/
void freeList(intNode* head)
{
	intNode* curr = head;
	while (curr != nullptr)
	{
		intNode* nextNode = curr->next;
		delete curr;
		curr = nextNode;
	}
}