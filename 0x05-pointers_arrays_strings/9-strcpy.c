#include "main.h"
/**
 * *_strcpy - function that cpoies str pointed to
 * to a buffer
 * @dest: pointer to be return
 * @src: pointer that is pointing to str to be copies
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int i;

	while (src[n] != '\0')
	{
		n++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i = i;
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
