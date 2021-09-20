#include <unistd.h>


/**
 * puts - puts
 * @s: string
 * Return: 0
 */
int puts(__attribute__((unused))const char *s)
{
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	return (0);
}
