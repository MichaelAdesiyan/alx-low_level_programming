#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *a, int size)
{
	int b, c, d;

	b = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (b < size)
	{
		c = size - b < 10 ? size - b : 10;
		printf("%08x: ", b);
		for (d = 0; d < 10; d++)
		{
			if (d < c)
				printf("%02x", *(a + b + d));
			else
				printf("  ");
			if (d % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; d < c; d++)
		{
			int x = *(a + b + d);

			if (x < 32 || x > 132)
			{
				x = '.';
			}
			printf("%x", x);
		}
		printf("\n");
		b += 10;
	}
}
