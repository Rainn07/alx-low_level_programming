/*
 * Author: Jaxn
 * task 1: 1_string_nconct.c
 * Project: 0x0C-more_malloc_free
 */

#include "main.h"
#include <stdlib.h>

/**
 * _strlen - counts bytes in str
 * @str: str to be counted
 *
 * Return: string length
 */
unsigned int _strlen(char *str)
{
	unsigned int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
		;

	return (counter);
}

/**
 * string_nconcat - concatenates two strings
 *		all of s1 and n bytes of s2
 * @s1: first str
 * @s2: second str
 * @n: number of bytes for s2
 *
 *
 * Return: NULL if str == NULL
 *	return ptr to copied str - success.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	unsigned int i, j;

	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";

	if (n >= _strlen(s2)) n = _strlen(s2);

	ptr = (char *)malloc( _strlen(s1) + n + 1);

	if (ptr == NULL) return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];

	ptr[i+ j] = '\0';

	return (ptr);
}
