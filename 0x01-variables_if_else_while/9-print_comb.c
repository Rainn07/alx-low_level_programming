#include <stdio.h>
/**
 * main - Entry point to the program
 *
 * description - Printing numbers separated by a comma
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
		if ((x + '0') < (9 + '0'))
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
