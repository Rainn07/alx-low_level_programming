#include <stdio.h>
#include "lists.h"

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
	char err_msg;

	err_msg = "[0] (nil)";

	while (h)
	{
	if (!h->str)
		for (int i = 0; i < 9; i++)
			putchar(err_msg[i]);
	else
		printf("%s [%u]\n", h->str, h->len);

	h = h->next;
	number_of_nodes++;
	}
	return (number_of_nodes);
}
