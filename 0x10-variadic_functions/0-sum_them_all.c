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
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
