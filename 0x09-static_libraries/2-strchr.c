#include "main.h"
#include <stdlib.h>
/**
 * _strchr - locates a char in a str.
 *
 * @s: str to be searched
 * @c: char to be searched for
 *
 * Return: pointer to char in the string (success)
 * Null if char is not found
 *
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
