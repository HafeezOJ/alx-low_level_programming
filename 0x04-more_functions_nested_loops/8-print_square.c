#include "main.h"
/**
 * print_square - print square .
 *
 * @size: int number of times # is printed
 *
 * Description: Prints square
 *
 * Return: void
 */
void print_square(int size)
{
	int v_count, h_count;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (v_count = 0; v_count < size; v_count++)
		{
			for (h_count = 0; h_count < size; h_count++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
