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

#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - Calculate the minimum number of coins required to make change
 * @cents: The amount in cents for which to make change
 *
 * Return: The minimum number of coins required to make change for 'cents'.
 */
int minCoins(int cents)
{
	int coinValues[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coinValues) / sizeof(coinValues[0]);
	int dp[cents + 1];

	dp[0] = 0;

	for (int i = 1; i <= cents; i++)
	{
		dp[i] = cents + 1;
		for (int j = 0; j < numCoins; j++)
		{
			if (i >= coinValues[j] && dp[i - coinValues[j]] + 1 < dp[i])
			{
				dp[i] = dp[i - coinValues[j]] + 1;
			}
		}
	}

	return (dp[cents]);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		int result = minCoins(cents);

		printf("%d\n", result);
	}

	return (0);
}

