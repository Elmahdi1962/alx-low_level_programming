#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>



/**
 * wrdcnt - counts the number of words in a string
 * @s: string to count
 *
 * Return: int of number of words
 */
int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}




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
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	int e = 0, i, j, n = 0, k, l;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);

	n = wrdcnt(str);
	p = (char **)malloc(n * sizeof(char *));

	if (p == NULL)
		return (NULL);
	p[n - 1] = NULL;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[j + i] != ' ' && str[j + i]; j++)
				;
			j++;
			p[e] = (char *)malloc(j * sizeof(char));
			if (p[e] == NULL)
			{
				for (k = 0; k < e; k++)
					free(p[k]);
				free(p[n - 1]);
				free(p);
				return (NULL);
			}
			for (l = 0; l< j; l++)
				p[e][l] = str[i + l];
			p[e][l] = '\0';
			e++;
			i += j;
		} else
			i++;
	}
	return (p);
}
