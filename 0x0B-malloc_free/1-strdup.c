#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

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
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy to another memory location
 *
 * Return: pointer to new memory space
 */

char *_strdup(char *str)
{
	int s = str != NULL ? _strlen(str) : 0;
	char *p;

	if (str == NULL)
		return (NULL);

	p = (char *)malloc(s + 1);
	if (p == NULL)
		return (NULL);

	while (s)
	{
		p[s - 1] = str[s - 1];
		s--;
	}
	return (p);
}
