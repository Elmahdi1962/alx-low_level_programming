#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: variable to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
