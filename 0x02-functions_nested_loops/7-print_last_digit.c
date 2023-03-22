#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_last_digit - prints the last digit of the arg
 *
 * @n: the argument for which the last digit will be printed
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;


	return (last_digit);
}
