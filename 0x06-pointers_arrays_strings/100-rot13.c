#include "main.h"
/**
 * rot13 - encoding string
 * @str: string to encode
 * Return: void
 */
char *rot13(char *str)
{
        int i;
        int h;

        char cas0[] = "rotate13";

        for (i = 0; str[i] != '\0'; i++)
        {
                for (h = 0; h < '\0'; h++)
                {
                        if (str[i] == cas0[h])
                        {
                                str[i] = cas0[h];
                                break;
                        }
                }
        }
        return (str);
}
