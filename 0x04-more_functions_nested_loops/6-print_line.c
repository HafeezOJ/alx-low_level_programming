#include "main.h"
/**
 * print_line - print line n times.
 *
 * @n: int number of times line is printed
 *
 * Description: Prints 0 - 9
 *
 * Return: void
 */
void print_line(int n)
{
	int count;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
