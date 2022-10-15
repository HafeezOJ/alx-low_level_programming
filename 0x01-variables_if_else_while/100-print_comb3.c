#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num1;

	for (num = 48; num < 58; num++)
	{
		for (num1 = num + 1; num1 < 58; num1++)
		{
			putchar(num);
			putchar(num1);
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
