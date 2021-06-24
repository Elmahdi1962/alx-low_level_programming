#include "holberton.h"

/**
 * print_number - print an integer using putchar
 *
 * @n: integer to print
 *
 * Return: Void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar('0' + (n % 10));
}
