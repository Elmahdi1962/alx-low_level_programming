#include "holberton.h"

/*
 * rev_string - reverse a sting
 *
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
        int length = 0;
	char arr[] = s;
        while (*s != 0)
        {
                length++;
                s++;
	}

	/*reset the pointer to point to the first element*/
	s = s - length;

	while (length > 0)
	{
		*s = arr[length-1];
                length--;
		s++;
        }

}
