#include "main.h"
/**
 * print_most_numbers - function to print 0 - 9 except 2 and 4.
 *
 * Description: Prints 0 - 9
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10 ; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		_putchar(num + '0');
	}
	_putchar('\n');
}
