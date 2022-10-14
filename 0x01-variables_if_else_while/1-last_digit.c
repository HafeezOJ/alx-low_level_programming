#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Desription: checks if the last digit of a number is greater than 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, r;

	r = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (r > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, r);
	}
	else if (r == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, r);
	}
	else if ((r < 6) && (r != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	}
	return (0);
}
