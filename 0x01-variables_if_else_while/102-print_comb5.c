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
	int num, num1, num2, num3;

	for (num = 48; num < 58; num++)
	{
		for (num1 = 48; num1 < 58; num1++)
		{
			for (num2 = 48; num2 < 58; num2++)
			{
				for (num3 = 48; num3 < 58; num3++)
				{
					if (num3 == num || num3 == num1)
						continue;
					putchar(num);
					putchar(num1);
					putchar(' ');
					putchar(num2);
					putchar(num3);
					if (num == 57 && num1 == 56 && num2 == 57 && num3 == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
