#include <stdio.h>
/**
 * main - Entry point to program
 *
 * Description: program that prints out the alphabet as lower then uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char lcase, ucase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
	for (ucase = 'A'; ucase <= 'Z'; ucase++)
	{
		putchar(ucase);
	}
	putchar('\n');

	return (0);
}
