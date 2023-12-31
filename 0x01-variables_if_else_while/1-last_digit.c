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

	if (last_digit == 0)
	{
		printf("%s%d", "Last digit of ", n);
		printf("%s %d%s\n", " is", last_digit, " and is 0");
	} else if (last_digit < 6 && last_digit != 0)
	{
		printf("%s%d", "Last digit of ", n);
		printf("%s%d%s\n", " is ", last_digit, " and is less than 6 and not 0");
	}
	else
	{
		printf("%s%d", "Last digit of ", n);
		printf("%s%d%s\n", " is ", last_digit, " and is greater than 5");
	}
	return (0);
}
