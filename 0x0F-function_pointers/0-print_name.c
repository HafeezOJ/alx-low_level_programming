#include "function_pointers.h"
/**
 * print_name - prints a name
 *
 * @name: char array
 * @f: function pointer
 *
 * Description: prints a name using a function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
