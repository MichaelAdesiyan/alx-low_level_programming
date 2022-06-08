#include "main.h"
/**
 * jack_bauer - Write a function that prints every minute
 * Return: return void
 */
void jack_bauer(void)
{
	int hrs;
	int mnt;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mnt = 0; mnt < 60; mnt++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mnt / 10) + '0');
			_putchar((mnt % 10) + '0');
			_putchar('\n');
		}
	}
}
