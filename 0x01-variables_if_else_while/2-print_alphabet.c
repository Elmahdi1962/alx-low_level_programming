#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 *
 * Return: 0
 */

int main()
{
	int a;
	a = 'a';

	while (a < 'z')
	{
		putchar(a);
		a++;
	}
	return (0);
}
