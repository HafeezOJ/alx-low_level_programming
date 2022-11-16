#include "function_pointers.h"
/**
 * array_iterator - applies a function to each item in array
 *
 * @array: int array
 * @size: size of array
 * @action: function pointer to applied to array items
 *
 * Description: applies action to array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
