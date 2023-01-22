#include "main.h"

/**
 * print - print supplied char to standard output
 *
 * @c: char to be printed
 *
 * Return: total number of characters printed
 */

int print(char c)
{
	int count = 0;

	count = write(1, &c, 1);

	return (count);
}

/**
 * print_full - loop through and print supplied char pointer
 *
 * @c: char pointer to be printed
 *
 * Return: total number of characters printed
 */

int print_full(char *c)
{
	int count = 0;
	int i = 0;

	while (c[i])
	{
		count += write(1, &c[i], 1);
		i++;
	}

	return (count);
}
