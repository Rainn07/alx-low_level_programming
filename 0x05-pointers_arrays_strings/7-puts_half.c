#include "main.h"
/**
 * puts_half - function that prints the second half of a string
 *
 * @str: the string from which characters will be printed
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int length = 0;

	/*loop to find length of str*/
	while (str[length] != '\0')
	{
		length++;
	}
	/*what to do if length is even/odd*/
	if (length % 2 == 0)
	{
		length = length / 2;
	}
	else
	{
		length  = (length + 1) / 2;
	}
	while (str[length] != '\0')
	{
		length++;
		_putchar(str[length]);
	}
	_putchar('\n');
}
