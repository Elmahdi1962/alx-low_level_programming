#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, \n
 *
 * @a: array
 * @n: how many elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
