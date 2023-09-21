#include "lists.h"
#include <stdlib.h>
/*
 * Auth: Jaxn
 * Project: 0x12 - singly linked lists
 * task 4: 4-free_list.c
 * 21/09/2023
 */

/**
 * free_list - frees a list_t list
 * @head: pointer to start of list
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *iterator;

	while ((iterator = head) != NULL)
	{
		head = head->next;
		free(iterator->str);
		free(iterator);
	}
}
