#include "main.h"
#include "_putchar.c"

/**
 * main - Entry point.
 *
 * Description: Prints _putchar using custom header
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int size = sizeof(text);

	
	for (int counter = 0; counter < size ; counter++)
	{
		_putchar(text[counter]);
	}
	_putchar('\n');
	return (0);
}
