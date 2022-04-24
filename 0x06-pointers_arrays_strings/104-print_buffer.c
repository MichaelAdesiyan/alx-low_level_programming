#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer 
 * @size: size 
 * Return: void 
 */
void print_buffer(char *b, int size);
{
	int x, y, z;
	o = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size )
	{
		y = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
		for (x = 0; x < 10; x++)
		{
			if (x < y)
				printf("%02x", *(b + x + y));
			else
				printf(" ");
			if (y % 2)
			{
				printf(" ");
			}
		}
		for (y = 0; y < z; y++)
		{
			int c = *(b + x + y);
			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		x += 10;
	}
}
