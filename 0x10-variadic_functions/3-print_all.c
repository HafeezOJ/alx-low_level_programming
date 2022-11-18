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
	printf("%d", format);
}
