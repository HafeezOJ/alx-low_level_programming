#include "main.h"

/**
 * print_alphabet: A function to print alhabets
 *
 * Description: Prints a-z using _putchar function
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
