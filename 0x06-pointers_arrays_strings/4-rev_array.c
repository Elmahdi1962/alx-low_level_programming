#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: array to reverse
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int l = n - 1, i = 0;
	int tmp;

	while (i <  ((n + 1) / 2))
	{
		tmp = *(a + l);
		*(a + l) = *(a + i);
		*(a + i) = tmp;
		i++;
		l--;
	}
}
