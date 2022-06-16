#include "main.h"
/**
 * cap_string - capitalize all words of strings
 * @str: string
 * Return: void;
 */

char *cap_string(char *str)
{
	int i;
	int bug;
	int h;
	char cas[] = ",\t;\n; .!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		bug = 0;

		if (i == 0)
		{
			bug = 1;
		}
		else
		{
			for (h = 0; cas[h] != '\0'; h++)
			{
				if (str[i - 1] == cas[h])
				{
					bug = 1;
					break;
				}
			}
		}

		if (bug == 1)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= ('a' - 'A');
			}
		}


	}
	return (str);
}
