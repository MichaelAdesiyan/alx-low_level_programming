#include "main.h"
/**
 * _put - function prints a string following by newline
 * @str: parameter
 * Return: void
 */
void _puts(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
