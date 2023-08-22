#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * struct specifier - structure
 *
 * @specifier: format specifier
 * @f: function selection
 */
typedef struct specifier
{
	const char *specifier;
	int (*f)(va_list);
} specifier_t;

int _printf(const char *format, ...);

/*printing to standard output functions*/
int _putchar(char c);
int _puts(char *s);

/*format specifier handling functions*/
int form_char(va_list argf);
int form_string(va_list argf);
int form_percent(va_list argf);
int form_int(va_list argf);
int form_binary(va_list argf);

int print_binary(unsigned int num);
int print_int(int num);

#endif
