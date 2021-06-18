#include <stdio.h>

/**
 * main -  prints all possible combinations of two two-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 99 ; i++)
	{
		for (j = 0 ; j < 99 ; j++)
		{
			if (j > i)
			{
				putchar(i / 10);
				putchar(i % 10);
				putchar(' ');
				putchar(j / 10);
				putchar(j % 10);

				if(i != 98 && j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
