#include "Stack.h"
#include "LinkedList.h"
#include <iostream>

void push(Stack* s, unsigned int element)
{
	addNode(&s->head, element);
	s->count++;
}

int pop(Stack* s)
{
	if (removeNode(&s->head) == 0)
	{
		s->count--;
		return 0;
	}
	return -1;
}

void initStack(Stack* s)
{
	s->head = NULL;
	s->count = 0;
}

void cleanStack(Stack* s)
{
	while(s->count != 0)
	{
		pop(s);
	}
}

bool isEmpty(Stack* s)
{
	return s->count == 0;
}