#include "main.h"
#include <unistd.h>

/**
 * _putchar - a function that write char to standard output
 *
 * @c: char to print
 *
 * Return: 1 (sucess)
 *        -1 otherwise
 */
int _putchar(char c)
{
	if (c == -1)
		return (0);
	return (write(1, &c, 1));
}

/**
 * _puts - a function that prints string on standard output
 *
 * @s: pointer to string to print
 *
 * Return: number of printed char
 */
int _puts(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		len++;
	}
	return (len);
}
