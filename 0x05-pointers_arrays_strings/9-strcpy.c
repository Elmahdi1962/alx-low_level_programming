#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest.
 * @dest: destination
 * @src: source
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
	return (dest);
}
