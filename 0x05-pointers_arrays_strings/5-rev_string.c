#include "holberton.h"

/**
 * rev_string - reverse a sting
 *
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0, i, n;
	char tmp;

	while (*s != 0)
	{
		length++;
		s++;
	}
/*reset the pointer to point to the first element*/
	s = s - length;
	n = length - 1;
	for (i = 0; i < length / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + n);
		*(s + n) = tmp;
		n--;
	}

}
