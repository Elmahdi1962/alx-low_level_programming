#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, isformat = 0;
	char *string;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		switch(format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			isformat = 1;
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			isformat = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			isformat = 1;
			break;
		case 's':
			string = va_arg(ap, char *);
			isformat = 1;
			if (string != NULL)
				printf("%s", string);
			else
				printf("nil");
			break;
		default:
			isformat = 0;
			break;
		}

		if (format[i + 1] != '\0' && isformat)
			printf(", ");
		else if (isformat)
			printf("\n");

		++i;
	}
}
