#include <stdio.h>
#include <string.h>
#include "main.h"

/** is_palindrome - check is str arg is palindrome
 * @s: pointer to str arg
 *
 * Return: 1 for success, ) for failure
 */

int is_palindrome(char *s)
{
	int len = 0;
	int start = 0;
	int end;

	while (s[len])
		len++;

	end = len - 1;

	while (start < end)
	{
		if (s[start] != s[end])
			return (0);
		start++;
		end--;
	}
	return 1;
}
