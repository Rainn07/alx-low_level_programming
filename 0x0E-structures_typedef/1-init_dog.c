#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - return ptr to space allocated space
 *	     in memory with duplicate str param
 * @str: str param to be copied
 *
 *
 * Return: NULL if str == NULL
 *	return ptr to copied str - success.
 */
char *_strdup(char *str)
{
	char *copy;
	int counter, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	copy = malloc((length + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (counter = 0; counter <= length; counter++)
		copy[counter] = str[counter];

	return (copy);
}

/**
 * init_dog - create new dog type
 * @d: dog structure name
 * @name: name of dog
 * @age: age of god
 * @owner: dog owner
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = _strdup(name);
		d->age = age;
		d->owner = _strdup(owner);
	}
}
