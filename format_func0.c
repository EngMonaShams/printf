#include "main.h"

/**
 * form_char - function to handle %c specifier
 *
 * @argf: pointer char to print
 *
 * Return: 1
 */
int form_char(va_list argf)
{
	int c = va_arg(argf, int);

	if (c >= 0)
		return (_putchar(c));
	return (0);
}

/**
 * form_string - function to handle % s specifier
 *
 * @argf: pointer to string
 *
 * Return: length of string
 */
int form_string(va_list argf)
{
	char *s = va_arg(argf, char *);

	if (s == NULL)
		return (_puts("(null)"));
	return (_puts(s));
}

/**
 * form_percent - function to print % character
 *
 * @argf: pointer to char
 *
 * Return: 1
 */
int form_percent(va_list argf)
{
	(void) argf;

	return (_putchar('%'));
}
