#include <stdio>

/**
 * main - fizz buzz program
 *
 * Return: always 0
 */

int main(void);
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
			printf(" ");
		} else
		{
			printf("%i ", i);
		}
	}
}
