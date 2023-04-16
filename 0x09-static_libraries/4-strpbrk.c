#include "main.h"
/**
 * _strpbrk - search str for set of bytes
 * @s: str to be searched
 * @accept: set of bytes to be searched for
 *
 * Return: pointer to matched bytes, NULL for fail
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
