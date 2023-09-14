/*
 * Author: Jaxn
 * task 1: 1_strdup.c
 * Project: 0x0B-malloc_free
 */

#include "function_pointers.h"


/**
 * print_name - print name
 * @name: name to be printed
 * @f: func ptr of funct that prints name
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
