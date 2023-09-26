#include "lists.h"
#include <stdlib.h>
/*
 * Auth: Jaxn
 * Project: 0x13 - more singly linked lists
 * task 4: 4-free_listint.c
 * 21/09/2023
 */

/**
 * free_listint - frees a list_t list
 * @head: pointer to start of list
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *iterator;

	while (head)
	{
		iterator = head->next;
		free(head);
		head = iterator;
	}
}
