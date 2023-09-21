#include "lists.h"

/*
 * Auth: Jaxn
 * Project: 0x12 - singly linked lists
 * task 0: 0-print_list.c
 * 21/09/2023
 */

/**
 * print_list - prints elements of list
 * @h: singly linked list
 *
 * Return: number of elements in list
 */

size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		counter++;
	}
	return (counter);
}
