#include "main.h"
#include <stdio.h>

/*
 * Auth: Jaxn
 * Project: 0x08 - recursion
 * task 8: 101-wildcmp.c
 * 21/09/2023
 */

/**
 * wildcmp - compares two str ingoring wildcard
 * @s1: str1
 * @s2: str2
 * Return: 1 == Success
 *	0 == Failure
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 != '\0')
		return (0);

	if (*s2 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));


	return (0);
}
