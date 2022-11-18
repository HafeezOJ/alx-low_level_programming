#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 *
 * @n: number of parameters
 * @separator: separator between strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list largs;
	unsigned int i;
	char *str;

	va_start(largs, n);

	for (i = 0; i < n; i++)
	{
		if (!va_arg(largs, char *))
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(largs, char *));
		}

		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(largs);
	printf("\n");
}
