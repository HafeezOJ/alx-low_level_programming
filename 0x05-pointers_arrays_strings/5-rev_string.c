#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 *
 * @s: pointer to string s
 *
 * Description: prints reverse of a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int midway, i, k;
	char temp;

	if (length % 2 != 0)
	{
		midway = (length - 1) / 2;
	}
	else
	{
		midway = length / 2;
	}
	k = length - 1;

	for (i = 0; i < midway; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + k);
		*(s + k) = temp;
		k--;

	}
}
