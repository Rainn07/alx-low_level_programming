#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the letters of the alphabet
 *
 * no parameters
 *
 * Return: Void
 */

void print_alphabet(void)
{
	char c;
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
}
