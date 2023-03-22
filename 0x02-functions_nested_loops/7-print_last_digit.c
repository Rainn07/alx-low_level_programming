#include "main.h"
#include <stdio.h>
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

	last_digit = _abs(last_digit);

	return (last_digit);
}
