#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 *
 * @min: min number
 * @max: max number
 *
 * Description: creates an array of integers
 *
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int *numbers;
	int i, diff;

	if (min > max)
		return (NULL);

	diff = (max - min) + 1;

	numbers = malloc(diff * sizeof(int));

	if (numbers == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		numbers[i] = i;
	return (numbers);
}
