#include "main.h"
/**
 * reverse_array - print array in reverse
 * @a: pointer of array
 * @n: array size
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, q;

	for (q = n / 2; q > 0; q--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
