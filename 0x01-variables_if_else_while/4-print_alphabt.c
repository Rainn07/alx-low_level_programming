#include <stdio.h>
/**
 * main - Entry point to the program
 *
 * Description - variable lcase
 *
 * Return: Always 0
 */
int main(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		if (lcase != 'e' && lcase != 'q')
		{
			putchar(lcase);
		}
	}
	putchar('\n');
	return (0);
}
