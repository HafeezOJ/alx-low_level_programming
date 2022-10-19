#include "main.h"

/**
 * times_table - Prints the n times table
 *
 *@n: n times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, op;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= n; b++)
		{
			op = a * b;
			_putchar(',');
			_putchar(' ');
			if (op <= n)
			{
				_putchar(' ');
				_putchar(op + '0');
			}
			else
			{
				_putchar((op / 10) + '0');
				_putchar((op % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
