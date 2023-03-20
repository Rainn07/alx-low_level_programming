#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description - prints the alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
