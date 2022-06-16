#include "main.h"
/**
 * leet - encoding string
 * @str: string to encode
 * Return: void
 */
char *leet(char *str)
{
	int i;
	int h;

	char cas0[] = "aeotl";
	char cas1[] = "AEOTL";
	char cas2[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (h = 0; h < 5; h++)
		{
			if (str[i] == cas0[h] || str[i] == cas1[h])
			{
				str[i] = cas2[h];
				break;
			}
		}
	}
	return (str);
}
