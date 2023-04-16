#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * _abs - computes the value of the absolute value of the arg
 *
 * @n: the value the function acts on
 *
 * Return: The absolute value of the arg
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
