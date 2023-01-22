#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * conditional - check for format specifier
 *
 * sign: check for the format modulus (%) character
 * specifier: match specifier
 *
 * Return: char
 */

int (*gettyp(char specifier))(va_list)
{
	int i = 0;

	/** declare array of type 'struct formspec' to get format
	 * and point to function to handle it */
	form_spec spec_list[] = {
		{"c", form_char},
		{"s", form_string},
		{"%", form_percent},
		{NULL, NULL}
	};

	while (spec_list[i].c)
	{
		if (strcmp(spec_list[i].c, &specifier) == 0)
			return (spec_list[i].handle);
		i++;
	}

	return (NULL);
}
