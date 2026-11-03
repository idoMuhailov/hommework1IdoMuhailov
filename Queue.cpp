#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
	q->elements = new int[size];
	q->size = size;
	q->head = 0;
	q->tail = 0;
	q->count = 0;
}

void cleanQueue(Queue* q)
{
	delete[] q->elements;

	q->elements = nullptr;
	q->head = 0;
	q->tail = 0;
	q->count = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	q->elements[q->tail] = newValue;
	q->tail = (q->tail + 1);
	q->count += 1;
}

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

bool isEmpty(Queue* s)
{
	bool flag = false;
	if (s->count == 0)
	{
		flag = true;
	}
	return flag;
}

bool isFull(Queue* s)
{
	bool flag = false;
	if (s->count == s->size)
	{
		flag = true;
	}
	return flag;
}