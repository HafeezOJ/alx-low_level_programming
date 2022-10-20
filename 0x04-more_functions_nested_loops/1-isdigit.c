#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks if c is a digit
 *
 * @c:int value of char
 *
 * Description: A function to check for upper case
 *
 * Return: returns an int 1 if true 0 if false
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
