#include "stdio.h"
#include <stdlib.h>
#include <ctype.h>

/**
 *pos_int - function that returns 1 if number is pos int
 * @str: values to be checked if posint
 *
 * Return: 1 for posint, 0 failure
 */

int pos_int(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
	str++;
	}
return (1);
}

/**
 * main - adds two positive numbers & print
 * pos_int - check in arg is pos int
 * @str: value to be checked if pos int
 * @argc: number of arguments
 * @argv: vector array of pointers
 *
 * Return: 0 success
 * 1 for failure
 */

int main(int argc, char *argv[])
{
	int i;
	int count;
	int num;

	i = 0;
	count = 0;

	if (argc != 1)
	{
		for (i = 1 ; i < argc; i++)
		{
			if (!pos_int(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
		num = atoi(argv[i]);
		count += num;
		}
		printf("%d\n", count);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
