#include "Stack.h"
#include <iostream>

/*
this function adds an elemnt to the stack
input:
	s: a pointer for the stack
	elemnt: the new elemnt added
output:none
*/
void push(Stack* s, unsigned int element)
{
	insert(&(s->element), element);
}

/*
this function removes the last elemnt from the stack
input:
	s: a pointer for the  stack
output: the value of the elemnt removed
*/
int pop(Stack* s)
{
	int value = -1;
	if (!isEmpty(s))
	{
		value = remove(&(s->element));
	}
	return value;
}

/*
this function initializes the stack
input:
	s: a pointer to the stack
output:none
*/
void initStack(Stack* s)
{
	s->element = nullptr;
}

/*
this function frees rhe stack
input:
	s: the stack
output: none
*/
void cleanStack(Stack* s)
{
	freeList(s->element);
	s->element = nullptr;
}

/*
this function checks if the stack is empty
input:
	s: a pointer to the  tsack
output: if empty true else false
*/
bool isEmpty(Stack* s) 
{
	return(isEmpty(s->element))
}

/*
checks if the stack is full
input:
	s: a pointer to  the stackk
output: true if full else false
*/
bool isFull(Stack* s)
{
	return false;/*a linked list is never full*/
}