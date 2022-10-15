#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints lower alphabets from a - z
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char base_hex0_9, base_hexa_f;

	for (base_hex = '0'; base_hex <= '9'; base_hex++)
	{
		putchar(base_hex);
	}
	for (base_hexa_f = 'a'; basehexa_f <= 'f'; base_hex++)
	{
		putchar(base_hexa_f);
	}
	putchar('\n');
	return (0);
}
