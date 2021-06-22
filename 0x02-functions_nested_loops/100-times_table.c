#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: number to start from
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				r = (j * i);

				if (r > 99)
				{
					printf(" %d", r);
				} else if (r > 9)
				{
					printf("  %d", r);
				} else if (j != 0)
				{
					printf("   %d", r);
				} else
				{
					printf("%d", r);
				}
				if (j != n)
				{
					printf(",");
				}
			}
			printf("\n");
		}
	}
}
