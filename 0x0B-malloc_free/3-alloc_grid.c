#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	p = (int **)malloc(height * sizeof(*p));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height ; i++)
	{
		p[i] = (int *)malloc(sizeof(**p) * width);
		if (p[i] == NULL)
		{
			/*free everything if malloc fails then return NULL*/
			while (i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);
}
