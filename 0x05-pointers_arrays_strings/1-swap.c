#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: first parameter
 * @b: second parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp_1;
	int temp_2;

	temp_1 = *a;
	temp_2 = *b;
	*b = temp_1;
	*a = temp_2;
}
