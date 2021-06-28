#include "holberton.h"

/**
 * _atoi - convert a string to an integer
 * @s: strign to convert
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0, multiplier = 1, first_digit = -1, last_digit = -1, sign = 1;
	unsigned int number = 0;

	while (*(s + i) != 0)
	{
		if (*(s + i) == '-')
		{
			sign *= -1;
		}
		if (*(s + i) > 47 && *(s + i) < 58)
		{
			if (!(*(s + i - 1) > 47 && *(s + i - 1) < 58))
			{
				first_digit = i;
			}
			if (!(*(s + i + 1) > 47 && *(s + i + 1) < 58))
			{
				last_digit = i;
				break;
			}
		}
		i++;
	}
	if (first_digit == -1 && last_digit == -1)
		return (0);
	i = first_digit;
	while (i < last_digit)
	{
		multiplier *= 10;
		i++;
	}
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
