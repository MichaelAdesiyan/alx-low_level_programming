#include "main.h"

/**
 * _memcpy - prints buffer in hexa
 * @src: buffer
 * @dest: buffer2
 * @n: size
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int b)
{
	unsigned int x;

	for (x = 0; x < b; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
