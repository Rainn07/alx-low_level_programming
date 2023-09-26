#include "lists.h"

/*
 * Auth: Jaxn
 * Project: 0x13 - singly linked lists
 * task 0: 0-print_listint.c
 * 26/09/2023
 */

/**
 * print_listint - prints elements of list
 * @h: singly linked list
 *
 * Return: number of elements in list
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;
	const listint_t *temph = h;
	counter = 0;

	while (temph)
	{
		printf("%d\n", temph->n);
		temph = temph->next;
		counter++;
	}
	return (counter);
}
