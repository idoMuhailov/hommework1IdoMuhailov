#include "Queue.h"
#include <iostream>

/*
initializes the queue
input:
	q: a pointer to the queue
	size: the size of the queue
*/
void initQueue(Queue* q, unsigned int size)
{
	q->elements = new int[size];
	q->size = size;
	q->head = 0;
	q->tail = 0;
	q->count = 0;
}

/*
cleans the queue
input:
	a pointer  to the queue
output: none
*/
void cleanQueue(Queue* q)
{
	delete[] q->elements;

	q->elements = nullptr;
	q->head = 0;
	q->tail = 0;
	q->count = 0;
}

/*
adds an element to the queue
input:
	q: a pointer to the queue
	value: the new value added
output: none
*/
void enqueue(Queue* q, unsigned int value)
{
	q->elements[q->tail] = value;
	q->tail = (q->tail + 1);
	q->count += 1;
}

/*
removes an element of the queue
input:
	q: a pointer to the queue
output: the element removed
*/
int dequeue(Queue* q)
{
	int value = -1;
	if (!isEmpty(q))
	{
		int value = q->elements[q->head];
		q->head = (q->head + 1);
		q->count--;
	}
	return value;

}

/*
checks if the queue is empty
input:
	s: a pointer to the queue
output; if the queue is empty true else false
*/
bool isEmpty(Queue* s)
{
	bool flag = false;
	if (s->count == 0)
	{
		flag = true;
	}
	return flag;
}

/*
checks if the queue is full
input:
	s: a pointer to the queue
output: true if full else false
*/
bool isFull(Queue* s)
{
	bool flag = false;
	if (s->count == s->size)
	{
		flag = true;
	}
	return flag;
}