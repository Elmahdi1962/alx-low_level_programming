#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	long int f1 = 1, f2 = 2, sum = f2, tmp;

	while (f2 < 98)
	{
		tmp = f1 + f2;
		f1 = f2;
		f2 = tmp;
		printf("%li, ", f2);
	}
	printf("\n");
	return (0);
}
