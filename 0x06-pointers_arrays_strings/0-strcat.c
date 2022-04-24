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
	char *tmp = dest;
	int x = 0, y = 0;
	
	while (dest[x])
	       x++;
	
	while (src[x])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (tmp);
}	
