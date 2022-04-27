#include "main.h"
#include <stdio.h>
/**
 * _strchr - prints buffer in hexa
 * @s: buffer
 * @c: buffer2
 *
 * Return: Nothing.
 */
char *_strchr(char *a, char b)
{
	while (*a != b)
	{
		if (!*a++)
		{
			return (0);
		}
	}
		return (a);
}
