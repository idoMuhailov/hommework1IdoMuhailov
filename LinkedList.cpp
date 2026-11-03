#include "LinkedList.h"
#include <iostream>

void initList(intNode** head)
{
	*head = nullptr;
}

void insert(intNode** head, unsigned int value)
{
	intNode* newNode = new intNode();
	newNode->data = value;
	newNode->next = *head;
	*head = newNode;
}

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

bool isEmpty(intNode** head)
{
	bool flag = false;
	if (!*head)
	{
		flag = true;
	}
	return false;
}

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