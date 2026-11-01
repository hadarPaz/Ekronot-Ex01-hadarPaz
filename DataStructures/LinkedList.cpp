#include "LinkedList.h"
#include <iostream>

void addNode(LinkedList** head, int node)
{
	LinkedList* newNode = new LinkedList;
	newNode->num = node;
	if (head == NULL)
	{
		*head = newNode;
	}
	else
	{
		(*head)->next = newNode;
	}
}

void removeNode(LinkedList** head)
{
	*head = (*head)->next;
}