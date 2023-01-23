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
	int char_count = print(percent);

	(void) strarg;

	if (char_count == 1)
		count += 1;
	else
		char_count = 0;

	return (char_count);
}
