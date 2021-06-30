#include "holberton.h"

/**
 * print_number - prints an integer
 *
 * @n: int to print
 *
 * Return: void
 */

void print_number(int n)
{
	int base = 1, number, r;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	number = n;
	while (number > 9)
	{
		number /= 10;
		base *= 10;
	}

	while (base)
	{
		r = n / base;
		_putchar(r + '0');
		n -= r * base;
		base /= 10;
	}
}
