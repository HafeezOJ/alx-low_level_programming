#include "main.h"
/**
 * print_numbers - function to print 0 - 9.
 *
 * Description: Prints 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10 ; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
