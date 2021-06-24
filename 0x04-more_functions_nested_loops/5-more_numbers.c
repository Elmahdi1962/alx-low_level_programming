#include "holberton.h"

/**
 * print_most_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line..
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
	        for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + 48);
				_putchar((j % 10) + 48);
			} else
			{
				_putchar((j % 10) + 48);
			}
 
		}
		_putchar('\n');
		i++;
	}
}
