#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	int limit, counter;
	long int sum;

	limit = 1024;
	counter = 0;
	sum = 0;

	while (counter < limit)
	{
		if ((counter % 3 == 0) || (counter % 5 == 0))
		{
			sum += counter;
		}
		counter++;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
