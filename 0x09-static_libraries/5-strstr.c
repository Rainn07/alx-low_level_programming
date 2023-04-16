#include "main.h"

/**
 * _strstr - finds a first instance of substring
 *
 * @haystack: str to be searched
 * @needle: what we are looking for
 *
 * Return: pointer to beginning of located substring
 * Null if substr is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int len = 0;

	while (needle[len] != '\0')
		len++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != len)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
