#include <unistd.h>

/**
 * srand - Overwrites the srand function in the libc shared object
 * @seed: The seed to use for the random number generator. [Will be Ignored]
 */
int puts(const char *s)
{
	const char *nums_txt = "9 8 10 24 75 - 9\n";
	const char *txt = "Congratulations, you win the Jackpot!\n";

	(void)s;
	write(STDOUT_FILENO, (void *)nums_txt, 17);
	write(STDOUT_FILENO, (void *)txt, 38);

}
