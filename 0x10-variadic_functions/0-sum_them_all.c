/*
 * Author: Jaxn
 * task 0: 0-sum_them_all.c
 * Project: 0x10. C - funtion_pointers
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all parameters
 * @n: number of arguments
 *
 * Return: Sum of args - Success
 *		0 - failure
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	unsigned int sum, i;
	va_list args;

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
