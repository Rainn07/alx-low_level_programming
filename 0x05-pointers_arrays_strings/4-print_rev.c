#include "main.h"
/**
 * print_rev - funct that prints a str in reverse
 *
 * @s: the string to be printed in reverse
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int i = _strlen(*s);

	while (i != 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
