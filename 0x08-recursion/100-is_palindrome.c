#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns length of a string
 * @s: str for which we calucate the length
 *
 * Return: len of str int
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
/**
 * is_palin - checks is start char equal end char
 * @s: char point to str
 * @start: start char
 * @end: end char
 * Return: 1 Success
 */

int is_palin(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palin(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if str is palindrome
 * @s: char pointer to str to be checked
 *
 * Return: 1 for palindrome, ) if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palin(s, 0, len - 1));
}
