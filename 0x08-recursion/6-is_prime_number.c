#include "main.h"
#include <stdio.h>
/**
 * divisible - can the num be divided?
 *
 * @num: num to be checked
 * @div: divisor
 *
 * Return: if num !prime - 0
 *	   if num is prime - 1
 */
int divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div >= num / 2)
		return (1);

	return (divisible(num, div + 1));
}
/**
 * is_prime_number - checks if input is prime
 * @n: input num
 *
 * Return: if int !prime - 0
 *	   if the n is prime - 1
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	return (divisible(n, div));
}
