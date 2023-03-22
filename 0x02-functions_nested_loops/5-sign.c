#include "main.h"
#include <stdio.h>
/**
 * print_sign - determines the sign of an int and returns accodingly
 *
 * @n: integer for which the sign will be found
 *
 * Return: 1 for +ve; 0 for 0 & -1 for -ve
 *
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
