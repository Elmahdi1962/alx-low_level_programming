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

        while (*s != 0)
        {
                length++;
                s++;
	}
	int i = length;
	char arr[i];

	/*reset the pointer to point to the first element*/
	s = s - length;

	while (length > 0)
	{
		arr[i - length] = *(s + length);
                length--;
        }

}
