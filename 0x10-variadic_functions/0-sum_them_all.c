#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all it's parameters
 * @n: numbers of arguments passed
 *
 * Return: the sum of all numbers or 0 if not numbers passed
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
