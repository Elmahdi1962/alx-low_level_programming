#include "holberton.h"
#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded)
 *
 *
 * Return: 1
 */

int main(void)
{
	int result5, result3, i, tmp5, tmp3, sum;

	for (i = 1; i < 1024; i++)
	{
		tmp5 = i * 5;
		if (tmp5 < 1024)
		{
			result5 += tmp5;
		}

		tmp3 = i * 3;
		if (tmp3 < 1024)
		{
			result3 += tmp3;
		}

		if (tmp5 > 1024 && tmp3 > 1024)
		{
			break;
		}

	}
	sum = result5 + result3;
	printf("%d", sum);
	return (1);
}
