#include "main.h"
/**
 * print_diagsums - prints the sum of the
 * diagonals of a square matrix of int
 *
 * @a: matrix of int
 * @size: dimensions of matrix
 *
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int row, col;
	int sum1 = 0;
	int sum2 = 0;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
			{
			       sum1 += a[row][col];
			}

			if (row + col == size - 1)
			{
				sum2 += a[row][col];
			}

		}
	}
	printf("%d, %d\n", sum1, sum2);
}
