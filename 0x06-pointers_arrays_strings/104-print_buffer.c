#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer 
 * @size: size 
 * Return: void 
 */
void print_buffer(char *b, int size)
{
	int x, y, z;

	x = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		y = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
		for (z = 0; z < 10; z++)
		{
			if (z < y)
				printf("%02x", *(b + x + z));
			else
				printf("  ");
			if (y % 2)
			{
				printf(" ");
			}
		}