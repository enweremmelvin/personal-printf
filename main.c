#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count = 0;

	count = _printf("This is a text case - %c { %s { %%\n", 'A', "some");
	printf("%d\n", count);
	_printf("_______________________________||_______________________________\n");
	count = printf("This is a text case - %c { %s { %%\n", 'A', "some");
	printf("%d\n\n", count);

	_printf("% - 1\n");
	printf("% - 2\n");

	return (0);
}
