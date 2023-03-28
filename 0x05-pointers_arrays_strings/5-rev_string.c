#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: string to be reversed
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int length = 0;
	int j = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	j = length - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;

		i++;
		j--;
	}
}
