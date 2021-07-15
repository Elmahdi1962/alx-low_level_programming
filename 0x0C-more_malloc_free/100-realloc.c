#include "holberton.h"
#include <stdlib.h>



/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *r = dest;

	while (n--)
		*dest++ = *src++;
	return (r);
}



/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: pointer's size
 * @new_size: it's new size after realocating new memory
 * Return: If new_size == old_size do not do anything and return ptr
 * If new_size is equal to zero, and ptr is not NULL Return Null
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		free(ptr);
		p = malloc(new_size);
		return (p);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	_memcpy(p, ptr, old_size);

	free(ptr);

	return p;
}
