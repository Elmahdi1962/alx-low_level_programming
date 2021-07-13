#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: 2d array
 * @height: height of the array
 * Return: Void
 */


void free_grid(int **grid, int height)
{
int i = 0;
for (; i < height; i++)
	free(grid[i]);
free(grid);
}
