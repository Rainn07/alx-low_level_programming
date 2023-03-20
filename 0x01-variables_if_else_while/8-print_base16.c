#include <stdio.h>
/**
 * main - Entry point into the program
 *
 * description: printing the hexadecimal numbers
 *
 * Return: (0) (Success)
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		printf("%x ", i);
	}
	putchar('\n');

	return (0);
}
