#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @num: input number as an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: returns an int
 */

int print_last_digit(int num)
{
	int remainder;

	remainder = num % 10;

	if (remainder < 0)
	{
		_putchar(-remainder + '0');
		return (-remainder);
	}
	else
	{
		_putchar(remainder + '0');
		return (remainder);
	}
}
