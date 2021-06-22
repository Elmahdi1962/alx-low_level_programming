#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	unsigned long i = 0, f1 = 1, f2 = 2, tmp;

	while (i < 99)
	{
		printf("%lu", f1);
		tmp = f1 + f2;
		f1 = f2;
		f2 = tmp;
		if(i < 98)
		{
            printf(",  ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
