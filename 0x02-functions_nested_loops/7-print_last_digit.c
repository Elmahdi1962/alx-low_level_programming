#include "holberton.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: int to check
 *
 * Return: the value of the last degit.
 */

int print_last_digit(int n)
{
	int i;

	if ((n % 10) >= 0)
		i = (n % 10);
	else
		i = (-1 * (n % 10));

	_putchar(i + 48);

	return (i);
}
