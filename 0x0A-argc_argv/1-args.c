#include <stdio.h>
/**
 * main - funct that prints number of arguments
 * @argc: number of arguments
 * @argv: vector array of pointers
 *
 * Return: 0 success.
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
		return (0);
}
