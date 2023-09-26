#include "lists.h"
#include <stdlib.h>
/*
 * Auth: Jaxn
 * Project: 0x13 - singly linked lists
 * task 4: 5-free_listint2.c
 * 26/09/2023
 */

/**
 * free_listint2 - frees a list_t list & set head to null
 * @head: pointer to start of list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t iterator;

	if (head)
	{
		while (*head)
		{
			iterator = *head
			*head = iterator->next;
			free(iterator);
		}
	}
}
