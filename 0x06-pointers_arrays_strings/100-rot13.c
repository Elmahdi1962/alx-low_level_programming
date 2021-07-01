#include "holberton.h"

/**
 * *rot13 - encodes a string using rot13.
 *
 * @s: string to encode
 *
 * Return: result pointer
 */

char *rot13(char *s)
{
	int i;
	char *c = s;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (c);
}
