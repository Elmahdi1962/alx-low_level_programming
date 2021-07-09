#include "holberton.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic  char
 *
 * @c: the charachter to check
 *
 * Return: 1 if c is letter 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}

	return (0);

}
