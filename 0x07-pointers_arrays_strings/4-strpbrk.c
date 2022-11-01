#include <string.h>
/**
 * _strpbrk - matches any part of string accept in string s
 *
 * @s: char string to be searched from
 * @accept: char string to be checked for
 *
 * Description: prints any part of accept that is in s
 *
 * Return: pointer point to matched part
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
