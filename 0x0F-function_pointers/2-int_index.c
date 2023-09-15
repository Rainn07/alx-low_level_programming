/*
 * Author: Jaxn
 * task 2: 2-int_index.c
 * Project: 0x0F-funtion_pointers
 */

#include "function_pointers.h"

/**
 * int_index - searches for int in array
 * @array: ptr to array
 * @size: size of array
 * @cmp: ptr to funct that compares values
 *
 * Return: index of first elem match
 *	Failure: -1 no match,size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
		if (cmp(array[index]) != 0)
			return (index);

	return (-1);
}
