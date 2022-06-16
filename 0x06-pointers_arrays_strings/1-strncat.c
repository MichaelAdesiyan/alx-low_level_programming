#include <stdio.h>
#include "main.h"
/**
 * _strncat - function that concatenate two strings
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *scr, int n)
{
int dest_len;
int i;

for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;
for  (i = 0; i < n && scr[i] != 0; i++)
{
	dest[dest_len + i] = scr[i];
}
dest[dest_len + i] = '\0';
return (dest);
}
