#include <stdio.h>
/**
 * print_diagsums - print diagonal sums of a square matrix
 *
 * @a: multidimensional array of int
 * @size: size of the array a
 *
 * Description: diagonal sums of a square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, m;
	long int diag1_sum, diag2_sum;

	diag1_sum = 0;
	diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				diag1_sum += *(a + i * size + j);
				break;
			}
		}
	}

	for (k = 0; k < size; k++)
	{
		m = (size - 1) - k;
		diag2_sum += *(a + k * size + m);
	}
	printf("%ld, %ld\n", diag1_sum, diag2_sum);
}
