#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints string followed by a newline
 * @s: string to be printed
 *
 * Return: 1. Success
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
