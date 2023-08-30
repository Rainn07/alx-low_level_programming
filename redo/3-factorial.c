#include "main.h"
#include <stdio.h>
/**
 * factorial - func that returns the factorial
 * of a given number
 *
 * @n: int parameter: given number
 *
 * Return: n!. -1 fail.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
