#include <stdio.h>
#include <stdlib.h>


/**
 * isInteger - checks if s is an integer
 * @s: string to check
 * Return: 0 or 1
 */

int isInteger(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
	if (s[i] < '0' || s[i] > '9')
		return (1);
	i++;
}
return (0);
}


/**
 * main - program that adds positive numbers.
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 1 if argument are not digits
 * exit: EXIT_SUCCESS on success
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (--argc)
	{
		if (isInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
