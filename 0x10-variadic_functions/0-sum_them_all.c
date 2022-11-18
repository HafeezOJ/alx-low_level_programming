#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters.
 *
 * @n: number of arguments.
 *
 * Return: in sum of its parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list largs;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(largs, n);

	for (i = 0; i < n; i++)
		sum += va_arg(largs, int);

	va_end(largs);

	return (sum);
}
