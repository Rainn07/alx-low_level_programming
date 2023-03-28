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
	int i = 0;
	int j = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	j = length - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
