#include "holberton.h"
#include "_strlen.c"

/**
 * checker - checks if palindrome or not
 *
 * @s: strign to check
 * @l: string length
 * @i: index
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int checker(char *s, int l, int i)
{
	if (i < ((l + 1) / 2))
	{
		return ((s[i] == s[(l - 1) - i] ? 1 : 0) * checker(s, l, i + 1));
	}
	return (1);
}


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: strign to check
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (_strlen(s) == 0)
		return (1);
	return (checker(s, _strlen(s), 0));
}
