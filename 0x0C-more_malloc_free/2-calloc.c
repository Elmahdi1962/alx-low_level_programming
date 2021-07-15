#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: number of bytes each
 * Return: pointer to the allocated memory or
 * Null If nmemb or size is 0 or If malloc fails
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;


	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		*((int *)p + (i * sizeof(int))) = 0;
	return (p);
}
