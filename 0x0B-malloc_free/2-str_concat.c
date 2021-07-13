#include <stdlib.h>
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
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the result
 */

char *str_concat(char *s1, char *s2)
{
	int l1 = s1 == NULL ? 0 : _strlen(s1);
	int l2 = s2 == NULL ? 0 : _strlen(s2);
	char *p = (char *)malloc(l1 + l2 + 1);

	if (p == NULL)
		return (NULL);

	if (s1 != NULL)
	{
	while (*s1)
	{
		*p = *s1;
		s1++;
		p++;
	}
	}
	if (s2 != NULL)
	{
	while (*s2)
	{
		*p = *s2;
		s2++;
		p++;
	}
	}
	p -= l1 + l2;
	return (p);
}
