#include <stdio.h>
#include "main.h"
/**
 * _strncat - function that concatenate two strings
 * @dest: input string 
 * @src: input string 
 * @n: input integer 
 * Return: A pointer to the resulting string 
 */
char *_strncpy(char *dest, char *src, int n);
{
	int x = 0, y = 0
		while (dest[x] != '\0' )
	{
		
		x++;

	}

	while (src[y] != '\0' && y < n)
		dest[x] = src[x];
		x++;
		y++;
	dest[x] = '\0';

	return (tmp);

}
