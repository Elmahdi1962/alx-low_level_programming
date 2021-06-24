#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: number of times the char \ will be printed
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	int i = 0, s = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (s < i)
			{
				_putchar(' ');
				s++;
			}

			_putchar('\\');
			_putchar('\n');
			s = 0;
			i++;
		}
	} else
	{
		_putchar('\n');
	}
}
