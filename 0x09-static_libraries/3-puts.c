#include "holberton.h"

/**
 * _puts - prints a string followed by a nes line to stdout
 *
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
