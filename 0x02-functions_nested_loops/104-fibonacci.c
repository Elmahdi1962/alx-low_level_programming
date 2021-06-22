#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	long int i = 1, f1 = 1, f2 = 2, tmp;

	while (i < 98)
	{
		printf("%li, ", f1);
		tmp = f1 + f2;
		f1 = f2;
		f2 = tmp;

		i++;
	}
	printf("\n");
	return (0);
}
