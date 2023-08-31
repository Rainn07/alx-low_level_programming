#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns length of a string
 * @s: str for which we calucate the length
 *
 * Return: len of str int
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
