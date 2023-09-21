#include "lists.h"
#include <stdlib.h>
/*
 * Auth: Jaxn
 * Project: 0x12 - singly linked lists
 * task 2: 2-add_node.c
 * 21/09/2023
 */

/**
 * _strdup - duplicates str into newly
 *		allocated memory
 * @str: str parameter to be copied
 *
 * Return: NULL if str == NULL
 *		return ptr to copied str - success
 */

char *_strdup(const char *str)
{
	char *copy;
	int counter, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	copy = malloc((length + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (counter = 0; counter <= length; counter++)
		copy[counter] = str[counter];

	return (copy);
}
/**
 * add_node - adds node at the beginning of list_t list
 * @head: ptr to start of existing list
 * @str: str to be copied into new node
 *
 * Return: address of new head element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	size_t str_len;

	new_head = (list_t *)malloc(sizeof(list_t));
	if (new_head == NULL)
		exit(98);

	new_head->str = _strdup(str);
	if (new_head->str == NULL)
	{
		free(new_head);
		exit(98);
	}

	for (str_len = 0; str[str_len]; str_len++)
		;

	new_head->len = str_len;
	new_head->next = *head;
	*head = new_head;

	return (*head);
}
