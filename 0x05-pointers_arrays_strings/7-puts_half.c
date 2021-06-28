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
 * puts_half - prints half of the string ,\n
 *
 * @str: string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = _strlen(str), i;

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(*(str + i));
		}

	} else
	{
		for (i = (length / 2) + 1; i < length; i++)
		{
			_putchar(*(str + i));
		}

	}
	_putchar('\n');
}
