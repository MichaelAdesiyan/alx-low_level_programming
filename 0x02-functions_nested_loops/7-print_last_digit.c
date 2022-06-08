#include "main.h"
/**
 * print_last_digit - write a function that print that last digit of a number
 * @n: parameter integer
 * Return: return value
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return  (n);
}
