#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isalpha - checks if an argument is an alphabet or not
 *
 * @c: the argument to be checked
 *
 * Return: 1 for success, 0 for failure
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
