#include "holberton.h"

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

	i = _abs(n);

	_putchar((i%10)+48);

	return (i % 10);
}
