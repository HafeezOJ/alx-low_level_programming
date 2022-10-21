#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int num, pf, count;

	int i;

	int flag;

	num = 612852475143;

	for (count = 2; count <= num; count++)
	{
		if (num % count == 0)
		{
			for (i = 2; i <= 9; i++)
			{
				if (count % i == 0)
				{
					break;
					flag = 0;
				}
				flag = 1;

			}
			if (flag == 1)
				pf = count;
		}
	}

	printf("%ld\n", pf);
	return (0);
}
