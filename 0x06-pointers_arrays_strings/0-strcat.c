#include "main.h"
/*
 * ADESIYAN MICHAEL TOBILOBA 
 * _strcat - function that concatenates two strings
 * @dest: input string 
 * @src: input string 
 * Return: pointer to the string 
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;
	
	x = 0;
	
	while (dest[x] != 0)
	{
	       x++;
	}

	
	y = 0;
	
	while (src[y] != 0)
	{

		dest[x] = src[y];
		x++;
		y++;
	}

	return (dest);
}	
