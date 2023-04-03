#include "main.h"

/**
 * _memset - fills first n bytes of memeory
 * area pointed to by s with constant byte
 *
 * @s: Pointer to memory to be filled
 * @b: char to fill memory
 * @n: number of bytes to be filled
 *
 * Return: Void
 */

char *_memset(char *s, int b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}

