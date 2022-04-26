#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Return: void
 */
void print_alphabet(void)
{
	int x = 97;

	while (x <= 122)
	{
		char t = x;

		_putchar(t);
		x++;
	}
	_putchar('\n');
}
