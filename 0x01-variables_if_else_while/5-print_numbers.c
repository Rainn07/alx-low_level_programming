#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * description: printing the single digits
 *
 * Return: Always (0)
 */

int main(void)
{
	int single_num;
	
	for (single_num = 0; single_num <= 9; single_num++)
	{
		printf("%d", single_num);
	}
	putchar('\n');
	return (0);
}
