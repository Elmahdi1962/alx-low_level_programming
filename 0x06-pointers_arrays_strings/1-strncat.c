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
 * *_strncat - concatenates two strings except that
 * it will use at most n bytes from src; and src does
 * not need to be null-terminated if it contains n or more bytes
 * @dest: first string
 * @src: second string
 * @n: how many bytes it will use from src
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *cat = dest + _strlen(dest);
	int length;

	if (n > _strlen(src) + _strlen(dest))
		length =  _strlen(dest) + _strlen(src);
	else
		length = _strlen(dest) + n;

	while (*src && n > 0)
	{
		*cat += *src;
		src++;
		cat++;
		n--;
	}
	if (n > 0)
		*cat += '\0';
	cat -= (length);
	*dest = *cat;

	return (cat);
}
