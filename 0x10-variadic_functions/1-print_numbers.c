#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers followed by new line
 * @separator: number separator when printing them
 * @n: number of arguments passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
