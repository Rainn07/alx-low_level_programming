#include "stdio.h"
/**
 * main - prints all arguments it receives
 * @args: number of arguments
 * @argv: vector array of pointers
 *
 * Return: 0 success.
 */

int main(int args, char *argv[])
{
	int i = 0;

	for (; i < args; i++)
		printf("%s\n", argv[i]);

	return (0);
}
