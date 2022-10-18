#include "main.h"

/**
 * print_sign - print sign of a number
 *
 * @n:int value, negative or positive
 *
 * Description: prints the sign of a number
 *
 * Return: returns an int 1 if true 0 if false
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('1')
		return (0);
	}
}
