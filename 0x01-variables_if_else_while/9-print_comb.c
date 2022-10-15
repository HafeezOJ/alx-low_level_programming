#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
