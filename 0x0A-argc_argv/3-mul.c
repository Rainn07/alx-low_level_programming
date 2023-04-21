#include "stdio.h"
#include <stdlib.h>
/**
 * main - prints the product of arguments
 * @args: number of arguments
 * @argv: vector array of pointers
 *
 * Return: 0 Success
 *	   1 for failure
 */
int main(int args, char *argv[])
{
	int num1, num2;

	if (args != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);

}
