#include "main.h"
#include <string.h>
/**
 * reverse_array - function that
 * reverses the content of an array of integers
 *
 * @a: the array to be reversed
 * @n: number of elements in the array
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = *(a + 1);
		*(a + 1) = *(a + j);
		*(a + j) = temp;
	}
	return (temp);
}

