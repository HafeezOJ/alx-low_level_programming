#include "main.h"
/**
 * print_diagonal - print diagonal line n times.
 *
 * @n: int number of times line is printed
 *
 * Description: Prints diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int count, space;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			if (count == 0)
			{
				_putchar(92);
			}
			else
			{
				for (space = 0; space < n; space++)
				{
					_putchar(' ');
				}
				_putchar(92);
			}
		}
		_putchar('\n');
	}
}
