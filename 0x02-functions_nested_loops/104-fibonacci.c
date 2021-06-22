#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 1;
	unsigned long int a = 1, b = 2, next = 0;

	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", a);

		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
