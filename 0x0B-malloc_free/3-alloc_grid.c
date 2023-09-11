/*
 * Author: Jaxn
 * task 3: 3-alloc_grid.c
 * Project: 0x0B-malloc_free
 */

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return ptr to 2d array
 * @width: cols of array
 * @height: rows of array
 *
 *
 * Return: NULL if width <= 0 || height <= 0
 *	return ptr to 2d array - success.
 */
int **alloc_grid(int width, int height)
{
	int row;
	int col;
	int i;
	int **arr_2d = (int **)malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);

	if (arr_2d == NULL)
		return (NULL);
		/*memory allocation failed*/

	for (row = 0; row < height; row++)
	{
		arr_2d[row] = (int *)malloc(width * sizeof(int));
		if (arr_2d[row] == NULL)
		{
			for (i = 0; i < row; i++)
				free(arr_2d[i]);


			free(arr_2d);
			return (NULL);
		}


	for (col = 0; col < width; col++)
		arr_2d[row][col] = 0;
	}
	return (arr_2d);
}
