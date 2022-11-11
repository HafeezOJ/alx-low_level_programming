#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate n bytes of string to another.
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to concatenate
 *
 * Description - concatenate n bytes of string
 *
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	if (n >= j)
		n = j;

	ar = malloc(sizeof(char) * (i + n + 1));

	if (ar == NULL)
	{
		return (ar);
	}

	for (k = 0; k < i; k++)
		ar[k] = s1[k];

	limit = n;
	for (j = 0; j <= limit; k++, j++)
		ar[k] = s2[j];
	ar[j] = '\0';

	return (ar);
}
