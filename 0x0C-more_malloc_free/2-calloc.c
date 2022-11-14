#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates block of memory
 *
 * @nmemb: number of elements in memory
 * @size: size of memory
 *
 * Description: allocate size memory and set value to 0
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*(p + i) = 0;
	return (p);
}