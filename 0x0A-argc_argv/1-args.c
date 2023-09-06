/*
 * Author: Jaxn
 * task: 1
 * Project: 0x0A-argc_argv
 */
#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: vector of ptrs to arguments
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
