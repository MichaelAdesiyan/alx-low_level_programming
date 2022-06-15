#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_int - prints int
 * @list: arguments from print_all
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_float - prints float
 * @list: arguments from print_all
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_char - prints int
 * @list: arguments from print_all
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_str - prints string
 * @list: arguments from print_all
 */
void print_str(va_list list)
{
	char *s;
	s = va_arg(list, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints any type
 * @format: arguments to print
 */
void print_all(const char * const format, ...)
{
	
	va_list list;
	int i = 0, j = 0;
	char *sep = "";

	datatype choice[] = 
	{
		{'i', print_int},
		{'f', print_float},
		{'c', print_char},
		{'s', print_str},
		{'\0', NULL} 
	};

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (choice[j].letter == format[i])
			{
				printf("%s", sep);
				choice[j].printer(list);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}