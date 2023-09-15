/*
 * Author: Jaxn
 * task 0: 1-array_iterator.c
 * Project: 0x0F-funtion_pointers
 */

#include "function_pointers.h"

/**
 * array_iterator: -	performs action on
 *			elements of an array
 * @array: ptr to array
 * @size: size of array
 * @action: ptr to funct that to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	size_t i = 0;

	for (; i < size; i++)
		action(array[i]);

}
