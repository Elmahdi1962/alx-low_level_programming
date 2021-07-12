#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
