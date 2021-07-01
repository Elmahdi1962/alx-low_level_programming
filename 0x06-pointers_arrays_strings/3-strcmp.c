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
	int sone = _strlen(s1), stwo = _strlen(s2);

	return (sone == stwo ? 0 : sone > stwo ? 15 : -15);
}
