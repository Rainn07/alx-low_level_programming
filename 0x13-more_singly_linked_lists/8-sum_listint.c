/*
 * Auth: Jaxn
 * Project 0x13 - more singly linked lists
 */
#include "lists.h"
/**
 * sum_listint - sums up data of list
 * @head: pointer to head of list
 *
 * Return: 0 - empty list. sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
