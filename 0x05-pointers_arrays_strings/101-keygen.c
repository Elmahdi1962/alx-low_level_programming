#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: always 0
 */

int main(void)
{
  char pass;
	int comb;

	srand(time(NULL));

	while (comb <= 2645)
		pass = rand() % 128, comb += pass, putchar(pass);
	putchar(2772 - comb);
	return (0);
}
