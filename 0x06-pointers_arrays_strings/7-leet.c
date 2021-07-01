#include "holberton.h"

/**
 * *leet - encodes a string into 1337
 *
 * @s: string to encode
 *
 * Return: result pointer
 */

char *leet(char *s)
{
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	int numbers[] = {4, 3, 0, 7, 1};
	int i;
	char *c = s;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == letters[i] || *s == letters[i] + 32)
				*s = numbers[i] + 48;
		}
		s++;
	}
	return (c);
}
