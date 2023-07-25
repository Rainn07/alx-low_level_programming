#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns pointer to memory
 * containing duplicated str argument
 *
 * @str: string argument t be stored in
 * allocated memory
 *
 * Return: pointer to memory
 */

char *_strdup(char *str)
{
	char *temp;
	int count;
	int len = 0;

	if (str == NULL)
		return (NULL);/*no argument*/

	for (count = 0; str[count]; count++)
		len++;/*how many elements in str?*/


	temp = malloc(sizeof(char) * (len + 1));
	/*len + 1 for the number of arguments*/

	for (count = 0; str[count]; count++)
		temp[count] = str[count];
	/*duplicate str and store it in alloc mem*/

	/*must end with newline*/
	temp[len] = '\0';

	return (temp);
}
