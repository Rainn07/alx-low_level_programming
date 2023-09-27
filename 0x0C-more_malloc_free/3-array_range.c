/*
 * Auth: Jaxn
 * Project: 0x0B - more malloc free
 */
#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates arr of ascending int
 * @min: first value of arr
 * @max: last value of arr
 *
 * Return: NULL if min > max
 *		ptr to arr
 */
int *array_range(int min, int max)
{
	int index, size, *arr;

	if (min > max)
		return (NULL);

	size = max - (min + 1);

	arr = (int *)malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		arr[index] = min++;

	return (arr);
}
