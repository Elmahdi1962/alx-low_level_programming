#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calculator main
 * @argc: arguments count
 * @argv: arguments array
 * Return: if the number of arguments is wrong, print Error,
 * followed by a new line, and exit with the status 98
 * if the operator is none of the above, print Error,
 * followed by a new line, and exit with the status 99
 * if the user tries to divide (/ or %) by 0, print Error,
 * followed by a new line, and exit with the status 100
 */


int main(int argc, char *argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}
