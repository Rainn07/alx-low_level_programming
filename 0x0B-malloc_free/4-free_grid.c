/*
 * Author: Jaxn
 * task 4: 4-free_grid.c
 * Project: 0x0B-malloc_free
 */

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d int array
 * @grid: 2d array
 * @height: rows of array
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int counter;

	for (counter = 0; counter < height; count++)
		free(grid[index]);

	free(grid);
}
