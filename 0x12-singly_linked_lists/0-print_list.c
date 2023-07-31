#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_list - prints all elements in linked list
 * @h: pointer to linked list to be printed
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
/* number of elements in list */
	size_t number_of_nodes = 0;

/* empty list condition */
	while (h)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");
		return (number_of_nodes);

	else
		printf("[%u] %s\n", h->len, h->str);


	h = h->next;
	number_of_nodes++;
	}
	return (number_of_nodes);
}
