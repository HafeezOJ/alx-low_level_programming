#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @c: char to fill space
 * @size: size of buffer
 *
 * Description: appends src string to dest string
 *
 * Return: array of char initialized to c
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (ar);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
