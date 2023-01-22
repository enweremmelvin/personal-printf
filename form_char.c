#include "main.h"

/**
 * form_char - print the char format specifier
 *
 * @strarg: variadic list of parameters
 *
 * Return: return number of characters printer
 */

int form_char(va_list strarg)
{
	char print_char;
	int char_count = 0;

	print_char = (char)va_arg(strarg, int);
	char_count = print(print_char);

	return (char_count);
}
