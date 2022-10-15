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

	for (base_hex0_9 = '0'; base_hex0_9 <= '9'; base_hex0_9++)
	{
		putchar(base_hex0_9);
	}
	for (base_hexa_f = 'a'; base_hexa_f <= 'f'; base_hexa_f++)
	{
		putchar(base_hexa_f);
	}
	putchar('\n');
	return (0);
}
