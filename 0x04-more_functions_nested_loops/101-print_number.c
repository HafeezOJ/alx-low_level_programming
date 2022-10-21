#include "main.h"
#include <stdlib>
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	if (n < 0)
		_putchar('-');

	if (n <= 9)
	{
		_putchar(n + '0');
	}
	else if (n <= 99)
	{
		_putchar((abs(n) / 10) + '0');
		_putchar((abs(n) % 10) + '0');
	}
	else if (n < 999)
	{
		_putchar((abs(n) / 100) + '0');
		_putchar(((abs(n) / 10) % 10) + '0');
		_putchar((abs(n) % 10) + '0');
	}
	else
	{
		_putchar((abs(n) / 1000) + '0');
		_putchar(((abs(n) / 100) % 100) + '0');
		_putchar(((abs(n) / 10) % 10) + '0');
		_putchar((abs(n) % 10) + '0');
	}
	_putchar('\n');
}
