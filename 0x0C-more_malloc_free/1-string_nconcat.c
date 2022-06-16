#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function concatenate two string
 * @s1: first string
 * @s2: second string
 * @n: int
 * Return: return pointer, if fail return Null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i1;
	unsigned int i2;
	unsigned int x1;
	unsigned int x2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i1 = 0;
	while (s1[i1] != '\0')
		i1++;
	i2 = 0;
	while (s2[i2] != '\0')
		i2++;
	if (n > i2)
		n = i2;
	p = malloc((i1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	x1 = 0;
	while (x1 < i1)
	{
		p[x1] = s1[x1];
		x1++;
	}
	x2 = i1;
	while (x2 < (i1 + n))
	{
		p[x2] = s2[x2 - i1];
		x2++;
	}
	p[x2] = '\0';
	return (p);
}
