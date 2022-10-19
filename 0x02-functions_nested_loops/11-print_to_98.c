#include "main.h"
#include <stdlib.h>
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
	int i;

	if (n < 98)
	{
		for (i = n; i <= 97; i++)
		{
			if(i < 0)
			{
				_putchar('-');
			}
			_putchar((abs(i) / 10) + '0');
			_putchar((abs(i) % 10) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((98 / 10) + '0');
			_putchar((98 % 10) + '0');
		}
	}
	else if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		for (i = 0; i >= 97; i--)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((98 / 10) + '0');
			_putchar((98 % 10) + '0');
		}
	}

}
