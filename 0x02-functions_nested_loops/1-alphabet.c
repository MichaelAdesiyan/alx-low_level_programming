#include "main.h"

/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 * Return: void
 */
void print_alphabet_x10(void)
{
	int x;
	char y;

	for (x = 0; x < 10; ++x)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
