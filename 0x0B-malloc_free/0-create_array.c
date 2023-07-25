#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - creates char array and initialize
 * with a specific char
 * @size: size of memory to be allocated
 * @c: char that array is initialized with
 * Return: Success:pointer to array Failure: Null
 */

char *create_array(unsigned int size, char c)
{
	char *arr_ptr;
	unsigned int init;

	if (size == 0)
		return (NULL);

	arr_ptr = malloc(sizeof(char) * size);

	if (arr_ptr == NULL)
		return (NULL);

	for (init = 0; init < size; init++)
		arr_ptr[init] = c;

	return (arr_ptr);
}

