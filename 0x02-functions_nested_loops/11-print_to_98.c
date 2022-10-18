#include "main.h"

/**
 * print_to_98 - prints up to or down to 98 from n
 *
 * @n: input number as an int
 *
 * Description: prints from n to 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98, n++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}

}
