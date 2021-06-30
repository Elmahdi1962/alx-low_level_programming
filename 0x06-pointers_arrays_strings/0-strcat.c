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
 * *_strcat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: the final string
 */

char *_strcat(char *dest, char *src)
{
	int i = _strlen(dest), j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
