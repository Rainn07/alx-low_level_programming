#include <stdio.h>
#include <stdlib.h>
/*
 * Author: Jaxn
 * task 5: advanced
 * Project: 0x0A-argc_argv
 */

/**
 * main - prints minimum number of cents you need to give back
 * @argc: number of arguments
 * @argv: vector of ptrs to arguments
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else
	{
		while (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		while (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		while (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		while (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		while (cents >= 1)
		{
			cents -= 1;
			coins++;
		}
		printf("%d\n", coins);
	}
	return (0);
}
