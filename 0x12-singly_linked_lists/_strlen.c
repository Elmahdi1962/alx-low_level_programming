#include "lists.h"
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

	while (s[counter] != 0)
	{
		counter++;
	}
	return (counter);
}
