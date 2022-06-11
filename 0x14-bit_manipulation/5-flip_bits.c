#include "main.h"
/**
 * flip_bits - function that returns the number of bits you need to flip
 * @n: parameter
 * @m: parameter
 * Return: the necessary number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, bits = 0;
	
	diff = n ^ m;

	while (diff > 0)
	{
		bits += (diff & 1);
		diff >>= 1;
	}
	return (bits);
}
