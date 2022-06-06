#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char h;

	for (i = 0; i <= 10; i++)
	{
		for (h = 'a'; h <= 'z'; h++)
		{
			_putchar(h);
		}
		_putchar('\n');
	}
	return (void);
}
