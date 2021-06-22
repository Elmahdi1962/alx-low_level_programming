#include "holberton.h"

/**
 * main - entry point
 *
 * Description: prints the string holberton
 *
 * Return: always 0
 */

int main(void)
{
	char c[9] = "Holberton";
	int i;

	for (i = 0 ; i < 9 ; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
