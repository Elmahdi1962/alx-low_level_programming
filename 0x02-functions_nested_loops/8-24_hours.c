#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 *
 * Return: Void
 */

void jack_bauer(void)
{
	int h;
	int m;

	_putchar('0');
	_putchar('0');
	_putchar(':');
	_putchar('0');
	_putchar('0');
	_putchar('\n';

	for (h = 0; h <= 24; h++)
	{
		for (m = 1; m <= 60; m++)
		{
			if (m == 60)
			{
				_putchar(((h + 1) / 10) + 48);
				_putchar(((h + 1) % 10) + 48);
				_putchar(':');
				_putchar('0');
				_putchar('0');
				_putchar('\n');
				break;
			} else
			{
				_putchar((h / 10) + 48);
				_putchar((h % 10) + 48);
				_putchar(':');
				_putchar((m / 10) + 48);
				_putchar((m % 10) + 48);
				_putchar('\n');
			}
		}
	}
}
