/*
 * Author: Jaxn
 * task 1: 1_strdup.c
 * Project: 0x0B-malloc_free
 */

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - return ptr to 2 concatenated str
 * @s1: first string
 * @s2: second string
 *
 *
 * Return: NULL if str == NULL
 *	return ptr to copied str - success.
 */
char *str_concat(char *s1, char *s2)
{
	int counter, concat_counter = 0, len = 0;
	char *placeholder;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	for (counter = 0; s1[counter] || s2[counter]; counter++)
		len++;

	placeholder = (char *)malloc((len) * sizeof(char));

	if (placeholder == NULL)
		return (NULL);

	for (counter = 0; s1[counter]; counter++)
		placeholder[concat_counter++] = s1[counter];

	for (counter = 0; s2[counter]; counter++)
		placeholder[concat_counter++] = s2[counter];

	return (placeholder);
}
