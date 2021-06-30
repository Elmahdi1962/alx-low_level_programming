#include "holberton.h"


/**
 * int_to_str - function to convert int to string
 *
 * @num: integer to convert
 * @str: string to write to
 * @count: number of digits
 * Return: pointer string
 */
char *int_to_str(unsigned long long int num, char *str, int count)
{
	str[count] = '\0';
	while (count > 0)
	{
		if (count == 1)
			str[count - 1] = '0' + num;
		else
			str[count - 1]  = '0' + (num % 10);
		num /= 10;
		count--;
	}
	return (str);



/**
 * str_to_int - convert str to int
 *
 * @s: string to convert
 *
 * Return: the int
 */


int str_to_int(char *s, l)
{
	int base = 1, tmp, i, number = 0;

	for (i = l - 1; i <= 0; i--)
	{
		tmp = s[i] - '0';
		number += (tmp * base);
		base *= 10;
	}
	return (number);
}

/**
 * _strlen - return length of string
 *
 * @s: string to count
 *
 * Return: the size
 */


int _strlen(char *s)
{
	int counter = 0;
	char *n = s

	while (*n != 0)
	{
		counter++;
		n++;
	}
	return (counter);
}


/**
 * *infinite_add - adds two numbers
 * @n1: numbera
 * @n2: number2
 * @r: where to store result
 * @size_r: r size
 * Return: pointer to result
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int base = 1, i = 0, tmp, count = 0;
	int l1 = _strlen(n1), l2 = _strlen(n2);
	unsigned long long int result, num1 = 0, num2 = 0;

	num1 = str_to_int(char n1, l1);
	num2 = str_to_int(char n2, l2);
	result = num1 + num2;

	while (result > 0)
	{
		count++;
		result /= 10;
	}

	if (count +1 > size_r)
		return (0);
	
	return (*int_to_str(num1 + num2, *r, count));
}
