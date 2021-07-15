#include "holberton.h"
#include <stdlib.h>


/**
 * _strlen - return length of string
 *
 * @s: string to count
 *
 * Return: the size
 */


int _strlen(char *s)
{
	int counter = 0;

	while (*s != 0)
	{
		counter++;
		s++;
	}
	return (counter);
}



/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to new space in memory that contains s1 + n bytes of s2
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, j;
	char *p;

	l1 = s1 != NULL ? _strlen(s1) : 0;
	l2 = s2 != NULL ? _strlen(s2) : 0;

	if (n >= l2)
		n = l2;
	p = malloc((l1 + n) * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
	{
		*(p + i) = s1[i];
	}

	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];

	p[i] = 0;
	return (p);
}
