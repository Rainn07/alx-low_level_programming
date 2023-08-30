#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum
 *	number of coins to change any
 *	ammount of money
 * @argc: number of arguments
 * @argv: array of ptr to arguments
 *
 * Return: 1 if arguments > 1
 *	else 0
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
