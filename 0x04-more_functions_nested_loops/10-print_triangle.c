#include "holberton.h"

/**
 * print_triangle - prints a triangle using the char #
 *
 * @size: the size of the triangle
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int i = 0, s = 0, n = size;

	if (size > 0)
	{
		while (i < size)
		{
			while (s < n - 1)
			{
				_putchar(' ');
				s++;
			}
			while (n <= size)
			{
				_putchar('#');
				n++;
			}
			_putchar('\n');
			i++;
			n = size - i;
			s =  0;
		}
	} else
	{
		_putchar('\n');
	}
}
