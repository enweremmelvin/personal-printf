/**
 * conditional - check for format specifier
 *
 * sign: check for the format modulus (%) character
 * specifier: match specifier
 *
 * Return: char
 */

char gettyp(char sign, char specifier)
{
	if (
		(sign == '%' && specifier == 'c') ||
		(sign == '%' && specifier == '%')
		)
		return ('c');
	else if ((sign == '%' && specifier == 'd') ||
		 (sign == '%' && specifier == 'i') ||
		 (sign == '%' && specifier == 'u')
		)
		return ('d');
	else if (sign == '%' && specifier == 'f')
		return ('f');
	else if (sign == '%' && specifier == 's')
		return ('s');
	else
		return ('O');
}
