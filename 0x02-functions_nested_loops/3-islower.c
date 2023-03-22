#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * _islower - funct that checks if a char is caps or not.
 *
 * @c: char whose case is tested
 *
 * Return: (1) Success. Return zero for failure
 */
int _islower(int c)
{
	int i = 0;

	if (islower(c))
	{
		i++;
	}
	return (i);
}
