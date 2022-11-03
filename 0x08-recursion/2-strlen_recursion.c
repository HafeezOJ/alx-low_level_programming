#include "main.h"
/**
 * _strlen_recursion - recursion to return string length
 *
 * @s: point to char string to print
 *
 * Description: return string length
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		s = s + 1;
		_strlen_recursion(s);
	}
	return (count);
}
