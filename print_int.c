#include "main.h"

/**
 * print_int - function that prints integer to input output
 *
 * @num: integer to print
 *
 * Return: number of printed digits
 */
int print_int(int num)
{
	int digit, qoutient, check;
	int exp = 1, count = 0;

	if (num < 0)
	{
		count += _putchar('-');
		num *= -1;
	}

	qoutient = num;
	while (qoutient >= 10)
	{
		qoutient /= 10;
		exp *= 10;
	}
	while (num >= 10 && exp >= 10)
	{
		digit = num / exp;
		count += _putchar('0' + digit);
		check = num / (exp / 10);
		while (check % 10 == 0 && exp >= 100)
		{
			count += _putchar('0');
			exp /= 10;
			check = num / (exp / 10);
		}
		num %= exp;
		exp /= 10;
	}
	count += _putchar('0' + num);
	return (count);
}


