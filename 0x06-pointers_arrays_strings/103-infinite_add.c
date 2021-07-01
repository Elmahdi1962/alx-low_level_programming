#include "holberton.h"

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = _strlen(n1), l2 = _strlen(n2), bn = l1 > l2 ? l1 : l2;
	int carry = 0, equation = 0;

	size_r--, l1--, l2--;

	if (bn >= size_r)
		return (0);

	r[bn + 1] = '\0';

	for (; bn >= 0 && size_r >= 0; size_r--, bn--, l1--, l2--)
	{
		equation = carry;
		if (carry)
			carry = 0;

		if (l1 >= 0)
			equation += n1[l1] - '0';

		if (l2 >= 0)
			equation += n2[l2] - '0';

		if (equation > 9)
		{
			equation %= 10;
			carry = 1;
		}
		r[bn] = (equation + '0');
	}
	return (r);
}

/**
 * _strlen - counts length of string
 * @str: string to check
 * Return: the result number
 */

int _strlen(char *str)
{
	int i, counter = 0;

	for (i = 0; str[i] != '\0'; i++)
		counter++;

	return (counter);
}
