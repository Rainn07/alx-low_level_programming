#include <string.h>
#include "main.h"
/**
 * _strcat - function that joins one string to another
 * @dest: the string
 * @src: string to be added
 *
 * Return: ptr to concatenated
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	/*ptr to the pointer to dest*/

	while (*ptr)
	{
		ptr++;
		/*moving up to the last character of dest*/
	}
	while (*src)
	{
		*ptr++ = *src++;
		/*next char in *ptr is the next char in *src*/
	}
	*ptr = '\0';
	return (dest);
}
