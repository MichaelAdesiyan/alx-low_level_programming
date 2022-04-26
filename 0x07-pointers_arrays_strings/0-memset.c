#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: mamory area to return
 * @b: constant byte
 * @n: size of bytes
 * Return: Nothing.
 */

char *_memset(char *c, char z, unsigned int m)
{
	unsigned int x = 0;

	while (x < m)
	{

		*(c + x) = z;
		x += 1;
	}
	return (c);
}
