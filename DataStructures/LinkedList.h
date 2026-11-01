#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct LinkedList
{
	unsigned int num;
	struct LinkedList* next;
} LinkedList;

void addNode(LinkedList** head, unsigned int node);
int removeNode(LinkedList** head);

#endif