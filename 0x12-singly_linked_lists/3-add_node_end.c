#include "lists.h"
#include <stdlib.h>
/*
 * Auth: Jaxn
 * Project: 0x12 - singly linked lists
 * task 3: 3-add_node_end.c
 */

/**
 * add_node_end - adds new node at end of list
 * @head: ptr at start of existing list
 * @str: str to be copied into new node
 *
 * Return: address of new head element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *iterator, *new_tail;
	size_t str_len;

	new_tail = (list_t *)malloc(sizeof(list_t));
	if (new_tail == NULL)
		exit(98);

	new_tail->str = strdup(str);
	if (new_tail->str == NULL)
	{
		free(new_tail);
		exit(98);
	}

	for (str_len = 0; str[str_len]; str_len++)
		;

	new_tail->len = str_len;
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
