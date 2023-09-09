/*
 * Author: Jaxn
 * task 0: 0-create_array.c
 * Project: 0x0B-malloc_free
 */

#include "main.h"
#include <stdlib.h>

/**
 * creat_array - creates array with filler char
 * @size: unsigned int, size multiplier
 * @c: The char to fill array
 *
 * Return: Null if size = 0 or fails
 *	return ptr to array if success.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int counter;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
		arr[counter] = c;

	return (arr);
}
