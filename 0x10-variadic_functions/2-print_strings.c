#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: strings separator when printing them
 * @n: number of strings passed
 * Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char*);
		printf("%s", string == NULL ? "(nil)" : string);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
