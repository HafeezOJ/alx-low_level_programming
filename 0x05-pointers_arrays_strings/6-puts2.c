#include "main.h"
#include <string.h>
/**
 * puts2 - writes alternate char
 *
 * @str: pointer to char
 *
 * Description: prints to alternate char from string
 *
 * Return: void
 */

void puts2(char *str)
{
	int count = strlen(str), i;

	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
