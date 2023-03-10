#include "main.h"

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

	int char_count __attribute__((unused));

	i = char_count = 0;
	va_start(strarg, format);
	while (format != NULL && format[i])
	{
		if (format[i] != '%' && format[i] != '\0')
		{
			char_count += print(format[i]);
			i++;
			continue;
		}
		if (format[i] == '%' && format[i + 1] != '\0' &&
			format[i + 1] != '.')
		{
			form_func_ptr = gettyp(format[i + 1]);
			if (form_func_ptr != NULL)
			{
				char_count += form_func_ptr(strarg);
				i += 2;
				continue;
			}
			if (form_func_ptr == NULL)
			{
				char_count += print('%');
				i++;
				continue;
			} i += 2;
			continue;
		} else
			return (-1);
		i++;
	}

	va_end(strarg);
	return (char_count);
}
