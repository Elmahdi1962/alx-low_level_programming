#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>



/**
 * print_char - Prints a character from an arguments list
 * @args: The arguments list
 */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}



/**
 * print_integer - Prints an integer from an arguments list
 * @args: The arguments list
 */
void print_integer(va_list *args)
{
	printf("%d", va_arg(*args, int));
}



/**
 * print_float - Prints a float from an arguments list
 * @args: The arguments list
 */
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}



/**
 * print_string - Prints a character array from an arguments list
 * @args: The arguments list
 */
void print_string(va_list *args)
{
	char *str = va_arg(*args, char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}



/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	const char *form = format;
	char *sep = "";
	int i = 0, j;
	fh formaters[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(ap, format);

	while (form && form[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (form[i] == (formaters + j)->format)
			{
				printf("%s", sep);
				(formaters + j)->printer(&ap);
				sep = ", ";
				break;
			}

			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
