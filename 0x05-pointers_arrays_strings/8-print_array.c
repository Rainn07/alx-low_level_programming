#include "main.h"
/**
 * print_array - function that prints out elements
 * of array
 *
 * @a: parameter 1
 * @n: parameter 2
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
