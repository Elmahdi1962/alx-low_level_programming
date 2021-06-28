#include "holberton.h"

/**
 * swap_int - swaps values of 2 integers
 *
 * @a: int 1
 * @b: int 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
