#include "main.h"

/**
 * form_int - function to handle &d and %i
 *
 * @argf: pointer to int
 *
 * Return: number of printed digits
 */
int form_int(va_list argf)
{
	int num = va_arg(argf, int);

	return (print_int(num));
}
