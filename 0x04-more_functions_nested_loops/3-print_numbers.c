#include "holberton.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 * followed by a new line
 *
 * Return: Void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
}
