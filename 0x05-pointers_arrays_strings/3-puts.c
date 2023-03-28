#include "main.h"
/**
 * _puts - funct that prints a string followed by empty line
 * @str: The string to be printed
 * Return: Void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
