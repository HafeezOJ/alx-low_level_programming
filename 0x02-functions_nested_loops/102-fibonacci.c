#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	int first_num, second_num, next_num, count;

	first_num = 1;
	second_num = 2;
	count = 0;

	printf("%d", first_num);
	putchar(',');
	putchar(' ');
	printf("%d", second_num);
	putchar(',');
	putchar(' ');
	count += 2;

	while (count <= 50)
	{
		next_num = first_num + second_num;
		printf("%d", next_num);
		putchar(',');
		putchar(' ');
		first_num = second_num;
		second_num = next_num;
		count++;
	}

	printf("\n");
	return (0);
}
