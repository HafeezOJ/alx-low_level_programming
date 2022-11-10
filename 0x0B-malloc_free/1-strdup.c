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
	unsigned int i = sizeof(*str);

	if (str == NULL)
		return (NULL);

	ar = malloc(i * sizeof(char));

	if (ar == NULL)
		return (ar);

	*ar = *str;
	return (ar);
}
