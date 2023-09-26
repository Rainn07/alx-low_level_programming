#include "lists.h"
#include <stdlib.h>
/*
 * Auth: Jaxn
 * Project: 0x13 - singly linked lists
 * task 6: 6-pop_listint.c
 * 26/09/2023
 */

/**
 * pop_listint - deletes the head node
 * @head: ptr to ptr (double pointer
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	listint_t *temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
