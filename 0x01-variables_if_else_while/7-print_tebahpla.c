#include <stdio.h>
/**
 * main - Entry point into program
 *
 * discription - printing alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char esaclower;

	for (esaclower = 'z'; esaclower <= 'a'; esaclower++)
	{
		putchar(esaclower);
	}
	putchar('\n');
	return (0);
}
