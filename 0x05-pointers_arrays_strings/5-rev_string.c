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
	/*char rev_s = s;*/
	char c;
	int i, m;

	m = 0;
	for (i = (l - 1); i >= 0; i--)
	{
		c = s[i];
		s[i] = s[m];
		s[m] = c;
		m++;
	}
}
