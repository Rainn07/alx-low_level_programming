#include "main.h"
/**
 * _strpbrk - searched a str for any set of bytes
 *
 * @s: str to be searched
 * @accept: str to be searched for
 *
 * Return: pointer to byte in s that matches accept
 * else NULL is no such byte exists
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
