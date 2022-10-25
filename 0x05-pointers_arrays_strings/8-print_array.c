#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n number of elements from an array
 *
 * @a: pointer to int array
 * @n: number of array elements to print
 *
 * Description: prints specific number of array elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i == n - 1)
			break;
		printf(", ");
	}
	_putchar('\n');
}
