#include "holberton.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @s: number to add
 * @n: number to add
 *
 * Return: result
 */

void print_to_98(int n)
{
	int t;

	t = 98;

	if (n < t)
	{
		while (n < t)
		{
			if (n > 9 || n < -9)
			{

				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
				_putchar(',');
				_putchar(' ');

			} else
			{

				_putchar(n + 48);
				_putchar(',');
				_putchar(' ');

			}
			n++;
		}
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}else
	{
			while (n > t)
		{
			if (n > 9 || n < -9)
			{

				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
				_putchar(',');
				_putchar(' ');

			} else
			{

				_putchar(n + 48);
				_putchar(',');
				_putchar(' ');

			}
			n--;
		}
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
		_putchar('\n');
	}
}
