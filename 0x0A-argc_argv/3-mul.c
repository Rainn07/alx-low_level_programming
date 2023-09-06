/*
 * Author: Jaxn
 * task: 3
 * Project: 0x0A-argc_argv
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiple two arguments
 * @argc: number of arguments
 * @argv: vector of ptrs to arguments
 *
 * Return: void. always zero
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	product = arg1 * arg2;

	printf("%d\n", product);

	return (0);
}
