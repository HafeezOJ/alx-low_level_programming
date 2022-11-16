#include "function_pointers.h"
/**
 * int_index - search for int in an array
 *
 * @array: int array
 * @size: size of array
 * @cmp: function pointer to compare int
 *
 * Description: search for int in an array
 *
 * Return: int - index of first int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, test;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		test = cmp(array[i]);
		if (test != 0)
			return (i);
	}
	return (-1);
}
