/*
 * Author: Jaxn
 * task: 2
 * Project: 0x0A-argc_argv
 */
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: vector of ptrs to arguments
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
