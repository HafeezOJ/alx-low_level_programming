#include "main.h"

/**
 * print_alphabet_x10 - A function to print alphabets 10 times
 *
 * Description: Prints a-z using _putchar function
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
