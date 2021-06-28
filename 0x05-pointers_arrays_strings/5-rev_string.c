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
        int length = 0, i = 0;
	char tmp;
        while (*s != 0)
        {
                length++;
                s++;
	}

	/*reset the pointer to point to the first element*/
	s = s - length;
	i = length;
	while (length / 2 > 0)
	{
		tmp = *(s + (length - 1));
		*(s + (length - 1)) = *(s + (i - length));
		*(s + (i - length)) = tmp;
                length--;
        }

}
