#include "holberton.h"

/**
 * find_sqrt - helper function for _sqrt_recursion
 * @n: input number
 * @i: iteratotr
 * Return: square root of number
 */

int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (find_sqrt(n, i + 1));
}



/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number
 *
 * Return: returns the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
