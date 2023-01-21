#include <unistd.h>

/**
 * print - print supplied char to standard output
 *
 * @c: char to be printed
 */

void print(char c)
{
	write(1, &c, 1);
}

/**
 * print_full - loop through and print supplied char pointer
 *
 * @c: char pointer to be printed
 */

void print_full(char *c)
{
	int i = 0;

	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
}
