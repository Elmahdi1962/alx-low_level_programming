#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main: entry point
 *
 * Description: checks if the var n is 0 or bigger,
 * or less than 0 and print it
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
