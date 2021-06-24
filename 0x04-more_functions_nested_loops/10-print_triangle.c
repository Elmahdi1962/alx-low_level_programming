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
	int i = 0, s = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (s < size)
			{
				_putchar(' ');
				s++;
			}
			_putchar('#');
			_putchar('\n');
			i++;
			s =  0;
		}
	} else
	{
		_putchar('\n');
	}
}
