#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 *
 * @str: char string to be copied
 *
 * Description: duplicates a string
 *
 * Return: duplictated string
 */

char *_strdup(char *str)
{
	char *ar;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;

	ar = malloc(i * sizeof(char));
	if (ar == NULL)
		return (ar);

	for (j = 0; j < i; j++)
		ar[j] = str[j];
	return (ar);
}
