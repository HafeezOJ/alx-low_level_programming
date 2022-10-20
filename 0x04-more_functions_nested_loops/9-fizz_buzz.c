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

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else
		{
			printf("%d", num);
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
