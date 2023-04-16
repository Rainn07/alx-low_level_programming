#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be appended
 *
 * Return: ptr to appended str
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*ptr)
	{
		/*going to the end of the str address*/
		ptr++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*ptr++ = *src++;
	}
	return (dest);
}
