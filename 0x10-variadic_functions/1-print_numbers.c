#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 *
 * @n: number of parameters
 * @separator: separator between numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list largs;
	unsigned int i;

	va_start(largs, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(largs, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(largs);
}
