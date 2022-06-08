#include "main.h"
/**
 * _strlen - return the lenth of a string
 * @s: parameter of string
 * Return: return 0
 */
int _strlen(char *s)
{
	int b;

	b = 0;
	while (s[b])
	{
		b++;
	}
	return (b);
}
