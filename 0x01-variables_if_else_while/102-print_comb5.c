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
		for (num1 = num; num1 < 58; num1++)
		{
			for (num2 = num1; num2 < 58; num2++)
			{
				for (num3 = num2 + 1; num3 < 58; num3++)
				{
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
