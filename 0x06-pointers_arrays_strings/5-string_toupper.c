#include "holberton.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @
 *
 * Return: the result
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) &= ~' ';
		i++;
	}
	return (s);
}
