/*
 * Auth: Jaxn
 * Project: 0xxC - more malloc free
 */
#include "main.h"
#include <stdlib.h>
/**
 * calloc - Allocates memory for arr
 * @nmemb: number of elements
 * @size: byte size of arr elements
 *
 * Return: NULL - failure
 *		ptr to allocated memeory - success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *member;
	char *temp;
	unsigned int index;

	if(nmemb == 0 || size == 0)
		return (NULL);

	member = malloc(size * nmemb);

	if (member == NULL)
		return (NULL);

	temp = member;

	for (index = 0; index < (size * nmemb); index++)
		temp[index] = '\0';

	return (member);
}
