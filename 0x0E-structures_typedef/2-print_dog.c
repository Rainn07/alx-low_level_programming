#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/*
 * Auth: Jaxn
 * Project: 0x0E -  Structures and typedef
 */

/**
 * print_dog - Print struct
 * @d: struct to be printed
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
