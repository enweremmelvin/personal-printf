#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

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
	char res __attribute__((unused));
	int numB __attribute__((unused));
	char *str __attribute__((unused));

	str = "";
	i = numB = 0;
	va_start(strarg, format);

	while (format && format[i])
	{
		if (format == NULL)
			return (-1);

		if (format[i] != '%' && format[i - 1] != '%')
		{
			/* get number of bytes printed (string length)*/
			print(format[i]);
			numB++;
		}
		else
		{
			res = gettyp(format[i], format[i + 1]);

			switch (res)
			{
			case 'c':
				print(va_arg(strarg, int));
				break;
			case 'd':
				print(va_arg(strarg, int));
				break;
			case 'f':
				print(va_arg(strarg, double));
				break;
			case 's':
				print_full(va_arg(strarg, char *));
				break;
			}
		}

		i++;
	}

	va_end(strarg);
	return (numB);
}
