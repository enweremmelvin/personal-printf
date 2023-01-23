#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * gettyp - check for format specifier
 *
 * @specifier: match specifier
 *
 * Return: function pointer for handling function or null if
 * there was no match
 */

int (*gettyp(char specifier))(va_list)
{
	int i = 0;

	/* struct array to match specifier and point to handle function */

	form_spec spec_list[] = {
		{"c", form_char},
		{"s", form_string},
		{"%", form_percent},
		{NULL, NULL}
	};

	while (spec_list[i].c != NULL)
	{
		if (strcmp(spec_list[i].c, &specifier) == 0)
			return (spec_list[i].handle);
		i++;
	}

	return (NULL);
}
