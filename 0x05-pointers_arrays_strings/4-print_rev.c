#include "holberton.h"

/**
 * print_rev - prints string in reverse followed by new line
 *
 * @s: string to print in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}
	s = s - length;
	while (length > 0)
	{
		_putchar(*(s + (length - 1)));
		length--;
	}
	_putchar('\n');
}
