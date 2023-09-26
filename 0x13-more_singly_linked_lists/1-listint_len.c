#include "lists.h"

/*
 * Auth: Jaxn
 * Project: 0x13 - more singly linked lists
 * task 1: 1-list_len.c
 * 26/09/2023
 */

/**
 * listint_len - counts the elements in a list
 * @h: list to be assessed
 *
 * Return: number of elements in list h
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;
		while (h != NULL)
		{
			counter++;
			h = h->next;
		}
	return (counter);
}
