#include <string.h>
#include "main.h"
/**
 * _strncpy - function that works like strncpy()
 *
 * @dest: destination str
 * @src: source str
 * @n: number of characters to be copied
 *
 * Return: pointer to appended string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
