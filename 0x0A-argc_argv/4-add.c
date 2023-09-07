/*
 * Author: Jaxn
 * task 4: 4-add.c
 * Project: 0x0A-argc_argv
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
/**
 * main - adds two positive numbers
 * @argc: number of arguments
 * @argv: vector of ptrs to arguments
 *
 * Return: void. always zero
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/*if no number is passed*/
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* if non digit is found */
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
