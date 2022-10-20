#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for upper case
 *
 * @c:int value of char
 *
 * Description: A function to check for upper case
 *
 * Return: returns an int 1 if true 0 if false
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
