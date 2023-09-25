/*
 * Author: Jaxn
 * task 5: 100-argstostr.c
 * Project: 0x0B-malloc_free
 */

#include "main.h"
#include <stdlib.h>
/**
 * _strlen - counts bytes in str
 * @str: str to be counted
 *
 * Return: string length
 */
unsigned int _strlen(char *str)
{
	unsigned int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
		;

	return (counter);
}


/**
 * argstostr - concaternates args ov program
 *
 * @ac: number of arguments
 * @av: arr of ptrs of vector arguments
 *
 * Return: ptr to new concat str - Success
 *	NULL - Failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, counter, size = ac;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
		for (byte = 0; av[arg][byte]; byte++)
			size++;

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	counter = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			str[counter] = av[arg][byte];
			counter++;
		}
		str[counter] = '\n';
		counter++;
	}

	str[counter] = '\0';
	return (str);
}

