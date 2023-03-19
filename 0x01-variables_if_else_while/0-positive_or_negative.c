#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 * description - func creates a number and then prints out if the number is
 * positive or negative
 *
 * Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d %s\n", n, "is zero");
	else if (n > 0)
		printf("%d %s\n", n, "is positive");
	else
		printf("%d %s\n", n, "is negative");
	return (0);
}
