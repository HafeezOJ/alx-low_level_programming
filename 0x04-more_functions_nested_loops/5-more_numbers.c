#include "main.h"
/**
 * more_numbers - 0 - 14 10 times.
 *
 * Description: Prints 0 - 9
 *
 * Return: void
 */
void more_numbers(void)
{
	int num, count;

	for (count = 0; count < 10 ; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');

	}
}
