#include "holberton.h"

/**
 * puts2 - prints every other char of a string starting with
 * the first char, followed byt new line
 * @str: string to use
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 1;

	for (; *str != 0; str++)
	{
		if (i % 2 != 0)
		{
			_putchar(*str);
		}
		i++;
	}
	_putchar('\n');
}
