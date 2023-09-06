/*
 * Author: Jaxn
 * task: 1
 * Project: 0x0A-argc_argv
 */
#include <stdio.h>

/**
 * main - prints name of program and new line
 * @argc: number of arguments
 * @argv: vector of ptrs to arguments
 *
 * Return: void. always zero
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
