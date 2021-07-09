#include "holberton.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: charachter to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */


int _isupper(int c)
{
	return (c >= 65 && c <= 90);
}
