#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: prints all possible different combinations of 3 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num1, num2;

	for (num = 48; num < 58; num++)
	{
		for (num1 = num + 1; num1 < 58; num1++)
		{
			for (num2 = num1 + 1; num2 < 58; num2++)
			{
				putchar(num);
				putchar(num1);
				putchar(num2);
				if (num == 55 && num1 == 56 && num2 == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
