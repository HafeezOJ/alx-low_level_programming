#include "main.h"
/**
 * print_triangle - prints a triangle.
 *
 * @size: size of the triangle
 *
 * Description: Prints a triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int count, space, triangle;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 1; count <= size; count++)
		{
			for (space = 0; space < (size - count); space++)
			{
				_putchar(' ');
			}
			for (triangle = 0; triangle < count; triangle++)
			{
				_putchar('#');
			}
			if (count != size)
				_putchar('\n');
		}
		_putchar('\n');
	}
}
