#include "holberton.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: strign to convert
 *
 * Return: int
 */


int _atoi(char *s)
{
	int i = 0, multiplier = 1, firs_digit, last_digit, sign = 1;
	unsigned int number = 0;

	/*we loop thru the string*/
	while (*(s + i) != 0)
	{
		/*we check first for a sigh if it exist*/
		if (*(s + i) == '-')
		{
			sign *= -1;
		}

		/* check for numbers if they exist */
		if (*(s + i) > 47 && *(s + i) < 58)
		{
			/* we check is it's the first digit */
			if (*(s - 1) < 48 || *(s - 1) > 57)
			{
				first_digit = i;
			}
			/* we check if it's the last digit */
			if (*(s + 1) < 48 || *(s + 1) > 57)
			{
				last_digit = i;
				break;
			}
		}
		i++;
	}

	/* find how many digits the number has */
	i = first_digit;
	while (i < last_digit)
	{
		multiplier *= 10;
		i++;
	}
	/*finding teh whole number*/
	i = first_digit;
	while (i <= last_digit)
	{
		number += (*(s + i) - '0') * multiplier;
		multiplier /= 10;
		i++;
	}
	number *= sign;

	return (number);
}
