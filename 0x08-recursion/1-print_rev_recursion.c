#include "main.h"
/**
 * _print_rev_recursion - recursion to print reverse of string
 *
 * @s: point to char string to print
 *
 * Description: prints a string in reverse
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
