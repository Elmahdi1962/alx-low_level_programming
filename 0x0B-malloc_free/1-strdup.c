#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy to another memory location
 *
 * Return: pointer to new memory space
 */

char *_strdup(char *str)
{
	int s = sizeof(str);
	char *p;

	if (str == NULL)
		return (NULL);
	p = (char *)malloc(s);
	if (p == NULL)
		return (NULL);

	while (s >= 0)
	{
		p[s] = str[s];
		s--;
	}
	return (p);
}
