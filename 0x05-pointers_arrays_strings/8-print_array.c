#include "holberton.h"
#include <stdio>
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
	int length = _strlen(a);
	for (i = 0 ; i < length; i++)
	{
		printf("%d", *(a + i));
		if ( i != (length - 1))
		{
			printf(", ");
		}
	}
}


/**
 * _strlen - return length of a string
 *
 * @s: var to check (array of chars)
 *
 * Return: the length of the string (int)
 */

int _strlen(char *s)
{
        int counter = 0;

        while (*s != 0)
        {
                counter++;
                s = s + 4;
        }
	s = s - (4 * counter);
        return (counter);
}
