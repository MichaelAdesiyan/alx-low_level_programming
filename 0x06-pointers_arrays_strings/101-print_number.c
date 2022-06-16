#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int d = 1, i, p;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (i = 0; n / d > 9; i++, d *= 10)
		;
	for (; d >= 1; n %= d, d /= 10)
	{
		p = n / d;
		_putchar('0' + p);
	}
}
