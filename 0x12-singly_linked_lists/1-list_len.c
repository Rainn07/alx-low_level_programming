#include "lists.h"

/*
 * Auth: Jaxn
 * Project: 0x12 - singly linked lists
 * task 1: 1-list_len.c
 * 21/09/2023
 */

/**
 * list_len - counts the elements in a list
 * @h: list to be assessed
 *
 * Return: number of elements in list h
 */

size_t list_len(const list_t *h)
{
	int counter = 0;
		while (h != NULL)
		{
			counter++;
			h = h->next;
		}
	return (counter);
}
