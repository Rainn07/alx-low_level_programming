#include "stdio.h"
#include <stdlib.h>
#include <ctype.h>

/** pos_int - function that returns 1 if number is pos int
 * @str: values to be checked if posint
 * 
 * Return: 1 for posint, 0 failure
 */
int pos_int(char *str)
{
	while(*str)
	{
	
		if(!isdigit(*str))
		{
			return 0;
		}
	str++
	}
return 1;
}
/** 
 * main - adds two positive numbers & print
 * @argc: number of arguments
 * @argv: vector array of pointers
 *
 * Return: 0 success
 * 1 for failure
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int count = 0;

	if(argc != 1)
	{
		for (; i < argc; i++)
		{
			if ( !pos_int(argv[i]))
			{
				printf("Error\n");
				return 1;
			}
		int num = atoi(argv[i]);
		count += num;
		}
		printf("%d\n", sum);
	}
   printf("%d\n", 0)
