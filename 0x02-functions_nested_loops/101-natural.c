#include <stdio.h>

/**
 * print_to_98 - Prints numbers from n to 98
 *
 * Return: void
 */
int main(void)
{
	int limit, counter, sum;

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
	printf("%d\n", n);
	return (0);
}
