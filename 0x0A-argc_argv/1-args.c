#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: arguments count
 * @argv: array of arguments passed to the program
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
