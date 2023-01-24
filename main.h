#ifndef MAIN_H
#define MAIN_H

/* include frequently used libraries */
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * formspec - struct for matching format specifiers
 *
 * @c: character of format specifier
 * @handle: pointer to handling function for type
 */

typedef struct formspec
{
	char *c;
	int (*handle)(va_list);
} form_spec;

/**
 * custom built print functions using write
 *
 * print - print a single character
 * print_full - print a string of characters
 */
int print(char c);
int print_full(char *c);

/* other function prototypes */
int _printf(const char *format, ...);
int (*gettyp(char specifier))(va_list);

/* functions for handling specifier cases */
int form_char(va_list);
int form_string(va_list);
int form_percent(va_list);

#endif
