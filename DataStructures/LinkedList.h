#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct LinkedList
{
	int num;
	struct LinkedList* next;
} LinkedList;

void addNode(LinkedList** head, int node);
void removeNode(LinkedList** head);

#endif