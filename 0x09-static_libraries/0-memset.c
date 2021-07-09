#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory to fill
 * @b: constant byte to fill in the memory
 * @n: first bytes to fill
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
