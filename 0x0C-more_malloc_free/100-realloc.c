/*
 * Auth: Jaxn
 * Project: 0x0C - more malloc free
 */
#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates memory block
 * @ptr: ptr to prior memory bloc
 * @old_size: byte size of allocated
 * @new_size: byte size of new memory block
 *
 * Return: ptr to new memory block: Succes
 *		NULL: Failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, min_size;
	char *old_data, *new_data;
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	min_size = (old_size < new_size) ? old_size : new_size;

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	old_data = (char *)ptr;
	new_data = (char *)new_ptr;

	for (i = 0; i < min_size; i++)
		new_data[i] = old_data[i];

	free(ptr);

	return (new_ptr);
}
