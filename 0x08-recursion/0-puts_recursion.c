#include "main.h"
/**
 * _puts_recursion - puts char to screen recursively
 *
 * @s: point to char string to print
 *
 * Description: recursively prints char
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
		_putchar(*s);
	s = s + 1;
	_puts_recursion(s);
}
