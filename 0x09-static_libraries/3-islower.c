#include "holberton.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase char
 *
 * @c: the charachter to check
 *
 * Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}

	return (0);

}
