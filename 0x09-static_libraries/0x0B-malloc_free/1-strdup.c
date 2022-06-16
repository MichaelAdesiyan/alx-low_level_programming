#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Return a newly allocated memorey contain a copy of a string
 * @str: - string to be copied
 * Return: Null of copied pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *mem;

	if (str == NULL)
		return (NULL);
	for (; str[j] != '\0'; j++)
		;
	mem = malloc(j * sizeof(*str) + 1);
	if (mem == 0)
		return (NULL);
	for (; i < j; i++)
		mem[i] = str[i];
	return (mem);
}
