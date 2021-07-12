#include <stdio.h>
#include <stdlib.h>


/**
 * coin_counter - count how many coins needed
 * @n: cents
 * Return: coins
 */

int coin_counter(int n)
{
	int coins = 0;

	while (n)
	{
		if (n >= 25)
		{
			n -= 25;
			coins++;
			continue;
		}
		if (n >= 10)
		{
			n -= 10;
			coins++;
			continue;
		}
		if (n >= 5)
		{
			n -= 5;
			coins++;
			continue;
		}
		if (n >= 2)
		{
			n -= 2;
			coins++;
			continue;
		}
		if (n >= 1)
		{
			n -= 1;
			coins++;
			continue;
		}
	}
	return (coins);
}


/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 1 if number of arguments passed to your program is not exactly 1
 * Exit: EXIT_SUCCESS on success
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		exit(EXIT_SUCCESS);
	}

	printf("%d\n", coin_counter(n));
	exit(EXIT_SUCCESS);

}
