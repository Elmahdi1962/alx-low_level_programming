#include "holberton.h"

/**
 * _strcmp - compares two strings.work exactly like strcmp
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: an integer less than, equal to, or
 * greater than zero if s1 is found, respectively,
 * to be less than, to match, or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
