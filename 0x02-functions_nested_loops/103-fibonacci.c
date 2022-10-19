#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	long int first_num, second_num, next_num, count, sum;

	first_num = 1;
	second_num = 2;
	count = 0;
	sum = 2;

	for(;;)
	{
		next_num = first_num + second_num;

		if (next_num > 4000000)
		{
			break;
		}

		if (next_num % 2 == 0)
		{
			sum += next_num;
		}

		first_num = second_num;
		second_num = next_num;
	}
	printf("%ld", sum);
	printf("\n");

	return (0);
}
