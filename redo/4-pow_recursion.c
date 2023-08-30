#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - raises int to another int
 *
 * @x: int to be raised
 * @y: pow to be raised to.
 *
 * Return: raised int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
