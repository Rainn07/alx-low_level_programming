#include "main.h"
#include <string.h>
/**
 * _strcmp - works exactly like strcmp()
 *
 * @s1: first str
 * @s2: second str
 *
 * Return: int difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else
		return (*s1 - *s2);
}

