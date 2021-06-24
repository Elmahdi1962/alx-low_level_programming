#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: how many times the char _ will be printed
 *
 * Return: Void
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	} else
	{
		_putchar('\n');
	}

}
