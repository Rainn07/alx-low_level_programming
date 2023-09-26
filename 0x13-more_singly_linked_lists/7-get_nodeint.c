#include "lists.h"
#include <stdlib.h>
/*
 * Auth: Jaxn
 * Project: 0x13 - more singly linked lists
 * task 7: 7-get_nodeint.c
 */

/**
 * get_nodeint_at_index - find data for node at index
 * @head: ptr at start of existing list
 * @index: node index of interest
 *
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	if (head == NULL)
		return (NULL);
	for (counter = 0; index; counter++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
