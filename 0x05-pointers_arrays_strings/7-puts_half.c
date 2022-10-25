#include "main.h"
#include <string.h>
/**
 * puts_half - writes second half of a string
 *
 * @str: pointer to char
 *
 * Description: prints to second half of a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = strlen(str), i, n;

	n = length / 2;

	if (length % 2 != 0)
	{
		n = (length - 1) / 2;
		/*m = n - 1; */
	}

	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
