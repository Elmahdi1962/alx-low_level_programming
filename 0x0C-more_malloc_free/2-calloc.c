#include "holberton.h"
#include <stdlib.h>


/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory area
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}



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

/*	for (i = 0; i < nmemb; i++)
		*((int *)p + i) = 0;
		*/
	_memset(ptr, 0, size * nmemb);
	return (p);
}
