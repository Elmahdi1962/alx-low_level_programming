#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabets in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
        char a;
	int i;
        for (a = 'a'; a <= 'z'; a++)
        {
                _putchar(a);
        }
        _putchar('\n');
}
