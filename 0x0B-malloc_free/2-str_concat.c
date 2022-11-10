#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concantenate string
 *
 * @s1: char string 1
 * @s2: char string 2
 *
 * Description: concatenate strings
 *
 * Return: char string pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned int i, j, total_length, m, n, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[i] != '\0')
		j++;

	total_length = i + j + 1;

	ar = malloc(total_length * sizeof(char));

	if (ar == NULL)
		return (ar);

	for (m = 0; m < i; m++)
		ar[m] = s1[m];
	k = 0;
	for (n = i; n < total_length - 1; n++)
	{
		ar[n] = s2[k];
		k++;
	}
	return (ar);
}
