#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for lower case
 *
 * @c:int value of char
 *
 * Description: A function to check for alphabet
 *
 * Return: returns an int 1 if true 0 if false
 */

int _isalpha(int c)
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
