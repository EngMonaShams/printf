#include "main.h"

/**
 * form_binary - the function to handle %b specifier
 *
 * @argf: pointer char to print
 *
 * Return: number of bits
 */
int form_binary(va_list argf)
{
	int b = va_arg(argf, int);

	return (print_binary(b));
}
