#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: string name
 * @f: callback
 * Return: void
 */



void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
