#include "holberton.h"

/**
 * *_memcpy - copies memory area
 * @src: area to copy from
 * @dest: where to copy to
 * @n: how much byte to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
