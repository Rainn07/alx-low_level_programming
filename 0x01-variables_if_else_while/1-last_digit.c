#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description - prints of the last number of a randomly generated integer
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
		printf("%d %s \n", last_digit, " and it greater than 5");
	else if (last_digit != 0 && last_digit < 6)
		printf("%d %s \n", last_digit, " and is less than 6 and not 0");
	else if (last_digit == 0)
		printf("%d %s \n", last_digit, " and is 0");
	return (0);
}
