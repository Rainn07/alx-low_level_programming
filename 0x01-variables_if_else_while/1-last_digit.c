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
	int l_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_d = n % 10;

	if (last_digit > 5)
		printf("%s%d", "Last digit of", n);
		printf("%s%d%s\n", " is", l_d, "and it greater than 5");
	else if (last_digit != 0 && last_digit < 6)
		printf("%s%d", "Last digit of", n);
		printf("%s%d%s\n", " is", l_d, "and is less than 6 and not 0");
	else if (last_digit == 0)
		printf("%s%d%s%d%s\n", "Last digit of", n, "is", l_d, "and is 0");
	return (0);
}
