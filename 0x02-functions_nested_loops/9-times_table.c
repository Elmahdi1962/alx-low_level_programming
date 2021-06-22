#include "holberton.h"

/**
 * times_table - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 *
 * Return: Void
 */

void times_table(void)
{
	int i,j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar((j * i) + 48);
			_putchar(',');
		}
		_putchar('\n');
	}
}
