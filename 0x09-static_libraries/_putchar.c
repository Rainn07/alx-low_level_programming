#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - prints a single character c to the stdout
 *
 * @ param c: the character to be printed
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int len = strlen(str);
	int i = 0;

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
