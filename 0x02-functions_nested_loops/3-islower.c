#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lower case
 *
 * @c:int value of char
 *
 * Description: A function to check for lower case
 *
 * Return: returns an int 1 if true 0 if false
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
