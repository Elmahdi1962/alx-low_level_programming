#include "holberton.h"

/**
 * times_table -  prints the 9 times table, starting with 0.
 *
 *
 * Return: Void
 */

void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = (j * i);
			_putchar(' ');

			if (r > 9)
			{
				_putchar((r / 10) + 48);
				_putchar((r % 10) + 48);
			} else
			{
				_putchar(' ');
				_putchar(r + 48);
			}
			_putchar(',');
		}
		_putchar('\n');
	}
}
