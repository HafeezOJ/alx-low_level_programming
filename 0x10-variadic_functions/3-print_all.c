#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 *
 * @format: format of argument
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list largs;

	va_start(largs, format);
	while(va_arg(largs, format))
	{
		
	}


	va_end(largs);
	printf("\n");
}
