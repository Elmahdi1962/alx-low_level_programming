#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers from min to max
 * @min: min value
 * @max: max value
 * Return: the pointer to the newly created array or null
 * If min > max or If malloc fails
 */


int *array_range(int min, int max)
{
	int *p, i, n;

	if (min > max)
		return (NULL);

	n = (max - min) + 1;
	p = malloc(n * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		p[i] = min++;
	}

	return (p);
}
