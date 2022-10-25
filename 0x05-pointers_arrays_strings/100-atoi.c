#include "main.h"
#include <stdlib.h>
/**
 * _atoi - convert string to in
 *
 * @s: pointer to string s
 *
 * Description: convert string to int
 *
 * Return: int
 */

int _atoi(char *s)
{
	if (s[0] == '+' || s[0] == '-')
		s = s + 1;
	return (atoi(s));
}
