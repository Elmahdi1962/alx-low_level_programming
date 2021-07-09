#include "holberton.h"

/**
 *_strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: substring
 *
 * Return: the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int counter = 0, i, j, lastc;

	for (i = 0; *(s + i); i++)
	{
		lastc = counter;
		for (j = 0; *(accept + j); j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
		}
		if (lastc == counter)
			break;
	}
	return (counter);
}
