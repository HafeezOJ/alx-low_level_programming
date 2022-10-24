#include "main.h"
/**
 * swap_int - reset a value to 98 using pointer
 *
 * @a: pointer to a
 * @b: pointer to b
 *
 * Description: use pointer to swap values
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i = *b;

	*b = *a;
	*a = i;
}
