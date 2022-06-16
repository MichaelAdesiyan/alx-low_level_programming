#include "main.h"
/**
 * *_strcat - this function concatenate two string together
 * @dest: first pointer added to and finally return
 * @src: second pointer holding string to be add.
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
