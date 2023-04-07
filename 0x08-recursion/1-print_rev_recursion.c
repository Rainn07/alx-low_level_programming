#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string in reverse, using recursion
 *
 * @s: str to be printed
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_revcursion(*s + 1);
	_putchar(*s);
	}
}
