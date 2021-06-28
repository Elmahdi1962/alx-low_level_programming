#include "holberton.h"

/**
 * _strlen - return length of a string
 *
 * @s: var to check (array of chars)
 *
 * Return: the length of the string (int)
 */

int _strlen(char *s)
{
	int counter = 1;

	while (*s != 'n')
	{
		counter++;
		*s++;
	}

	return (counter);
}