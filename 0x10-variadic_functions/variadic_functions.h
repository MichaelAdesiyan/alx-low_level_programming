#ifndef VARIADIC_FUNCTION_
#define VARIADIC_FUNCTION_

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct dt -  struct
 * @letter: leter signifying data type
 * @func: function ptr
 */
typedef struct dt 
{
	char leter;
	void (*func)(va_list ap);
} datatype;

#endif 
