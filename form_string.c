#include "main.h"

/**
 * form_string - print the string when fed (%s)
 *
 * @strarg: variadic list of parameters
 *
 * Return: return number of characters printer
 */

int form_string(va_list strarg)
{
	char *print_char;
	int char_count = 0;

	print_char = va_arg(strarg, char *);
	char_count += print_full(print_char);

	return (char_count);
}
