
#include "lists.h"
#include <stdlib.h>
/*
 * Auth: Jaxn
 * Project: 0x13 - more singly linked lists
 * task 3: 3-add_node_end.c
 */

/**
 * add_node_end - adds new node at end of list
 * @head: ptr at start of existing list
 * @n: int to be added
 *
 * Return: address of new head element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *iterator, *new_tail;

	new_tail = (listint_t *)malloc(sizeof(listint_t));
	if (new_tail == NULL)
		exit(98);

	new_tail->n = n;
	new_tail->next = NULL;

	iterator = *head;

	if (iterator == NULL)
	{
		*head = new_tail;
	}
	else
	{
		while (iterator->next != NULL)
			iterator = iterator->next;
	iterator->next = new_tail;
	}
	return (*head);
}
