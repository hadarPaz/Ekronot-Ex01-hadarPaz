#include "Queue.h"
#include <iostream>


void initQueue(Queue* q, unsigned int size)
{
	int* arr = new int[size];
	q->maxCap = size;
	q->arr = arr;
	q->headIndex = 0;
	q->lastIndex = 0;
}

void cleanQueue(Queue* q)
{
	delete[] q->arr;
	q->lastIndex = 0;
	q->headIndex = 0;
	q->maxCap = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (q->lastIndex == 0)
	{
		q->arr[q->headIndex] = newValue;
		q->lastIndex++;
	}
	
	else if(q->lastIndex < q->maxCap)
	{
		q->arr[q->lastIndex] = newValue;
		q->lastIndex++;
	}
}

int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	int value = -1;
	if (q->headIndex < q->maxCap && q->arr[q->headIndex] > 0)
	{
		value = q->arr[q->headIndex];
		q->arr[q->headIndex] = 0;
		q->headIndex++;
		return value;
	}
	q->lastIndex = 0;
	return -1;
}

bool isEmpty(Queue* s)
{
	return s->arr[s->headIndex] <= 0;
}

bool isFull(Queue* s)
{
	return s->maxCap == s->lastIndex && s->headIndex == 0;
}

