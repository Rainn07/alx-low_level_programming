#include "main.h"
/**
 * _strlen - funct that returns length of a string
 * @s: input string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		;
	return (count);
}
