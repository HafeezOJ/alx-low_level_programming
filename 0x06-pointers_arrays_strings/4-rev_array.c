#include "main.h"
#include <string.h>
/**
 * reverse_array - reverses an array
 *
 * @a: pointer to int array
 * @n: size of array
 *
 * Description: reverse an array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int midway, i, k, temp;

	k = n - 1;
	if (n % 2 != 0)
	{
		midway = (n - 1) / 2;
	}
	else
	{
		midway = n / 2;
	}

	for (i = 0; i < midway; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + k);
		*(a + k) = temp;
		k--;
	}
}
