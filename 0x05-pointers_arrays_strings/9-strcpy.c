#include "main.h"
/**
 * *_strcpy - function that cpoies str pointed to
 * to a buffer
 * @dest: pointer to be return
 * @src: pointer that is pointing to str to be copies
 *
 * Return: dest
 */
char *_strcpy(char dest, char *src)
{
	int n = 0;
	int i = 0;
	int j = 1;

	while (str[n] != '\0')
	{
		n++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	while (j <= n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
