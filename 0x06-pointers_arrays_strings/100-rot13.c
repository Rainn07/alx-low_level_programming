#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * rot13 - function that encodes
 * a string by shifting the alphabets
 * by 13 and wraps around
 *
 * @str: str to be encoded
 *
 * Return: encoded str.
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]))
		{
			if (islower(str[i]))
				str[i] = (((str[i] - 'a') + 13) % 26) + 'a';
			else
				str[i] = (((str[i] - 'A') + 13) % 26) + 'A';
		}
	}
	return (str);
}
