#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string
 *
 * Return: integer length of the sting
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
