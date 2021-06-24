#include "holberton.h"

/**
 * print_most_numbers - print numbers from 0 ot 9 followed
 * by a new line but do not print 2 and 4.
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
