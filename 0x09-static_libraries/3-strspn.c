#include "main.h"

/**
 * _strspn - function that gets the length substring
 * @s: string
 * @accept: check byte
 * Return: n of byte;
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j;
	int n;

	n = 0;
	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (*s + i); 
				break;
			}
		}
	}
	return (n);
}
