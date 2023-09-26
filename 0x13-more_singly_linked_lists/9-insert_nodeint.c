/*
 * Auth: Jaxn
 * Project 0x13 - more singly linked lists
 * task 9: insert node at index
 */
#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int node;

	if(head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (node = 0; node < idx - 1 && temp != NULL; node++)
			temp = temp->next;

		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
