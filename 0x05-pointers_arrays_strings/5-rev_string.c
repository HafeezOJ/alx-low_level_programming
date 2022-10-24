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
	const int l =  strlen(s);
	char *rev_s;
	int i, m;
	
	strcpy(rev_s, s);
	m = 0;

	for (i = (l - 1); i >= 0; i--)
	{
		rev_s[m] = s[i];
		m++;
	}
	s = rev_s;
}
