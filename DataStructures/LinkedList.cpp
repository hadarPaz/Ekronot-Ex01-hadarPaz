#include "LinkedList.h"
#include <iostream>

void addNode(LinkedList** head, unsigned int node)
{
	LinkedList* newNode = new LinkedList;
	newNode->num = node;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		newNode->next = *head;
		*head = newNode;
	}
}

int removeNode(LinkedList** head)
{
	int num = -1;
	if (*head != NULL)
	{
		num = (*head)->num;
		LinkedList *temp = *head;
		*head = (*head)->next;
		delete temp;
	}
	return num;
	
}