#include "holberton.h"

/**
 * puts_half - prints half of the string ,\n
 *
 * @str: string to print
 *
 * Return: void
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


void puts_half(char *str)
{
	int length = _strlen(str), i;

	for (i = length / 2; i < length; i++)
	{
		_putchar(*(str + i));
	}
}
