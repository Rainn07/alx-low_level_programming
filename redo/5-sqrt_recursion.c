#include "main.h"
#include <stdio.h>
/**
 * _sqrt - finds hatural roots
 * by increment
 *
 * @num: input
 * @root: initial guess
 *
 * Return: if natural root exists - root
 *	   if natural root does not exist - -1
 */
int _sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root >= num / 2)
		return (-1);

	return (_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - finds natural root of input num
 *
 * @n: input number
 *
 * Return: If natural root exists - root
 *	   if natural root does not exist - -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}
