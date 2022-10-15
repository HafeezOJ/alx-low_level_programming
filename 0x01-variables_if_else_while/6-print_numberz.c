#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints 0 - 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
