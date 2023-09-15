/*
 * Author: Jaxn
 * task 0: 1-array_iterator.c
 * Project: 0x0F-funtion_pointers
 */

#include "function_pointers.h"

/**
 * array_iterator: - performs action on
 *			elements of an array
 * @array: ptr to array
 * @size: size of array
 * @action: ptr to funct that to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(*array);
}
