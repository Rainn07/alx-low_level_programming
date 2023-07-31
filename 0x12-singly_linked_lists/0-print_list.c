#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_list - prints all elements in linked list
 * @h: linked list to be printed
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
/* number of elements in list */
	size_t number_of_nodes = 0;

/* empty list condition */
	if (h == NULL)
	{
	printf("[0] (nil)\n");
	return (number_of_nodes);
	}

/*iterate through list and print*/
	const list_t *current = h;

	while (current != NULL)
	{
	printf("%d %s\n", current->len, h->str);
	current = current->next;
	number_of_nodes++;
	}
	printf("\n");
	return (number_of_nodes);
}
