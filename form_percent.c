#include "main.h"

/**
 * form_percent - print the (%) character
 *
 * @strarg: variadic list of parameters
 *
 * Return: return number of characters printer
 */

int form_percent(va_list strarg)
{
	char percent = '%';
	int char_count = 1 + print(percent);

	(void) strarg;

	return (char_count);
}
