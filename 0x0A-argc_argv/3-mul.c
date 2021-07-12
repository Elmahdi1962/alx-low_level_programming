#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 1 when error
 * exit: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		exit(EXIT_SUCCESS);
	} else
	{
		printf("Error\n");
		return (1);
	}
}
