#include "main.h"
#include <string.h>
/**
 * print_rev - writes to stdout
 *
 * @s: pointer to string s
 *
 * Description: print to standard output
 *
 * Return: void
 */

void print_rev(char *s)
{
	int l =  strlen(s);
	int i;

	for (i = (l - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
