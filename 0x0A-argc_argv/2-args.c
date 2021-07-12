#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
