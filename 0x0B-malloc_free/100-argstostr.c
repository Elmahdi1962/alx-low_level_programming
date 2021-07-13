#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}



/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: arg count
 * @av: arguments
 * Return: pointer to new string or NULL if it fails
 */


char *argstostr(int ac, char **av)
{
	int i = 0, sizecounter = 0, j = 0, counter = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, sizecounter++)
		sizecounter += _strlen(av[i]);

	p = malloc(sizeof(char) * sizecounter + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, counter++)
			p[counter] = av[i][j];

		p[counter] = '\n';
		counter++;
	}
	p[counter] = '\0';
	return (p);
}
