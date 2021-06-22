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

	i = n % 10;

	_putchar(i);

	return (n % 10);
}
