#include "main.h"

/**
 * print_binary - function that prints int in binary base
 *
 * @num: integer to print
 *
 * Return: number of printed digits
 */
int print_binary(unsigned int num)
{
	unsigned int digit, qoutient, check;
	unsigned int exp = 1, count = 0;

	qoutient = num;
	while (qoutient >= 2)
	{
		qoutient /= 2;
		exp *= 2;
	}
	while (num >= 2 && exp >= 2)
	{
		digit = num / exp;
		count += _putchar('0' + digit);
		check = num / (exp / 2);
		while (check % 2 == 0 && exp >= 2)
		{
			count += _putchar('0');
			exp /= 2;
			check = num / (exp / 2);
		}
		num %= exp;
		exp /= 2;
	}
	count += _putchar('0' + num);
	return (count);
}


