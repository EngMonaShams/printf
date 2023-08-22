#include "main.h"


/**
 * _printf -  afuntion that prints different datat types
 *
 * @format: a char ctring
 *
 * Return: number of printed chars
 */
int _printf(const char *format, ...)
{
	va_list argf;
	int i, count = 0;
	const char *ptr = format;
	bool match;
	specifier_t form_spec[] = {{"c", form_char}, {"s", form_string},
		{"%", form_percent}, {"d", form_int}, {"i", form_int}, {"b", form_binary},
		{NULL, NULL}};

	if (format == NULL)
		return (-1);
	va_start(argf, format);
	while (*ptr)
	{
		if (*ptr != '%')
		{
			count += _putchar(*ptr++);
			continue;
		}
		ptr++;
		if (*ptr == ' ' || *ptr == '\0')
			return (-1);
		match = false;
		for (i = 0; form_spec[i].specifier != NULL; i++)
			if (*ptr == *(form_spec[i].specifier))
			{
				count += form_spec[i].f(argf);
				match = true;
				break;
			}
		if (!match)
		{
			count += _putchar('%');
			count += _putchar(*ptr);
		}
		ptr++;
	}
	va_end(argf);
	return (count);
}
