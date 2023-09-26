#include "lists.h"
#include <stdlib.h>
/*
 * Auth: Jaxn
 * Project: 0x13 - more singly linked lists
 * task 2: 2-add_nodent.c
 * 26/09/2023
 */

/**
 * add_nodeint - adds node at the beginning of list_t list
 * @head: ptr to start of existing list
 * @n: int to be added
 *
 * Return: address of new head element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = (listint_t *)malloc(sizeof(listint_t));
	if (new_head == NULL)
		exit(98);

	new_head->n = n;

	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
