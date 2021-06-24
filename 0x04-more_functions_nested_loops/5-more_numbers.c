#include "holberton.h"

/**
 * print_most_numbers - print numbers from 0 ot 9 followed
 * by a new line but do not print 2 and 4.
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int i = 0, j = 0;

	while (i < 10)
	{
		while (j < 15)
		{
			if (j < 10)
			{
				_putchar(j);
				j++;
				continue;
			}
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
