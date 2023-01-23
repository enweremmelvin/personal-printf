#include "main.h"
#include <stdio.h>

/**
 * _printf - custom built printf funtion
 *
 * @format: string to be formatted and printed
 *
 * Return: formnated characters
 */

int _printf(const char *format, ...)
{
	int i;
	va_list strarg;
	int (*form_func_ptr)(va_list);

	char res __attribute__((unused));
	int char_count __attribute__((unused));

	i = char_count = 0;
	va_start(strarg, format);

	while (format[i])
	{
		if (format == NULL)
			return (-1);
		if (format[i] != '%' && format[i] != '\0')
		{
			/* get number of bytes printed (string length)*/
			char_count += print(format[i]);
			i++;

			continue;
		}
		if (format[i] == '%')
		{
			form_func_ptr = gettyp(format[i + 1]);

			if (form_func_ptr != NULL)
			{
				char_count += form_func_ptr(strarg);
				i++;
			}
		}
		i++;

		if (format[i] == '\0')
			break;
	}

	va_end(strarg);
	return (char_count);
}
