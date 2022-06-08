#include "main.h"
/**
 * print_sign - function print the sign of a number
 * @n: initialized fuction
 * Return: return always -1, 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
